#include "unity.h"
#include "time.h"

/* Modify these two lines according to the project */
#define PROJECT_NAME "College Management System"

/* Prototypes for all the test functions */
void test_firstcomefirstout( );
void test_roundrobin(void);
void test_multilevel(void);
void test_shortestfirstjob(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_firstcomefirstout);
  RUN_TEST(test_roundrobin);
  RUN_TEST(test_multilevel);
  RUN_TEST(test_shortestfirstjob);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
 void test_firstcomefirstout( ) 
 {
  TEST_ASSERT_EQUAL(50, firstcomefirstout(3,50,50,10));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(15000, gratuity_calculation(30000,5,5,1));
}

void test_shortestfirstjob(void) {
 // TEST_ASSERT_EQUAL(121306, fixed_deposit(100000,3,6.65));
 // TEST_ASSERT_EQUAL(0, fixed_deposit(0,3,6.65));
  //TEST_ASSERT_EQUAL(2593743, fixed_deposit(1000000,10,10));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(100, fixed_deposit(100000,3,6.65));
}

void test_roundrobin(void) {
  //TEST_ASSERT_EQUAL(0, roi(100000,5,10));
  
  /* Dummy fail*/
 // TEST_ASSERT_EQUAL(10, roi(100000,5,10));
}

void test_multilevel(void) {
  //TEST_ASSERT_EQUAL(0, emi(100000,5,10));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1, emi(100000,5,10));
}