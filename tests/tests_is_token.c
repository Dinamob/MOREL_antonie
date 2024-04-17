#include "tests_includes.h"

Test(is_token, char_null)
{
    char c = '\0';
    char const *str = "abcd";

    cr_assert_eq(is_token(c, str), false);
}

Test(is_token, token_null)
{
    char c = 'b';

    cr_assert_eq(is_token(c, ""), false);
}

Test(is_token, token_not_here)
{
    char c = 'b';
    char const *str = "mmm";

    cr_assert_eq(is_token(c, str), false);
}

Test(is_token, token_true)
{
    char c = 'b';
    char const *str = "abcd";

    cr_assert_eq(is_token(c, str), true);
}