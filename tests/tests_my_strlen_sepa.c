#include "tests_includes.h"

Test(my_strlen_sepa, empty_string)
{
    const char *str = "";
    cr_assert_eq(my_strlen_sepa(str, str), 0);
}
