#include "tests_includes.h"

Test(my_strlen, empty_string)
{
    const char *str = "";
    cr_assert_eq(my_strlen(str), 0);
}

Test(my_strlen, no_empty_string)
{
    const char *str = "Hello, world!";
    cr_assert_eq(my_strlen(str), 13);
}

Test(my_strlen, string_with_null)
{
    const char *str = "Hello\0world";
    cr_assert_eq(my_strlen(str), 5);
}

Test(my_strlen, NULL_string)
{
    const char *str = NULL;
    cr_assert_eq(my_strlen(str), -1);
}