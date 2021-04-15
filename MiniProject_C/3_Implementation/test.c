#include"unity\unity.h"
#include"inc\time.h"
//#include "unity.h"
/**
 * @brief test file
 * @ 
 * 
 */
#define Project_name "Time schedulers"
void setUp()
{
}
void tearDown()
{
}
void shortestfirstjob();
void roundrobin();
void  firstcomefirstout();
void multilevel();
int main()
{
    int a;
    printf("Shortestjob first   - press 1\n");
    printf("round robin         - press 2\n");
    printf("firstcomnefirstout   -press 3\n");
    printf("multilevel queue     - press4\n");
    scanf("%d",&a);
     
    switch (a){
      case 1:
      shortestfirstjob( );
      break;
      case 2:
       roundrobin(); 
       break;
       case 3:
       firstcomefirstout();
       break;
       case 4:
       multilevel();
       break;
       

    }

     
   
    
     
}