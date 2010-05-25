/*****************************************************************************/
/*          Wind River Workbench Unit Tester  - Test Script                  */
/*****************************************************************************/
/*
 *    Filename: test_CMutexSemaphore.cpp
 *    Author: ekeller
 *    Generated on: 11.04.2007 12:17:38
 *    Generated from: CMutexSemaphore.cpp
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#include <unittester.h>  /* Wind River Workbench Unit Tester directives */
#include <vxWorks.h>
#include <stdio.h>
#include <tasklib.h>
#include <sysLib.h>

// checking inline
#include "CMutexSemaphore.h"
/* pragma unittester testscript start */


/* Include files from software under test */


/* Global Functions */
/* None */

/* Global Data */
/* None */

/*****************************************************************************/
/* Test class declaration                                                    */
/*****************************************************************************/
class TEST_CLASS(CMutexSemaphore)
{
public:
	void run_tests();
	void test_CMutexSemaphore_createMutex();
	void test_CMutexSemaphore_createMutex2();
	void test_CMutexSemaphore_createBinary();
	void test_CMutexSemaphore_createBinary2();
	void test_CMutexSemaphore_destructor();
	void test_CMutexSemaphore_constructor();
	void test_CMutexSemaphore_destructor2();
	void test_CMutexSemaphore_create();
	void test_CMutexSemaphore_init();
	void test_CMutexSemaphore_close();
	void test_CMutexSemaphore_create2();
	void test_CMutexSemaphore_close2();
	void test_Mutex_Lock();
	void test_Mutex_Lock2();
	void CMutexSemaphoreCreateFailure();
	void task_test();
    void semTakeFailure();
    void semGiveFailure();

};

/*****************************************************************************/
/* Coverage Analysis                                                         */
/*****************************************************************************/
/* Rule Set: 100% Entry Point + Statement + Call Coverage */
void rule_set(char* cppca_sut,
			  char* cppca_context)
{

	ANALYSIS_CHECK("100% Entry Point Coverage",
				   cppca_entrypoint_cov,
				   100.0);

	ANALYSIS_CHECK("100% Statement Coverage",
				   cppca_statement_cov,
				   100.0);

	ANALYSIS_CHECK("100% Call Return Coverage",
				   cppca_callreturn_cov,
				   100.0);

	REPORT_COVERAGE(cppca_entrypoint_cov|
					cppca_statement_cov|
					cppca_callreturn_cov,
					cppca_sut,
					cppca_all_details|cppca_include_catch,
					cppca_context);
}



/*****************************************************************************/
/* Program Entry Point                                                       */
/*****************************************************************************/
int main()
{
	OPEN_LOG("test_CMutexSemaphore.ctr", false);
	SET_LOG_LEVEL(cppth_ll_normal);
	START_SCRIPT("CMutexSemaphore", true);

	TEST_CLASS(CMutexSemaphore) test_object;
	test_object.run_tests();

	return !END_SCRIPT(true);
}

/*****************************************************************************/
/* Test Control                                                              */
/*****************************************************************************/
/* run_tests() contains calls to the individual test cases, you can turn test*/
/* cases off by adding comments*/
void TEST_CLASS(CMutexSemaphore)::run_tests()
{
	test_CMutexSemaphore_createMutex();
	test_CMutexSemaphore_createMutex2();
	test_CMutexSemaphore_createBinary();
	test_CMutexSemaphore_destructor();
	test_CMutexSemaphore_destructor2();
	test_CMutexSemaphore_constructor();
	test_CMutexSemaphore_create();
	test_CMutexSemaphore_create2();
	test_CMutexSemaphore_init();
	test_CMutexSemaphore_close();
	test_CMutexSemaphore_createBinary2();
	test_CMutexSemaphore_close2();
	test_Mutex_Lock();
	test_Mutex_Lock2();
	CMutexSemaphoreCreateFailure();
	//task_test();
    semTakeFailure();
    semGiveFailure();

	rule_set("*", "*");
	EXPORT_COVERAGE("test_CMutexSemaphore.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/
void TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_createMutex()
{
	START_TEST("test_CMutexSemaphore_createMutex",
		"create a mutex with a valid name");

	/* Expected Call Sequence  */
	EXPECTED_CALLS("semOpen#default");
	START_EXCEPTION
	/* Test case data declarations */
	CMutexSemaphore* testObj = new CMutexSemaphore();
	enum TErrorStatus returnValue;
	enum TErrorStatus expected_returnValue = statusOK;
	RhpString aName = "TestMutex";
	RhpString expected_aName = aName;

	/* Call SUT */
	returnValue = testObj->createMutex(aName);

	/* Test case checks */
	CHECK(returnValue, expected_returnValue);
	//CHECK(aName, expected_aName);
	CHECK(aName, testObj->mName);
	NO_EXCEPTIONS END_EXCEPTION END_CALLS();
	END_TEST();
}

void TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_createMutex2()
{
	START_TEST("test_CMutexSemaphore_createMutex2",
		"create a mutex with a 'null' name");

	/* Expected Call Sequence  */
	//EXPECTED_CALLS("");
	EXPECTED_CALLS("semOpen#default");
	START_EXCEPTION
	/* Test case data declarations */
	CMutexSemaphore* testObj = new CMutexSemaphore();
	enum TErrorStatus returnValue;
	enum TErrorStatus expected_returnValue = statusError;
	RhpString aName = "";
	RhpString expected_aName = aName;

	/* Call SUT */
	returnValue = testObj->createMutex(aName);

	/* Test case checks */
	CHECK(returnValue, expected_returnValue);
	CHECK(aName, testObj->mName);
	NO_EXCEPTIONS END_EXCEPTION END_CALLS();
	END_TEST();
}


void TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_createBinary()
{
	START_TEST("test_CMutexSemaphore_createBinary",
		"create a binary semaphore with a valid name");

	/* Expected Call Sequence  */
	EXPECTED_CALLS("semOpen#default");
	START_EXCEPTION
	/* Test case data declarations */
	CMutexSemaphore* testObj = new CMutexSemaphore();
	enum TErrorStatus returnValue;
	enum TErrorStatus expected_returnValue = statusOK;
	RhpString aName = "TestBinary";
	RhpString expected_aName = aName;

	/* Call SUT */
	returnValue = testObj->createBinary(aName);

	/* Test case checks */
	CHECK(returnValue, expected_returnValue);
	CHECK(aName, testObj->mName);
	NO_EXCEPTIONS END_EXCEPTION END_CALLS();
	END_TEST();
}

void TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_createBinary2()
{
	START_TEST("TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_createBinary2",
			   "create a binary semaphore with a invalide 'null' name");

	/* Expected Call Sequence  */
	EXPECTED_CALLS("semOpen#default");
	START_EXCEPTION
	/* Test case data declarations */
	CMutexSemaphore* testObj = new CMutexSemaphore();
	enum TErrorStatus returnValue;
	enum TErrorStatus expected_returnValue = statusError;
	RhpString aName = "";
	RhpString expected_aName = aName;

	/* Call SUT */
	returnValue = testObj->createBinary(aName);

	/* Test case checks */
	CHECK(returnValue, expected_returnValue);
	CHECK(aName, testObj->mName);
	NO_EXCEPTIONS END_EXCEPTION END_CALLS();
	END_TEST();
}

void TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_destructor()
{
	START_TEST("test_CMutexSemaphore_destructor",
		"a valid destructor test without any created semaphore");

	/* Expected Call Sequence  */
	//EXPECTED_CALLS("close()");
	EXPECTED_CALLS("");
	START_EXCEPTION
	/* Test case data declarations */
	CMutexSemaphore* testObj = new CMutexSemaphore();

	/* Call SUT */
	/* Call delete to exercise destructor */
	delete testObj;

	/* Test case checks */
	NO_EXCEPTIONS END_EXCEPTION 
	END_CALLS();
	END_TEST();
}

void TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_destructor2()
{
	START_TEST("test_CMutexSemaphore_destructor",
		"a valid destructor test, with an existing MID, a semaphore was created");

	/* Expected Call Sequence  */
	//EXPECTED_CALLS("close()");
	EXPECTED_CALLS("semOpen#default;semClose#default");
	START_EXCEPTION
	/* Test case data declarations */
	CMutexSemaphore* testObj = new CMutexSemaphore();
	testObj->create("aName", true);
	/* Call SUT */
	/* Call delete to exercise destructor */
	delete testObj;

	/* Test case checks */
	NO_EXCEPTIONS END_EXCEPTION 
	END_CALLS();
	END_TEST();
}

void TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_constructor()
{
	START_TEST("test_CMutexSemaphore_constructor",
		"Test a valid constructor");

	/* Expected Call Sequence  */
	EXPECTED_CALLS("");
	START_EXCEPTION
	/* Test case data declarations */
	CMutexSemaphore* returnValue;
	CMutexSemaphore* expected_returnValue = new CMutexSemaphore();

	/* Call SUT */
	returnValue = new CMutexSemaphore();

//	std::cout << "mid: " << returnValue->mID << std::endl;
	CHECK(returnValue->mName, expected_returnValue->mName);
	CHECK(returnValue->mID == expected_returnValue->mID, 1);
	

	/* Test case checks */
	NO_EXCEPTIONS END_EXCEPTION END_CALLS();
	END_TEST();
}
void TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_create()
{
	START_TEST("test_CMutexSemaphore_create",
		"create valid binary semaphore");

	/* Expected Call Sequence  */
	EXPECTED_CALLS("semOpen#default");
	START_EXCEPTION
	/* Test case data declarations */
	CMutexSemaphore* testObj = new CMutexSemaphore();
	enum TErrorStatus returnValue;
	enum TErrorStatus expected_returnValue = statusOK;
	RhpString aName = "createBin";
	RhpString expected_aName = aName;
	RhpBoolean aLockedAfterCreation = true; // binary

	/* Call SUT */
	returnValue = testObj->create(aName, aLockedAfterCreation);

	/* Test case check */
	CHECK(returnValue, expected_returnValue); // check return status
	std::cout << "semName: " << testObj->mName << std::endl;
	
	// check the validity of the semaphore with semInfoGet() function
	SEM_INFO * pInfo = new SEM_INFO; // store the info here
	semInfoGet(testObj->mID, pInfo);
	// check if the type is binary as expected
	CHECK(pInfo->semType, SEM_TYPE_BINARY);
	
	CHECK(aName, expected_aName);
	
	NO_EXCEPTIONS END_EXCEPTION END_CALLS();
	END_TEST();
}

void TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_create2()
{
	START_TEST("test_CMutexSemaphore_create",
			"create valid Mutex semaphore");

		/* Expected Call Sequence  */
		EXPECTED_CALLS("semOpen#default");
		START_EXCEPTION
		/* Test case data declarations */
		CMutexSemaphore* testObj = new CMutexSemaphore();
		enum TErrorStatus returnValue;
		enum TErrorStatus expected_returnValue = statusOK;
		RhpString aName = "createMut";
		RhpString expected_aName = aName;
		RhpBoolean aLockedAfterCreation = false; // Mutex

		/* Call SUT */
		returnValue = testObj->create(aName, aLockedAfterCreation);

		/* Test case check */
		CHECK(returnValue, expected_returnValue); // check return status
		std::cout << "semName: " << testObj->mName << std::endl;
	
		// check the validity of the semaphore with semInfoGet() function
		SEM_INFO * pInfo = new SEM_INFO; // store the info here
		semInfoGet(testObj->mID, pInfo);
		// check if the type is binary as expected
		CHECK(pInfo->semType, SEM_TYPE_MUTEX);
	
		CHECK(aName, expected_aName);
	
		NO_EXCEPTIONS END_EXCEPTION END_CALLS();
		END_TEST();
}

void TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_init()
{
	START_TEST("test_CMutexSemaphore_init",
		"test the initialisation");

	/* Expected Call Sequence  */
	EXPECTED_CALLS("");
	START_EXCEPTION
	/* Test case data declarations */
	CMutexSemaphore* testObj = new CMutexSemaphore();
	enum TErrorStatus returnValue;
	enum TErrorStatus expected_returnValue = statusOK;

	/* Call SUT */
	returnValue = testObj->init();

	/* Test case checks */
	CHECK(returnValue, expected_returnValue);
	NO_EXCEPTIONS END_EXCEPTION END_CALLS();
	END_TEST();
}
void TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_close()
{
	START_TEST("test_CMutexSemaphore_close",
		"test already closed semaphore");

	/* Expected Call Sequence  */
	EXPECTED_CALLS("");
	START_EXCEPTION
	/* Test case data declarations */
	CMutexSemaphore* testObj = new CMutexSemaphore();

	/* Call SUT */
	
	CHECK(testObj->mID, NULL); // check if the mID is back to Null
	testObj->close();
	/* Test case checks */
	NO_EXCEPTIONS END_EXCEPTION END_CALLS();
	END_TEST();
}

void TEST_CLASS(CMutexSemaphore)::test_CMutexSemaphore_close2()
{
	START_TEST("test_CMutexSemaphore_close",
		"test a not closed semaphore");

	/* Expected Call Sequence  */
	EXPECTED_CALLS("semOpen#default;semClose#default");
	START_EXCEPTION
	/* Test case data declarations */
	CMutexSemaphore* testObj = new CMutexSemaphore();

	/* Call SUT */
	testObj->create("semToClose", true);
	testObj->close();
	CHECK(testObj->mID, NULL); // check if the mID is back to Null
	/* Test case checks */
	NO_EXCEPTIONS END_EXCEPTION END_CALLS();
	END_TEST();
}



// review this test in a task context
void TEST_CLASS(CMutexSemaphore)::test_Mutex_Lock()
{
	START_TEST("TEST_CLASS(CMutexSemaphore)::test_Mutex_Lock",
			   "test to lock a semaphore");
	std::cout << "-------------------test to lock/unlock a semaphore-------------------" << std::endl;
		/* Expected Call Sequence  */
		//EXPECTED_CALLS("semOpen#default;semTake#default;semGive#default;semClose#default");
		EXPECTED_CALLS("semOpen#default;"
						"semTake#default;"
						"semGive#default;"
						"semClose#default");
		START_EXCEPTION
		/* Call SUT */
		CMutexSemaphore* testObj = new CMutexSemaphore();
		/* Test case checks and data */
		testObj->init();
		testObj->create("LockMutex", false);
		testObj->lock();
		std::cout << "Mutex is locked..." << std::endl;
		testObj->unlock();
		std::cout << "Mutex is unlocked..." << std::endl;	
		testObj->close();
		NO_EXCEPTIONS
		END_EXCEPTION
		END_CALLS();
	END_TEST();
}

// another global...
CMutexSemaphore* 	test_mutex = new CMutexSemaphore();
bool forever = true;

void task_mutex()
{
//	EXPECTED_CALLS("{semTake#default}");
	std::cout << "task_mutex: is locking..." << std::endl;
	while (forever)
	{
		if (forever && test_mutex != 0)
			test_mutex->lock();
		taskDelay(2);
	}
	std::cout << "leaving task" << std::endl;

}


//TODO faire un test qui compte le nombre de task qui attendent
void TEST_CLASS(CMutexSemaphore)::test_Mutex_Lock2()
{
	SEM_INFO pInfo; // store the semaphore infos
	STATUS ret = 88;
	int numtask = -1;
	int expected_blocked_task = 2;
	int idt1 = 0;
	int idt2 = 0;
	
	
	START_TEST("TEST_CLASS(CMutexSemaphore)::test_Mutex_Lock2",
			   "test to lock a semaphore counting the blocked tasks");
	std::cout << "-------------------test to lock/unlock a semaphore, counting the blocked task-------------------" << std::endl;
		/* Expected Call Sequence  */
		EXPECTED_CALLS("semOpen#default;{semTake#default};{semGive#default};semClose#default");			
		START_EXCEPTION
		/* Call SUT */
		/* Test case checks and data */
		test_mutex->init();
		test_mutex->create("BlockedMutex", false);
		test_mutex->lock();
		std::cout << "Mutex is locked..." << std::endl;
		
		//	spawn 2 tasks which are locking the semaphore
		idt1 = taskSpawn ("task_mutex1", 255, 0, 5000, (FUNCPTR)task_mutex,0,0,0,0,0,0,0,0,0,0);
		idt2 = taskSpawn ("task_mutex2", 255, 0, 5000, (FUNCPTR)task_mutex,0,0,0,0,0,0,0,0,0,0);
		taskDelay(sysClkRateGet() * 5);
		ret = semInfoGet(test_mutex->mID, &pInfo);
		std::cout << "Status semInfoGet: " << ret << std::endl;
		if (0 == &pInfo)
			std::cout << "pInfo is Null" << std::endl;
		
		// Stoping the tasks
		forever = false;
		taskDelay(sysClkRateGet() * 5);
		taskDelete(idt1);
		taskDelete(idt2);
		test_mutex->close();
		
		// get the numTasks info from structure
		numtask = pInfo.numTasks;
		std::cout << "Mutex nbr tryed lock: " << numtask << std::endl;
		
		// Dtor call
		delete test_mutex;
		test_mutex = 0;
		CHECK(numtask, expected_blocked_task);
		
		NO_EXCEPTIONS
		END_EXCEPTION
		END_CALLS();
	END_TEST();
}

void TEST_CLASS(CMutexSemaphore)::CMutexSemaphoreCreateFailure()
{
	START_TEST("TEST_CLASS(CMutexSemaphore)::cMutexSemaphoreCreateFailure",
			   "test creating semaphore with identical names and diferent type");
	std::cout << "-------------------test creating semaphore with identical names and diferent type-------------------" << std::endl;
		/* Expected Call Sequence  */
		EXPECTED_CALLS("2*semOpen#default;semClose#default");
		START_EXCEPTION
		/* Call SUT */
		CMutexSemaphore* testObj = new CMutexSemaphore();
		
		/* Test case checks and data */
		testObj->init();
		testObj->create("twins", false); // mutex
		testObj->create("twins", true); // binary
		SEM_INFO * pInfo = new SEM_INFO; // store the info here
		semInfoGet(testObj->mID, pInfo);
		// check if the type is binary as expected
		CHECK(pInfo->semType, SEM_TYPE_BINARY);
		testObj->close();
		NO_EXCEPTIONS
		END_EXCEPTION
		END_CALLS();
	END_TEST();
}

void TEST_CLASS(CMutexSemaphore)::semTakeFailure()
{
    START_TEST("TEST_CLASS(CMutexSemaphore)::semTakeFailure",
               "test semTake failure");
	std::cout << "-------------------test semTake failure-------------------" << std::endl;
        /* Expected Call Sequence  */
       // EXPECTED_CALLS("semOpen#default;semTake#failure;semClose#default");
	EXPECTED_CALLS("semOpen#default;semTake#failure;semClose#default");
        START_EXCEPTION
        /* Call SUT */
		CMutexSemaphore* testObj = new CMutexSemaphore();
		testObj->init();
		testObj->create("interTask", false);
        /* Test case checks and data */
		
		std::cout << "simulation of semlock failure" << std::endl;
		testObj->lock();
		testObj->close();
		std::cout << "simulation of semlock failure Done" << std::endl;	
        NO_EXCEPTIONS
        END_EXCEPTION
        END_CALLS();
    END_TEST();
}
void TEST_CLASS(CMutexSemaphore)::semGiveFailure()
{
    START_TEST("TEST_CLASS(CMutexSemaphore)::semGiveFailure",
               "test semGive failure");
	std::cout << "-------------------test semGive failure-------------------" << std::endl;
	/* Expected Call Sequence  */
	// EXPECTED_CALLS("semOpen#default;semTake#failure;semClose#default");
 EXPECTED_CALLS("semOpen#default;semTake#default;semGive#failure;semClose#default");
	 START_EXCEPTION
	 /* Call SUT */
	 CMutexSemaphore* testObj = new CMutexSemaphore();
	 testObj->init();
	 testObj->create("interTask", false);
	 /* Test case checks and data */

	 testObj->lock();		
	 std::cout << "simulation of semunlock failure" << std::endl;
	 testObj->unlock();
	 testObj->close();
	 std::cout << "simulation of semunlock failure Done" << std::endl;	
	 NO_EXCEPTIONS
	 END_EXCEPTION
	 END_CALLS();
 END_TEST();
}

/**
 * the following variables are used for the test_task
 * this test Spawn 2 tasks that simulatineously write into an int buffer
 * testing odd and even values.
 */
# define TAB_SIZE 20
# define SUCCESS 1
# define FAILLED 0

	CMutexSemaphore* 	mutex = new CMutexSemaphore();
	int					sharedInt[TAB_SIZE]; // = (int*) malloc(20 * sizeof(int));
	int 				i = 0;
	//int					before[2]={FAILLED,FAILLED};
	//int					during[2]={FAILLED,FAILLED};
	//int					after[2]={FAILLED,FAILLED};
		
void task1()
{
	//EXPECTED_CALLS("{semTake()#default}&&{semGive()#default}");
	//EXPECTED_CALLS("{semTake}&&{semGive}");
	int j = 0;
	
	//std::cout << "task1: avant while " << std::endl;
	while (j < TAB_SIZE)
	{
		//std::cout << "task1: dans le while " << std::endl;
	//	before[0] = SUCCESS;
		mutex->lock();
		//std::cout << "task1: apres le mutex lock " << std::endl;
		j = i;
		if ((j % 2) == 0) // even
		{
			std::cout << "task 1 is writing " << i + 1 << std::endl;
			sharedInt[j] = j + 1;
			j++;
		}	
	//	during[0] = SUCCESS;
		//j++;
		i = j;
		//std::cout << "task1: avant le mutex unlock " << std::endl;
		mutex->unlock();
		//std::cout << "task1: apres le mutex unlock " << std::endl;
		//after[0] = SUCCESS;
		taskDelay(1);
		std::cout << "in task 1" << std::endl;
	}
	//END_CALLS();
}
void task2()
{
	//EXPECTED_CALLS("{semTake()#default}&&{semGive()#default}");
	//EXPECTED_CALLS("{semTake}&&{semGive}");
	int j = 0;
	//std::cout << "task2: avant while " << std::endl;
	while (j < TAB_SIZE)
	{
		//std::cout << "task2: dans le while " << std::endl;
//		before[0] = SUCCESS;
		mutex->lock();
		//std::cout << "task2: apres le mutex lock " << std::endl;
		j = i;
		if ((j % 2) != 0) // even
			{
				std::cout << "task 2 is writing " << i + 2 << std::endl;
				sharedInt[j] = j + 2;
				j++;
			}
//		during[0] = SUCCESS;
		i = j;
		//std::cout << "task2: avant le mutex unlock " << std::endl;
		mutex->unlock();
		//std::cout << "task2: apres le mutex unlock " << std::endl;
//		after[0] = SUCCESS;
		taskDelay(1);
		std::cout << "in task 2" << std::endl;
	}
	//END_CALLS();
}

void TEST_CLASS(CMutexSemaphore)::task_test()
{
	START_TEST("TEST_CLASS(CMutexSemaphore)::task_test",
			   "test the CMutexSemaphore class in context with threads");

	bool mod2 = true;

		/* Expected Call Sequence  */
		std::cout << "-------------------test the CMutexSemaphore with threads-------------------" << std::endl;
		//EXPECTED_CALLS("semOpen()#default; {semTake();semGive()}; semClose()#default");
		//EXPECTED_CALLS("semOpen()#default;semClose()#default");
		EXPECTED_CALLS(	"semOpen#default"
						"{semTake#default}"
						"{semGive#default}"
						"semClose#default");
		START_EXCEPTION
		/* Call SUT */	
		
		/* Test case checks and data */
		mutex->create("interTask", false);	 // create an intertask mutex -> semOpen()
		int idt1 = taskSpawn ("task1", 255, 0, 5000, (FUNCPTR)task1, 0,0,0,0,0,0,0,0,0,0);
		int idt2 = taskSpawn ("task2", 255, 0, 5000, (FUNCPTR)task2, 0,0,0,0,0,0,0,0,0,0);
		
		std::cout << "id task1: " << idt1 << " id task2: " << idt2 << std::endl;
		
		taskDelay(500);
		
		std::cout << "Delay of 500 done...\n";
		
		// checking if the 2 task are still alive
		CHECK(taskIdVerify(idt1), ERROR);
		CHECK(taskIdVerify(idt2), ERROR);
		
		if (OK == taskIdVerify(idt1))
		{
			std::cout << "task1 still exists: killing" << std::endl;
			taskDelete(idt1);
		}
		if (OK == taskIdVerify(idt2))
		{
			std::cout << "task2 still exists: killing" << std::endl;
			taskDelete(idt2);
		}
		
		
		// check the order:
//		CHECK(before[0], SUCCESS);
//		CHECK(during[0], SUCCESS);	
//		CHECK(after[0], SUCCESS);
//		CHECK(before[1], SUCCESS);
//		CHECK(during[1], SUCCESS);	
//		CHECK(after[1], SUCCESS);
		
		
		for (int i = 0; i < TAB_SIZE; i++)
		{
			if ((sharedInt[i] % 2) == 0)
				mod2 = false;
			std::cout << " " << sharedInt[i];
		}
		std::cout << std::endl;
		CHECK(mod2, true); // check if all the number in the sharedInt are odd
		
		mutex->close(); // semClose()
		
		NO_EXCEPTIONS
		END_EXCEPTION
		END_CALLS();
	END_TEST();
}

/*****************************************************************************/
/* Stubs and Wrappers                                                        */
/*****************************************************************************/

/* pragma unittester ignore on */

/* BEFORE wrapper for semClose*/
extern "C" bool BEFORE_semClose(SEM_ID &semId)
{
	int returnValue = 1; // Return 0 to call the REPLACE wrapper
	REGISTER_CALL("semClose");

	IF_INSTANCE("default")
	{
		std::cout << "semclose default" << std::endl;
		//CHECK(semId, );
		returnValue = 1;
	}
	IF_INSTANCE("failure")
	{
		returnValue = 0;
	}
	return returnValue;
}

/* AFTER wrapper for semClose*/
extern "C" STATUS AFTER_semClose(STATUS cppsm_return_value, SEM_ID const &semId)
{
	IF_INSTANCE("default")
	{
		//CHECK(cppsm_return_value, 0);
		//CHECK(semId, );
	}
	return cppsm_return_value;
}

/* REPLACE wrapper for semClose*/
extern "C" STATUS REPLACE_semClose(SEM_ID const &semId)
{
	STATUS returnValue;
	IF_INSTANCE("default")
	{
		//CHECK(semId, );
	}
	IF_INSTANCE("failure")
	{
		std::cout << "semclose failure" << std::endl;
	}
	return returnValue;
}

/* pragma unittester ignore off */


/* pragma unittester ignore on */

/* BEFORE wrapper for semOpen*/
extern "C" bool BEFORE_semOpen(const char *&name, SEM_TYPE &type, int &initState,
	int &options, int &mode, void *&context)
{
	int returnValue = 1; // Return 0 to call the REPLACE wrapper
	REGISTER_CALL("semOpen");

	IF_INSTANCE("default")
	{
		//CHECK(name, 0);
		//CHECK(type, );
		//CHECK(initState, 0);
		//CHECK(options, 0);
		//CHECK(mode, 0);
		//CHECK(context, );
	}
	IF_INSTANCE("failure")
	{
		returnValue = 0;
	}

	return returnValue;
}

/* AFTER wrapper for semOpen*/
extern "C" SEM_ID AFTER_semOpen(SEM_ID cppsm_return_value, const char *const &name,
	SEM_TYPE const &type, int const &initState, int const &options, int const &mode,
	void *const &context)
{
	IF_INSTANCE("default")
	{
		//CHECK(cppsm_return_value, );
		//CHECK(name, 0);
		//CHECK(type, );
		//CHECK(initState, 0);
		//CHECK(options, 0);
		//CHECK(mode, 0);
		//CHECK(context, );
	}
	return cppsm_return_value;
}

/* REPLACE wrapper for semOpen*/
extern "C" SEM_ID REPLACE_semOpen(const char *const &name, SEM_TYPE const &type,
	int const &initState, int const &options, int const &mode, void *const &context)
{
	SEM_ID returnValue;
	IF_INSTANCE("default")
	{
		//CHECK(name, 0);
		//CHECK(type, );
		//CHECK(initState, 0);
		//CHECK(options, 0);
		//CHECK(mode, 0);
		//CHECK(context, );
	}
	return returnValue;
}

/* pragma unittester ignore off */

/* BEGINING_WRAPERS comming from test_inlineCMutexSemaphore.cpp */

/* pragma unittester ignore on */

/* BEFORE wrapper for semGive*/
extern "C" bool BEFORE_semGive(SEM_ID &semId){
	int returnValue = 1; // Return 0 to call the REPLACE wrapper
	
	REGISTER_CALL("semGive");

	IF_INSTANCE("default") {
		std::cout << "semGive: before" << std::endl; 
		//CHECK(semId, );
		returnValue = 1;
	}
	IF_INSTANCE("failure")
	{
		returnValue = 0; // call the REPLACE wrapper
	}
	return returnValue;
}

/* AFTER wrapper for semGive*/
extern "C" STATUS AFTER_semGive(STATUS cppsm_return_value,
								SEM_ID const &semId){
	IF_INSTANCE("default") {
		std::cout << "semGive: after" << std::endl; 
		//CHECK(cppsm_return_value, 0);
		//CHECK(semId, );
	}
	return cppsm_return_value;
}

/* REPLACE wrapper for semGive*/
extern "C" STATUS REPLACE_semGive(SEM_ID const &semId){
	STATUS returnValue = OK;
	
	std::cout << "semGive: replace" << std::endl;
	
	IF_INSTANCE("default") {
		std::cout << "replace: default" << std::endl; 
		//CHECK(semId, );
		//semGive(semId);
		returnValue = OK;
	}
	IF_INSTANCE("failure")
	  {
		  std::cout << "lock FAILED..." << std::endl;
		  returnValue = !OK;
	  }
	return returnValue;
}

/* pragma unittester ignore off */

/* pragma unittester ignore on */

/* BEFORE wrapper for semTake*/
extern "C" bool BEFORE_semTake(SEM_ID &semId,
							   int &timeout){
	int returnValue = 1; // Return 0 to call the REPLACE wrapper
	REGISTER_CALL("semTake");

	IF_INSTANCE("default") {
		std::cout << "semTake: before" << std::endl; 
		//CHECK(semId, );
		//CHECK(timeout, 0);
	}
	IF_INSTANCE("failure")
	{
		returnValue = 0; // call the REPLACE wrapper
	}
	return returnValue;
}

/* AFTER wrapper for semTake*/
extern "C" STATUS AFTER_semTake(STATUS cppsm_return_value,
								SEM_ID const &semId,
								int const &timeout){
	IF_INSTANCE("default") {
		std::cout << "semTake: after" << std::endl; 
		//CHECK(cppsm_return_value, 0);
		//CHECK(semId, );
		//CHECK(timeout, 0);
	}
	return cppsm_return_value;
}

/* REPLACE wrapper for semTake*/
extern "C" STATUS REPLACE_semTake(SEM_ID const &semId,
								  int const &timeout){
	STATUS returnValue = OK;
	std::cout << "semTake: replace" << std::endl;
	
	IF_INSTANCE("default") {
		std::cout << "semTake: replace: default" << std::endl; 
		//CHECK(semId, );
		//CHECK(timeout, 0);
		//semTake(semId, timeout);
		returnValue = OK;
	}
	IF_INSTANCE("failure")
	  {
		  std::cout << "lock FAILED..." << std::endl;
		  returnValue = !OK;
	  }
	return returnValue;
}

/* pragma unittester ignore off */

/* END_WRAPERS comming from test_inlineCMutexSemaphore.cpp */

/* pragma unittester testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
