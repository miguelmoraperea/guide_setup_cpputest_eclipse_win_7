#include "CppUTest/CommandLineTestRunner.h"

int main(int ac, char **av)
{
    /* These checks are here to make sure assertions outside test runs don't crash */
    CHECK(true);
    LONGS_EQUAL(1, 1);

    return CommandLineTestRunner::RunAllTests(ac, av); /* cover alternate method */
}

