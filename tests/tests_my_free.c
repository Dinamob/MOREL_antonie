#include "tests_includes.h"

Test(my_free, check_free)
{
    char *str = strdup("abcd");
    my_free(str);
}

Test(my_free, check_free_null)
{
    char *str = NULL;
    my_free(str);
}