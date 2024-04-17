#include "tests_includes.h"

Test(my_strndup, n_nega)
{
    char *str = my_strndup("abcd", -1);

    cr_assert_null(str);
}

Test(my_strndup, str_NULL)
{
    char *str = NULL;
    char *str1 = my_strndup(str, 0);

    cr_assert_null(str1);
}

Test(my_strndup, check_good_dup)
{
    char *str = my_strndup("abcd", 2);

    cr_assert_str_eq(str, "ab");
}

Test(my_strdup, check_dup)
{
    char *str = my_strndup("abcd", 6);

    cr_assert_str_eq(str, "abcd");
}