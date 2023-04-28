#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../testedFunctions.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../testedFunctions.c");

EXTERN_C_LINKAGE void add_tests_testSuiteBegin(void);
EXTERN_C_LINKAGE int add_tests_callTest(const char*);

CPPTEST_TEST_SUITE(add_tests);
        CPPTEST_TEST_SUITE_SETUP(add_tests_testSuiteSetUp);
        CPPTEST_TEST(add_tests_test_add_manual);
        CPPTEST_TEST_SUITE_TEARDOWN(add_tests_testSuiteTearDown);
CPPTEST_TEST(add_tests_test_add_from_wizard);
CPPTEST_TEST_SUITE_END();
        
void add_tests_test_add(void);

void add_tests_test_add_from_wizard(void);
CPPTEST_TEST_SUITE_REGISTRATION(add_tests);

void add_tests_testSuiteSetUp(void);
void add_tests_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void add_tests_testSuiteTearDown(void);
void add_tests_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void add_tests_setUp(void);
void add_tests_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void add_tests_tearDown(void);
void add_tests_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_add_manual */
void add_tests_test_add_manual()
{
    int i, j, ret;
    i = 1;
    j = 2;

    ret = add(i, j);

    // simulated test failure:
    // CPPTEST_ASSERT_INTEGER_EQUAL(4, ret);
    CPPTEST_ASSERT_INTEGER_EQUAL(3, ret);
}
/* CPPTEST_TEST_CASE_END test_add_manual */

/* CPPTEST_TEST_CASE_BEGIN test_add_from_wizard */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t add(uint32_t, uint32_t) */
void add_tests_test_add_from_wizard()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    uint32_t _a  = 10;
    /* Initializing argument 2 (b) */ 
    uint32_t _b  = 20;
    {
        /* Tested function call */
        uint32_t _return  = add(_a, _b);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(30, ( _return ) );
    }
}
/* CPPTEST_TEST_CASE_END test_add_from_wizard */
