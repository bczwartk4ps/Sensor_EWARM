#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../testedFunctions.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../testedFunctions.c");

EXTERN_C_LINKAGE void test_suite_updateStruct_testSuiteBegin(void);
EXTERN_C_LINKAGE int test_suite_updateStruct_callTest(const char*);

CPPTEST_TEST_SUITE(test_suite_updateStruct);
        CPPTEST_TEST_SUITE_SETUP(test_suite_updateStruct_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(test_suite_updateStruct_testSuiteTearDown);
CPPTEST_TEST_DS(test_suite_updateStruct_test_updateStruct_ds, CPPTEST_DS("updateStruct"));
CPPTEST_TEST(test_suite_updateStruct_test_updateStruct_log_error);
CPPTEST_TEST_SUITE_END();
        

void test_suite_updateStruct_test_updateStruct_ds(void);
void test_suite_updateStruct_test_updateStruct_log_error(void);
CPPTEST_TEST_SUITE_REGISTRATION(test_suite_updateStruct);

void test_suite_updateStruct_testSuiteSetUp(void);
void test_suite_updateStruct_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void test_suite_updateStruct_testSuiteTearDown(void);
void test_suite_updateStruct_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void test_suite_updateStruct_setUp(void);
void test_suite_updateStruct_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void test_suite_updateStruct_tearDown(void);
void test_suite_updateStruct_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_updateStruct_ds */
/* CPPTEST_TEST_CASE_CONTEXT void updateStruct(uint16_t, struct allSensorState *) */
void test_suite_updateStruct_test_updateStruct_ds()
{
    /* Pre-condition initialization */
	CPPTEST_EXPECT_NCALLS("log_error", CPPTEST_DS_GET_UINTEGER("n_calls"));
    /* Initializing argument 1 (updateMsgType) */ 
    uint16_t _updateMsgType  = CPPTEST_DS_GET_UINTEGER("in_updateMsgType");
    /* Initializing argument 2 (as) */ 
    struct allSensorState _as_0 ;
     uint32_t _as_0_on_1 = _as_0.on  = CPPTEST_DS_GET_UINTEGER("in_as_on");
     uint32_t _as_0_status_1 = _as_0.status  = CPPTEST_DS_GET_UINTEGER("in_as_status");
    struct allSensorState * _as  = & _as_0;


    {
        /* Tested function call */
        updateStruct(_updateMsgType, _as);

        /* Post-condition check */
        CPPTEST_ASSERT(0 != ( _as ) );
        CPPTEST_ASSERT_UINTEGER_EQUAL(CPPTEST_DS_GET_UINTEGER("out_as_on"), _as->on);
        CPPTEST_ASSERT_UINTEGER_EQUAL(CPPTEST_DS_GET_UINTEGER("out_as_status"), _as->status);
    }
}
/* CPPTEST_TEST_CASE_END test_updateStruct_ds */

/* CPPTEST_TEST_CASE_BEGIN test_updateStruct_log_error */
void test_suite_updateStruct_test_updateStruct_log_error()
{
	CPPTEST_EXPECT_NCALLS("log_error", 1);
	uint16_t msgType = 200u;
	updateStruct(msgType, NULL);
}
/* CPPTEST_TEST_CASE_END test_updateStruct_log_error */
