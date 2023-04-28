#include "testedFunctions.h"
#include "externalFunctions.h"

uint32_t saveReg1, saveReg2, saveReg3;
static uint32_t static_int_variable;
const uint32_t R1 = 11;
const uint32_t R2 = 22;
const uint32_t R3 = 44;

static const int VERY_LOW = 1;
static const int LOW = 2;
static const int MEDIUM = 3;
static const int HIGH = 4;
static const int VERY_HIGH = 5;

int globalState = 0;
static int value = 0;

static int multipleCalls(Info* pResult);
static void infiniteLoop(int c);
extern int computeWeight(int p1);

/**
 * Simple addition
 */
uint32_t add(uint32_t a, uint32_t b)
{
	return a + b;
}

/************************
 * Conditional addition
 * R1 = 11, R2 = 22
 ************************/
uint32_t conditional_add(uint32_t a, uint32_t b, uint32_t condition)
{
	uint32_t ret = 0;

	if((condition < R2) && (condition >= R1))
	{
		ret = add(a,b);
	}

	static_int_variable = ret;
	return ret;
}


/*********************
 *
 * use data source
 *
 *********************/
static int power(int base, int exp)
{
    value = base;
    int power_value = -1;
    int i = 1;
    while (i<exp && i>0)
    {
    	i++;
        value = value * base;
    }

    if (value <= 10)
    {
		power_value = VERY_LOW;
    }
     if (value > 10 && value <= 100)
    {
		power_value = LOW;
    }
    else if (value > 100 && value <= 5000)
    {
		power_value = MEDIUM;
    }
    else if (value > 5000 && value <= 50000)
    {
		power_value = HIGH;
    }
    else if (value > 50000)
    {
		power_value = VERY_HIGH;
    }
    else
    {

    }
  return power_value;
}


/*********************
 *
 * update struct values.
 *
 *********************/

void log_error() {}

static void updateStruct(uint16_t updateMsgType, struct allSensorState *as) {

	if (updateMsgType < 100u) {
		switch (updateMsgType) {
		case 0:
			as->on = 0;
			as->status = 1;
			break;
		case 1:
			as->on = 1;
			as->status = 1;
			break;
		default:
			as->on = 0;
			as->status = 0xBADF00D;
			break;
		}
	} else {
		// error here
		log_error();
	}
}

/************************
 *
 * call to a blocking function.
 *
 ************************/
uint32_t callToNoReturn(uint32_t a, uint32_t b, uint32_t condition)
{
	uint32_t ret = 0;

	if(condition > 1)
	{

		infiniteLoop(a);
		ret = add(a,b);
	}
	return ret;
}

/****************************************
 *
 * Modify input, call a function, check return
 * Stubbed function is internal to compilation unit
 *
 ***************************************/
static uint32_t modifyStructValuesConditionalReturn(Info* pResult) {
	uint32_t ret = 0;
	//modifying input
	if (0 == multipleCalls(pResult)) {
		pResult->radioID = 7;
		pResult->status = 3;
		ret = 1;
	} else {
		pResult->radioID = 8;
		pResult->status = 21;
		ret = 2;
	}
	return ret;
}


/****************************************
 *
 * Return the value depending on the sequence of the call
 *
 ***************************************/
int processValue(int p1, int p2)
{
	int weight = 0;
	if (p1 > 0) {
		weight = 100;
	} else if (computeWeight(p1) > 0)
	{
		weight = computeWeight(globalState);
	}
	return p1 + p2 + weight;
}


/*******************************************
 *
 * Modify input params
 * Modify return value to exit busy wait
 *
 * Stubbed function is an external function.
 *
 ********************************************/
static void modifyStructValuesBusyWait(struct sharedMsg *sMsg,
		struct allSensorState *as) {
	uint32_t rc = 0;
	sMsg->msg = "Bad Morning\n";
	sMsg->size = strlen(sMsg->msg);
	if (1 == as->on) {
		do {
			rc = sharedQueuePend(sMsg, 1);
		} while (rc == 0);
	}
}


int computeWeight(int val)
{
	return 0;
}

/************************************************
 *
 * Multiple calls to the same function
 * Verify logic for every call.
 * Control the return parameter based on the callNo variable in the stub
 *
 ************************************************/
static int multipleCalls(Info* pResult) {
	int rc = 0;

	rc = GetRegSingle(R1, &saveReg1);

	if (rc) {
		goto exit;
	}

	rc = GetRegSingle(R2, &saveReg2);

	if (rc) {
		goto exit;
	}

	rc = GetRegSingle(R3, &saveReg3);

	if (rc) {
		goto exit;
	}

	exit: return rc;
}

/***********************************
 * Infinite loop
 **********************************/
static void infiniteLoop(int c) {
	c++;
	while (1) {
		c++;
	}
	c--;
}


int pseudo_main()
{
  int a = 1;
  int b = 2;
  int condition = 12;
  
  conditional_add(a, b, condition);  
  
  processValue(a, b);
    
  return 0;
}




void task_1() {}

int task_2(void) { return 1; }

void task_3(int i) {
    // do something based on i
}

void doStuff(void) {
    int data;
    task_1();
    data = task_2();
    if (data > 0) {
        task_3(data);
    }
}



int op_add(int i, int j)
{
	return i + j;
}
int op_sub(int i, int j)
{
	return i - j;
}
int op_mul(int i, int j)
{
	return i * j;
}
typedef int (*MathOpInt_t)(int, int);

#define ADD  1
#define SUB  2
#define MUL  3

MathOpInt_t getMathOp(const int op)
{
	MathOpInt_t ret = NULL;
	switch (op) {
	case ADD:
		ret = & op_add;
		break;
	case SUB:
		ret = & op_sub;
		break;
	case MUL:
		ret = & op_mul;
		break;
	default:
		log_error();
		break;
	}
	return ret;
}

int doMathOp(MathOpInt_t op, int i, int j)
{
	int ret = 0;
	if (op != NULL) {
		ret = (*op)(i, j);
	}
	return ret;
}

