#include <stdlib.h>

#include "seatest.h"

#include "../../src/engine/completion.h"

static void
test_unite_removes_duplicates(void)
{
	char *buf;

	assert_int_equal(0, vle_compl_add_match("echo"));
	vle_compl_finish_group();
	assert_int_equal(0, vle_compl_add_match("ec"));
	vle_compl_finish_group();
	assert_int_equal(0, vle_compl_add_match("echo"));
	vle_compl_finish_group();
	assert_int_equal(0, vle_compl_add_match("e"));

	assert_int_equal(4, vle_compl_get_count());

	vle_compl_unite_groups();

	assert_int_equal(3, vle_compl_get_count());

	buf = vle_compl_next();
	assert_string_equal("e", buf);
	free(buf);

	buf = vle_compl_next();
	assert_string_equal("ec", buf);
	free(buf);

	buf = vle_compl_next();
	assert_string_equal("echo", buf);
	free(buf);
}

static void
test_unite_sorts(void)
{
	char *buf;

	assert_int_equal(0, vle_compl_add_match("ecz"));
	vle_compl_finish_group();
	assert_int_equal(0, vle_compl_add_match("ecj"));
	vle_compl_finish_group();
	assert_int_equal(0, vle_compl_add_match("eca"));
	vle_compl_finish_group();

	assert_int_equal(3, vle_compl_get_count());

	vle_compl_unite_groups();

	assert_int_equal(3, vle_compl_get_count());

	buf = vle_compl_next();
	assert_string_equal("eca", buf);
	free(buf);

	buf = vle_compl_next();
	assert_string_equal("ecj", buf);
	free(buf);

	buf = vle_compl_next();
	assert_string_equal("ecz", buf);
	free(buf);
}

void
groups_unite_tests(void)
{
	test_fixture_start();

	run_test(test_unite_removes_duplicates);
	run_test(test_unite_sorts);

	test_fixture_end();
}

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab cinoptions-=(0 : */
/* vim: set cinoptions+=t0 : */
