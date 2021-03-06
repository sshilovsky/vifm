/* vifm
 * Copyright (C) 2014 xaizek.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include "ioeta.h"

#include <stddef.h> /* NULL */
#include <stdint.h> /* uint64_t */

#include "../../utils/fs.h"
#include "../../utils/str.h"
#include "../ioeta.h"
#include "ionotif.h"

void
ioeta_add_item(ioeta_estim_t *estim, const char path[])
{
	++estim->total_items;

	replace_string(&estim->item, path);

	ionotif_notify(IO_PS_ESTIMATING, estim);
}

void
ioeta_add_file(ioeta_estim_t *estim, const char path[])
{
	if(!is_symlink(path))
	{
		estim->total_bytes += get_file_size(path);
	}

	ioeta_add_item(estim, path);
}

void
ioeta_add_dir(ioeta_estim_t *estim, const char path[])
{
	ioeta_add_item(estim, path);
}

void
ioeta_update(ioeta_estim_t *estim, const char path[], int finished,
		uint64_t bytes)
{
	if(estim == NULL)
	{
		return;
	}

	estim->current_byte += bytes;
	if(estim->current_byte > estim->total_bytes)
	{
		/* Estimation are out of date, update them. */
		estim->total_bytes = estim->current_byte;
	}

	if(finished)
	{
		++estim->current_item;
		if(estim->current_item > estim->total_items)
		{
			/* Estimation are out of date, update them. */
			estim->total_items = estim->current_item;
		}
	}

	if(path != NULL)
	{
		replace_string(&estim->item, path);
	}

	ionotif_notify(IO_PS_IN_PROGRESS, estim);
}

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab cinoptions-=(0 : */
/* vim: set cinoptions+=t0 : */
