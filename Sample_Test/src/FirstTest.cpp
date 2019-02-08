
static void (*real_one) ();
static void stub(){}

#include "CppUTest/TestHarness.h"

/* declare TestGroup with name FirstTest */
TEST_GROUP(FirstTest)
{
	/* declare a setup method for the test group. Optional. */
    void setup ()
    {
    	/* Set method real_one to stub. Automatically restore in teardown */
        UT_PTR_SET(real_one, stub);
    }

    /* declare a teardown method for the test group. Optional */
    void teardown()
    {
    }
}; /* do not forget semicolumn */

/* declare one test within the test group */
TEST(FirstTest, TestName)
{
    /* check two longs are equal */
    LONGS_EQUAL(1, 1);

    /* check a condition */
    CHECK(true == true);

    /* check a string */
    STRCMP_EQUAL("HelloWorld", "HelloWorld");
}

