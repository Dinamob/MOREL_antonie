#include "tests_includes.h"

Test(my_array_len, check_len_5)
{
    char *arr[] =  {"bonjour", "la", "mif", "je", "mange", NULL};
    cr_assert_eq(my_array_len(arr), 5);
}

Test(my_array_len, check_len_empty)
{
    char *arr[] =  {NULL};
    cr_assert_eq(my_array_len(arr), 0);
}

Test(my_array_len, arr_null)
{
    char **arr = NULL;
    cr_assert_eq(my_array_len(arr), -1);
}