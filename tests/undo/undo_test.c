#include <stdlib.h>

#include "seatest.h"

#include "../../src/undo.h"

static int i;

static void
execute(const char *cmd)
{
	static const char *execs[] = {
		"undo_msg3",
		"undo_msg2_cmd2",
		"undo_msg2_cmd1",
		"undo_msg1",
		"do_msg1",
		"do_msg2_cmd1",
		"do_msg2_cmd2",
		"do_msg3",
		"undo_msg3",
		"undo_msg2_cmd2",
		"undo_msg2_cmd1",
	};

	assert_string_equal(execs[i++], cmd);
}

static void
exec_dummy(const char *cmd)
{
}

static void
setup(void)
{
	static int undo_levels = 10;

	i = 0;

	init_undo_list(&execute, &undo_levels);
}

static void
test_underflow(void)
{
	assert_int_equal(0, undo_group());
	assert_int_equal(0, undo_group());
	assert_int_equal(0, undo_group());
	assert_int_equal(-1, undo_group());

	assert_int_equal(4, i);
}

static void
test_redo(void)
{
	assert_int_equal(0, undo_group());
	assert_int_equal(0, undo_group());
	assert_int_equal(0, undo_group());
	assert_int_equal(0, redo_group());
	assert_int_equal(0, redo_group());
	assert_int_equal(0, redo_group());

	assert_int_equal(8, i);
}

static void
test_list_truncating(void)
{
	assert_int_equal(0, undo_group());
	assert_int_equal(0, undo_group());
	assert_int_equal(0, undo_group());
	assert_int_equal(0, redo_group());
	assert_int_equal(0, redo_group());
	assert_int_equal(0, redo_group());
	assert_int_equal(0, undo_group());
	assert_int_equal(0, undo_group());

	cmd_group_begin("msg4");
	assert_int_equal(0, add_operation("do_msg4", "undo_msg4"));
	cmd_group_end();

	assert_int_equal(-1, redo_group());

	assert_int_equal(11, i);
}

static void
test_cmd_1undo_1redo(void)
{
	static int undo_levels = 10;

	reset_undo_list();
	init_undo_list(&exec_dummy, &undo_levels);

	cmd_group_begin("msg0");
	assert_int_equal(0, add_operation("do_msg0", "undo_msg0"));
	cmd_group_end();

	assert_int_equal(0, undo_group());
	assert_int_equal(0, redo_group());
}

void
undo_test(void)
{
	test_fixture_start();

	fixture_setup(setup);

	run_test(test_underflow);
	run_test(test_redo);
	run_test(test_list_truncating);
	run_test(test_cmd_1undo_1redo);

	test_fixture_end();
}

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab : */