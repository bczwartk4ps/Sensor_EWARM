#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("../../testedFunctions.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("../../testedFunctions.c");

EXTERN_C_LINKAGE void TestSuite_testedFunctions_c_9bf41ea9_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_testedFunctions_c_9bf41ea9_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_testedFunctions_c_9bf41ea9);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_testedFunctions_c_9bf41ea9_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_add_1);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_add_2);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_add_3);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_callToNoReturn_1);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_callToNoReturn_2);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_callToNoReturn_3);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_computeWeight_1);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_computeWeight_2);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_computeWeight_3);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_conditional_add_1);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_conditional_add_2);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_conditional_add_3);
        CPPTEST_TEST_DISABLED(TestSuite_testedFunctions_c_9bf41ea9_test_infiniteLoop_1);
        CPPTEST_TEST_DISABLED(TestSuite_testedFunctions_c_9bf41ea9_test_infiniteLoop_2);
        CPPTEST_TEST_DISABLED(TestSuite_testedFunctions_c_9bf41ea9_test_infiniteLoop_3);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesBusyWait_1);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesBusyWait_2);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesBusyWait_3);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesConditionalReturn_1);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesConditionalReturn_2);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesConditionalReturn_3);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_multipleCalls_1);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_multipleCalls_2);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_multipleCalls_3);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_power_1);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_power_2);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_power_3);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_processValue_1);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_processValue_2);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_processValue_3);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_updateStruct_1);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_updateStruct_2);
        CPPTEST_TEST(TestSuite_testedFunctions_c_9bf41ea9_test_updateStruct_3);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_testedFunctions_c_9bf41ea9_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_testedFunctions_c_9bf41ea9_test_add_1(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_add_2(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_add_3(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_callToNoReturn_1(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_callToNoReturn_2(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_callToNoReturn_3(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_computeWeight_1(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_computeWeight_2(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_computeWeight_3(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_conditional_add_1(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_conditional_add_2(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_conditional_add_3(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_infiniteLoop_1(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_infiniteLoop_2(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_infiniteLoop_3(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesBusyWait_1(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesBusyWait_2(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesBusyWait_3(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesConditionalReturn_1(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesConditionalReturn_2(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesConditionalReturn_3(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_multipleCalls_1(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_multipleCalls_2(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_multipleCalls_3(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_power_1(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_power_2(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_power_3(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_processValue_1(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_processValue_2(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_processValue_3(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_updateStruct_1(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_updateStruct_2(void);
void TestSuite_testedFunctions_c_9bf41ea9_test_updateStruct_3(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_testedFunctions_c_9bf41ea9);

void TestSuite_testedFunctions_c_9bf41ea9_testSuiteSetUp(void);
void TestSuite_testedFunctions_c_9bf41ea9_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_testedFunctions_c_9bf41ea9_testSuiteTearDown(void);
void TestSuite_testedFunctions_c_9bf41ea9_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_testedFunctions_c_9bf41ea9_setUp(void);
void TestSuite_testedFunctions_c_9bf41ea9_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_testedFunctions_c_9bf41ea9_tearDown(void);
void TestSuite_testedFunctions_c_9bf41ea9_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_add_1 */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t add(uint32_t, uint32_t) */
void TestSuite_testedFunctions_c_9bf41ea9_test_add_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    uint32_t _a  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 2 (b) */ 
    uint32_t _b  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        uint32_t _return  = add(_a, _b);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(4294967294, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_add_1 */

/* CPPTEST_TEST_CASE_BEGIN test_add_2 */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t add(uint32_t, uint32_t) */
void TestSuite_testedFunctions_c_9bf41ea9_test_add_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    uint32_t _a  = 1u;
    /* Initializing argument 2 (b) */ 
    uint32_t _b  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        uint32_t _return  = add(_a, _b);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_add_2 */

/* CPPTEST_TEST_CASE_BEGIN test_add_3 */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t add(uint32_t, uint32_t) */
void TestSuite_testedFunctions_c_9bf41ea9_test_add_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    uint32_t _a  = 0u;
    /* Initializing argument 2 (b) */ 
    uint32_t _b  = 1u;
    {
        /* Tested function call */
        uint32_t _return  = add(_a, _b);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(1, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_add_3 */

/* CPPTEST_TEST_CASE_BEGIN test_callToNoReturn_1 */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t callToNoReturn(uint32_t, uint32_t, uint32_t) */
void TestSuite_testedFunctions_c_9bf41ea9_test_callToNoReturn_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    uint32_t _a  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 2 (b) */ 
    uint32_t _b  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (condition) */ 
    uint32_t _condition  = 2;
    {
        /* Tested function call */
        uint32_t _return  = callToNoReturn(_a, _b, _condition);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(4294967294, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_callToNoReturn_1 */

/* CPPTEST_TEST_CASE_BEGIN test_callToNoReturn_2 */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t callToNoReturn(uint32_t, uint32_t, uint32_t) */
void TestSuite_testedFunctions_c_9bf41ea9_test_callToNoReturn_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    uint32_t _a  = 1u;
    /* Initializing argument 2 (b) */ 
    uint32_t _b  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (condition) */ 
    uint32_t _condition  = 2;
    {
        /* Tested function call */
        uint32_t _return  = callToNoReturn(_a, _b, _condition);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_callToNoReturn_2 */

/* CPPTEST_TEST_CASE_BEGIN test_callToNoReturn_3 */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t callToNoReturn(uint32_t, uint32_t, uint32_t) */
void TestSuite_testedFunctions_c_9bf41ea9_test_callToNoReturn_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    uint32_t _a  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 2 (b) */ 
    uint32_t _b  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (condition) */ 
    uint32_t _condition  = cpptestLimitsGetMaxUnsignedInt();
    {
        /* Tested function call */
        uint32_t _return  = callToNoReturn(_a, _b, _condition);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(4294967294, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_callToNoReturn_3 */

/* CPPTEST_TEST_CASE_BEGIN test_computeWeight_1 */
/* CPPTEST_TEST_CASE_CONTEXT int computeWeight(int) */
void TestSuite_testedFunctions_c_9bf41ea9_test_computeWeight_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (val) */ 
    int _val  = 0;
    {
        /* Tested function call */
        int _return  = computeWeight(_val);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_computeWeight_1 */

/* CPPTEST_TEST_CASE_BEGIN test_computeWeight_2 */
/* CPPTEST_TEST_CASE_CONTEXT int computeWeight(int) */
void TestSuite_testedFunctions_c_9bf41ea9_test_computeWeight_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (val) */ 
    int _val  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = computeWeight(_val);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_computeWeight_2 */

/* CPPTEST_TEST_CASE_BEGIN test_computeWeight_3 */
/* CPPTEST_TEST_CASE_CONTEXT int computeWeight(int) */
void TestSuite_testedFunctions_c_9bf41ea9_test_computeWeight_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (val) */ 
    int _val  = -1;
    {
        /* Tested function call */
        int _return  = computeWeight(_val);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_computeWeight_3 */

/* CPPTEST_TEST_CASE_BEGIN test_conditional_add_1 */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t conditional_add(uint32_t, uint32_t, uint32_t) */
void TestSuite_testedFunctions_c_9bf41ea9_test_conditional_add_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    uint32_t _a  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 2 (b) */ 
    uint32_t _b  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (condition) */ 
    uint32_t _condition  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing global variable static_int_variable */ 
    {
         static_int_variable  = cpptestLimitsGetMaxUnsignedInt();
    }
    {
        /* Tested function call */
        uint32_t _return  = conditional_add(_a, _b, _condition);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( static_int_variable ));
    }
}
/* CPPTEST_TEST_CASE_END test_conditional_add_1 */

/* CPPTEST_TEST_CASE_BEGIN test_conditional_add_2 */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t conditional_add(uint32_t, uint32_t, uint32_t) */
void TestSuite_testedFunctions_c_9bf41ea9_test_conditional_add_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    uint32_t _a  = 1u;
    /* Initializing argument 2 (b) */ 
    uint32_t _b  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing argument 3 (condition) */ 
    uint32_t _condition  = cpptestLimitsGetMaxUnsignedInt();
    /* Initializing global variable static_int_variable */ 
    {
         static_int_variable  = cpptestLimitsGetMaxUnsignedInt();
    }
    {
        /* Tested function call */
        uint32_t _return  = conditional_add(_a, _b, _condition);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( static_int_variable ));
    }
}
/* CPPTEST_TEST_CASE_END test_conditional_add_2 */

/* CPPTEST_TEST_CASE_BEGIN test_conditional_add_3 */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t conditional_add(uint32_t, uint32_t, uint32_t) */
void TestSuite_testedFunctions_c_9bf41ea9_test_conditional_add_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    uint32_t _a  = 0u;
    /* Initializing argument 2 (b) */ 
    uint32_t _b  = 1u;
    /* Initializing argument 3 (condition) */ 
    uint32_t _condition  = 1u;
    /* Initializing global variable static_int_variable */ 
    {
         static_int_variable  = 1u;
    }
    {
        /* Tested function call */
        uint32_t _return  = conditional_add(_a, _b, _condition);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( static_int_variable ));
    }
}
/* CPPTEST_TEST_CASE_END test_conditional_add_3 */

/* CPPTEST_TEST_CASE_BEGIN test_infiniteLoop_1 */
/* CPPTEST_TEST_CASE_CONTEXT void infiniteLoop(int) */
void TestSuite_testedFunctions_c_9bf41ea9_test_infiniteLoop_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (c) */ 
    int _c  = 1;
    {
        /* Tested function call */
        infiniteLoop(_c);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_infiniteLoop_1 */

/* CPPTEST_TEST_CASE_BEGIN test_infiniteLoop_2 */
/* CPPTEST_TEST_CASE_CONTEXT void infiniteLoop(int) */
void TestSuite_testedFunctions_c_9bf41ea9_test_infiniteLoop_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (c) */ 
    int _c  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        infiniteLoop(_c);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_infiniteLoop_2 */

/* CPPTEST_TEST_CASE_BEGIN test_infiniteLoop_3 */
/* CPPTEST_TEST_CASE_CONTEXT void infiniteLoop(int) */
void TestSuite_testedFunctions_c_9bf41ea9_test_infiniteLoop_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (c) */ 
    int _c  = -1;
    {
        /* Tested function call */
        infiniteLoop(_c);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_infiniteLoop_3 */

/* CPPTEST_TEST_CASE_BEGIN test_modifyStructValuesBusyWait_1 */
/* CPPTEST_TEST_CASE_CONTEXT void modifyStructValuesBusyWait(struct sharedMsg *, struct allSensorState *) */
void TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesBusyWait_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sMsg) */ 
    struct sharedMsg * _sMsg  = 0 ;
    /* Initializing argument 2 (as) */ 
    struct allSensorState * _as  = 0 ;
    {
        /* Tested function call */
        modifyStructValuesBusyWait(_sMsg, _as);
        /* Post-condition check */
        CPPTEST_ASSERT_EQUAL(NULL, ( _sMsg ));
        CPPTEST_ASSERT_EQUAL(NULL, ( _as ));
    }
}
/* CPPTEST_TEST_CASE_END test_modifyStructValuesBusyWait_1 */

/* CPPTEST_TEST_CASE_BEGIN test_modifyStructValuesBusyWait_2 */
/* CPPTEST_TEST_CASE_CONTEXT void modifyStructValuesBusyWait(struct sharedMsg *, struct allSensorState *) */
void TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesBusyWait_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sMsg) */ 
    struct sharedMsg _sMsg_0 ;
    struct sharedMsg * _sMsg  = & _sMsg_0;
    /* Initializing argument 2 (as) */ 
    struct allSensorState * _as  = 0 ;
    {
        /* Tested function call */
        modifyStructValuesBusyWait(_sMsg, _as);
        /* Post-condition check */
        CPPTEST_ASSERT(0 != ( _sMsg ));
        CPPTEST_ASSERT_EQUAL(NULL, ( _as ));
    }
}
/* CPPTEST_TEST_CASE_END test_modifyStructValuesBusyWait_2 */

/* CPPTEST_TEST_CASE_BEGIN test_modifyStructValuesBusyWait_3 */
/* CPPTEST_TEST_CASE_CONTEXT void modifyStructValuesBusyWait(struct sharedMsg *, struct allSensorState *) */
void TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesBusyWait_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (sMsg) */ 
    struct sharedMsg * _sMsg  = 0 ;
    /* Initializing argument 2 (as) */ 
    struct allSensorState _as_0 ;
    struct allSensorState * _as  = & _as_0;
    {
        /* Tested function call */
        modifyStructValuesBusyWait(_sMsg, _as);
        /* Post-condition check */
        CPPTEST_ASSERT_EQUAL(NULL, ( _sMsg ));
        CPPTEST_ASSERT(0 != ( _as ));
    }
}
/* CPPTEST_TEST_CASE_END test_modifyStructValuesBusyWait_3 */

/* CPPTEST_TEST_CASE_BEGIN test_modifyStructValuesConditionalReturn_1 */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t modifyStructValuesConditionalReturn(Info *) */
void TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesConditionalReturn_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pResult) */ 
    Info * _pResult  = 0 ;
    /* Initializing global variable saveReg3 */ 
    {
         saveReg3  = 0;
    }
    /* Initializing global variable saveReg2 */ 
    {
         saveReg2  = 0;
    }
    /* Initializing global variable saveReg1 */ 
    {
         saveReg1  = 0;
    }
    {
        /* Tested function call */
        uint32_t _return  = modifyStructValuesConditionalReturn(_pResult);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(1, ( _return ));
        CPPTEST_ASSERT_EQUAL(NULL, ( _pResult ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg3 ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg2 ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg1 ));
    }
}
/* CPPTEST_TEST_CASE_END test_modifyStructValuesConditionalReturn_1 */

/* CPPTEST_TEST_CASE_BEGIN test_modifyStructValuesConditionalReturn_2 */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t modifyStructValuesConditionalReturn(Info *) */
void TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesConditionalReturn_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pResult) */ 
    Info _pResult_0 ;
    Info * _pResult  = & _pResult_0;
    /* Initializing global variable saveReg3 */ 
    {
         saveReg3  = 0;
    }
    /* Initializing global variable saveReg2 */ 
    {
         saveReg2  = 0;
    }
    /* Initializing global variable saveReg1 */ 
    {
         saveReg1  = 0;
    }
    {
        /* Tested function call */
        uint32_t _return  = modifyStructValuesConditionalReturn(_pResult);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(1, ( _return ));
        CPPTEST_ASSERT(0 != ( _pResult ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg3 ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg2 ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg1 ));
    }
}
/* CPPTEST_TEST_CASE_END test_modifyStructValuesConditionalReturn_2 */

/* CPPTEST_TEST_CASE_BEGIN test_modifyStructValuesConditionalReturn_3 */
/* CPPTEST_TEST_CASE_CONTEXT uint32_t modifyStructValuesConditionalReturn(Info *) */
void TestSuite_testedFunctions_c_9bf41ea9_test_modifyStructValuesConditionalReturn_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pResult) */ 
    Info * _pResult  = 0 ;
    /* Initializing global variable saveReg3 */ 
    {
         saveReg3  = 0;
    }
    /* Initializing global variable saveReg2 */ 
    {
         saveReg2  = 0;
    }
    /* Initializing global variable saveReg1 */ 
    {
         saveReg1  = 1u;
    }
    {
        /* Tested function call */
        uint32_t _return  = modifyStructValuesConditionalReturn(_pResult);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(1, ( _return ));
        CPPTEST_ASSERT_EQUAL(NULL, ( _pResult ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg3 ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg2 ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(1, ( saveReg1 ));
    }
}
/* CPPTEST_TEST_CASE_END test_modifyStructValuesConditionalReturn_3 */

/* CPPTEST_TEST_CASE_BEGIN test_multipleCalls_1 */
/* CPPTEST_TEST_CASE_CONTEXT int multipleCalls(Info *) */
void TestSuite_testedFunctions_c_9bf41ea9_test_multipleCalls_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pResult) */ 
    Info * _pResult  = 0 ;
    /* Initializing global variable saveReg3 */ 
    {
         saveReg3  = 0;
    }
    /* Initializing global variable saveReg2 */ 
    {
         saveReg2  = 0;
    }
    /* Initializing global variable saveReg1 */ 
    {
         saveReg1  = 0;
    }
    {
        /* Tested function call */
        int _return  = multipleCalls(_pResult);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( _return ));
        CPPTEST_ASSERT_EQUAL(NULL, ( _pResult ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg3 ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg2 ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg1 ));
    }
}
/* CPPTEST_TEST_CASE_END test_multipleCalls_1 */

/* CPPTEST_TEST_CASE_BEGIN test_multipleCalls_2 */
/* CPPTEST_TEST_CASE_CONTEXT int multipleCalls(Info *) */
void TestSuite_testedFunctions_c_9bf41ea9_test_multipleCalls_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pResult) */ 
    Info _pResult_0 ;
    Info * _pResult  = & _pResult_0;
    /* Initializing global variable saveReg3 */ 
    {
         saveReg3  = 0;
    }
    /* Initializing global variable saveReg2 */ 
    {
         saveReg2  = 0;
    }
    /* Initializing global variable saveReg1 */ 
    {
         saveReg1  = 0;
    }
    {
        /* Tested function call */
        int _return  = multipleCalls(_pResult);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( _return ));
        CPPTEST_ASSERT(0 != ( _pResult ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg3 ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg2 ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg1 ));
    }
}
/* CPPTEST_TEST_CASE_END test_multipleCalls_2 */

/* CPPTEST_TEST_CASE_BEGIN test_multipleCalls_3 */
/* CPPTEST_TEST_CASE_CONTEXT int multipleCalls(Info *) */
void TestSuite_testedFunctions_c_9bf41ea9_test_multipleCalls_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (pResult) */ 
    Info * _pResult  = 0 ;
    /* Initializing global variable saveReg3 */ 
    {
         saveReg3  = 0;
    }
    /* Initializing global variable saveReg2 */ 
    {
         saveReg2  = 0;
    }
    /* Initializing global variable saveReg1 */ 
    {
         saveReg1  = 1u;
    }
    {
        /* Tested function call */
        int _return  = multipleCalls(_pResult);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( _return ));
        CPPTEST_ASSERT_EQUAL(NULL, ( _pResult ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg3 ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( saveReg2 ));
        CPPTEST_ASSERT_UINTEGER_EQUAL(1, ( saveReg1 ));
    }
}
/* CPPTEST_TEST_CASE_END test_multipleCalls_3 */

/* CPPTEST_TEST_CASE_BEGIN test_power_1 */
/* CPPTEST_TEST_CASE_CONTEXT int power(int, int) */
void TestSuite_testedFunctions_c_9bf41ea9_test_power_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (base) */ 
    int _base  = 1;
    /* Initializing argument 2 (exp) */ 
    int _exp  = 1;
    /* Initializing global variable value */ 
    {
         value  = 1;
    }
    {
        /* Tested function call */
        int _return  = power(_base, _exp);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(1, ( _return ));
        CPPTEST_ASSERT_INTEGER_EQUAL(1, ( value ));
    }
}
/* CPPTEST_TEST_CASE_END test_power_1 */

/* CPPTEST_TEST_CASE_BEGIN test_power_2 */
/* CPPTEST_TEST_CASE_CONTEXT int power(int, int) */
void TestSuite_testedFunctions_c_9bf41ea9_test_power_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (base) */ 
    int _base  = 0;
    /* Initializing argument 2 (exp) */ 
    int _exp  = 1;
    /* Initializing global variable value */ 
    {
         value  = 1;
    }
    {
        /* Tested function call */
        int _return  = power(_base, _exp);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(1, ( _return ));
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( value ));
    }
}
/* CPPTEST_TEST_CASE_END test_power_2 */

/* CPPTEST_TEST_CASE_BEGIN test_power_3 */
/* CPPTEST_TEST_CASE_CONTEXT int power(int, int) */
void TestSuite_testedFunctions_c_9bf41ea9_test_power_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (base) */ 
    int _base  = 1;
    /* Initializing argument 2 (exp) */ 
    int _exp  = cpptestLimitsGetMinInt();
    /* Initializing global variable value */ 
    {
         value  = 4999;
    }
    {
        /* Tested function call */
        int _return  = power(_base, _exp);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(1, ( _return ));
        CPPTEST_ASSERT_INTEGER_EQUAL(1, ( value ));
    }
}
/* CPPTEST_TEST_CASE_END test_power_3 */

/* CPPTEST_TEST_CASE_BEGIN test_processValue_1 */
/* CPPTEST_TEST_CASE_CONTEXT int processValue(int, int) */
void TestSuite_testedFunctions_c_9bf41ea9_test_processValue_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (p1) */ 
    int _p1  = 100;
    /* Initializing argument 2 (p2) */ 
    int _p2  = 100;
    /* Initializing global variable globalState */ 
    {
         globalState  = 100;
    }
    {
        /* Tested function call */
        int _return  = processValue(_p1, _p2);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(300, ( _return ));
        CPPTEST_ASSERT_INTEGER_EQUAL(100, ( globalState ));
    }
}
/* CPPTEST_TEST_CASE_END test_processValue_1 */

/* CPPTEST_TEST_CASE_BEGIN test_processValue_2 */
/* CPPTEST_TEST_CASE_CONTEXT int processValue(int, int) */
void TestSuite_testedFunctions_c_9bf41ea9_test_processValue_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (p1) */ 
    int _p1  = 0;
    /* Initializing argument 2 (p2) */ 
    int _p2  = 100;
    /* Initializing global variable globalState */ 
    {
         globalState  = 100;
    }
    {
        /* Tested function call */
        int _return  = processValue(_p1, _p2);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(100, ( _return ));
        CPPTEST_ASSERT_INTEGER_EQUAL(100, ( globalState ));
    }
}
/* CPPTEST_TEST_CASE_END test_processValue_2 */

/* CPPTEST_TEST_CASE_BEGIN test_processValue_3 */
/* CPPTEST_TEST_CASE_CONTEXT int processValue(int, int) */
void TestSuite_testedFunctions_c_9bf41ea9_test_processValue_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (p1) */ 
    int _p1  = 100;
    /* Initializing argument 2 (p2) */ 
    int _p2  = 100;
    /* Initializing global variable globalState */ 
    {
         globalState  = cpptestLimitsGetMinInt();
    }
    {
        /* Tested function call */
        int _return  = processValue(_p1, _p2);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(300, ( _return ));
        CPPTEST_ASSERT_INTEGER_EQUAL(-2147483648, ( globalState ));
    }
}
/* CPPTEST_TEST_CASE_END test_processValue_3 */

/* CPPTEST_TEST_CASE_BEGIN test_updateStruct_1 */
/* CPPTEST_TEST_CASE_CONTEXT void updateStruct(uint16_t, struct allSensorState *) */
void TestSuite_testedFunctions_c_9bf41ea9_test_updateStruct_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (updateMsgType) */ 
    uint16_t _updateMsgType  = 1;
    /* Initializing argument 2 (as) */ 
    struct allSensorState * _as  = 0 ;
    {
        /* Tested function call */
        updateStruct(_updateMsgType, _as);
        /* Post-condition check */
        CPPTEST_ASSERT_EQUAL(NULL, ( _as ));
    }
}
/* CPPTEST_TEST_CASE_END test_updateStruct_1 */

/* CPPTEST_TEST_CASE_BEGIN test_updateStruct_2 */
/* CPPTEST_TEST_CASE_CONTEXT void updateStruct(uint16_t, struct allSensorState *) */
void TestSuite_testedFunctions_c_9bf41ea9_test_updateStruct_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (updateMsgType) */ 
    uint16_t _updateMsgType  = 0;
    /* Initializing argument 2 (as) */ 
    struct allSensorState * _as  = 0 ;
    {
        /* Tested function call */
        updateStruct(_updateMsgType, _as);
        /* Post-condition check */
        CPPTEST_ASSERT_EQUAL(NULL, ( _as ));
    }
}
/* CPPTEST_TEST_CASE_END test_updateStruct_2 */

/* CPPTEST_TEST_CASE_BEGIN test_updateStruct_3 */
/* CPPTEST_TEST_CASE_CONTEXT void updateStruct(uint16_t, struct allSensorState *) */
void TestSuite_testedFunctions_c_9bf41ea9_test_updateStruct_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (updateMsgType) */ 
    uint16_t _updateMsgType  = 1;
    /* Initializing argument 2 (as) */ 
    struct allSensorState _as_0 ;
    struct allSensorState * _as  = & _as_0;
    {
        /* Tested function call */
        updateStruct(_updateMsgType, _as);
        /* Post-condition check */
        CPPTEST_ASSERT(0 != ( _as ));
    }
}
/* CPPTEST_TEST_CASE_END test_updateStruct_3 */
