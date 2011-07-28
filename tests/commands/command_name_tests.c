#include <string.h>

#include "seatest.h"

#include "../../src/cmds.h"
#include "../../src/macros.h"

static struct cmd_info cmdi;

static int goto_cmd(const struct cmd_info* cmd_info);
static int delete_cmd(const struct cmd_info* cmd_info);

static const struct cmd_add commands[] = {
	{ .name = "",       .abbr = NULL, .handler = goto_cmd,   .id = -1,    .range = 1,    .cust_sep = 0,
		.emark = 0,       .qmark = 0,   .expand = 0,           .regexp = 0, .min_args = 0, .max_args = 0, },
	{ .name = "delete", .abbr = "d",  .handler = delete_cmd, .id = -1,    .range = 1,    .cust_sep = 0,
		.emark = 1,       .qmark = 0,   .expand = 0,           .regexp = 0, .min_args = 0, .max_args = 1, },
};

static int
goto_cmd(const struct cmd_info* cmd_info)
{
	return 0;
}

static int
delete_cmd(const struct cmd_info* cmd_info)
{
	cmdi = *cmd_info;
	return 0;
}

static void
setup(void)
{
	add_buildin_commands(commands, ARRAY_LEN(commands));
}

static void
teardown(void)
{
}

static void
test_builtin(void)
{
	struct cmd_add command = {
		.name = "", .abbr = NULL, .id = -1,    .handler = goto_cmd, .range = 1,    .cust_sep = 0,
		.emark = 0, .expand = 0,  .qmark = 0,  .regexp = 0,         .min_args = 0, .max_args = 0,
	};

	assert_true(add_buildin_cmd("!", 0, &command) == 0);

	assert_false(add_buildin_cmd("?", 0, &command) == 0);

	assert_false(add_buildin_cmd("&", 0, &command) == 0);

	assert_false(add_buildin_cmd("2", 0, &command) == 0);
}

static void
test_user_add(void)
{
	assert_int_equal(0, execute_cmd("command udf a"));

	assert_int_equal(CMDS_ERR_INCORRECT_NAME, execute_cmd("command ! a"));

	assert_int_equal(0, execute_cmd("command udf! a"));

	assert_int_equal(CMDS_ERR_INCORRECT_NAME, execute_cmd("command ud!f a"));

	assert_int_equal(0, execute_cmd("command udf? a"));

	assert_int_equal(CMDS_ERR_INCORRECT_NAME, execute_cmd("command u?df a"));

	assert_int_equal(CMDS_ERR_INCORRECT_NAME, execute_cmd("command u0d1f2 a"));

	assert_int_equal(CMDS_ERR_INCORRECT_NAME, execute_cmd("command 0u0d1f2 a"));
}

static void
test_user_exec(void)
{
	assert_int_equal(0, execute_cmd("command udf a"));
	assert_int_equal(0, execute_cmd("command udf! a"));
	assert_int_equal(0, execute_cmd("command udf? a"));

	assert_int_equal(0, execute_cmd("udf"));
	assert_int_equal(0, execute_cmd("udf!"));
	assert_int_equal(0, execute_cmd("udf?"));
}

static void
test_abbreviations(void)
{
	assert_int_equal(0, execute_cmd("%d!"));
	assert_int_equal(10, cmdi.begin);
	assert_int_equal(100, cmdi.end);
	assert_true(cmdi.emark);
}

void
command_name_tests(void)
{
	test_fixture_start();

	fixture_setup(setup);
	fixture_teardown(teardown);

	run_test(test_builtin);
	run_test(test_user_add);
	run_test(test_user_exec);
	run_test(test_abbreviations);

	test_fixture_end();
}

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab : */