#include<stdio.h>
#include"time.h"
//#include "unity.h"
void setUp()
{
}
void tearDown()
{
}
void shortestfirstjob();
//int priporityqueue(int p[10],int pp[10],int pt[10],int n);
//int roundrobin(int bt[20],int at[20],int n,int temp[20],int time_quatnum);
void roundrobin();
void  firstcomefirstout();
void multilevel();
int main()
{
    int a;
    int bt[20],at[20],n,temp[20],time_quantum;
    printf("Shortestjob first   - press 1\n");
    printf("round robin         - press 2\n");
    printf("firstcomnefirstout   -press 3\n");
    printf("multilevel queue     - press4\n");
    scanf("%d",&a);
     /*printf("\nEnter the Total Number of Processes:\t");
      scanf("%d", &n); 
      printf("\nEnter Details of %d Processesn", n);
      for(int i = 0; i < n; i++)
      {
            printf("\nEnter Arrival Time:\t");
            scanf("%d", &at[i]);
            printf("Enter Burst Time:\t");
            scanf("%d", &bt[i]); 
            temp[i] = bt[i];
      }
      printf("nEnter Time Quantum:t");
      scanf("%d", &time_quantum);*/
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

     
   
    
      //printf("nProcess IDttBurst Timet Turnaround Timet Waiting Timen");
  
    
    //priporityqueue(p,pp,pt,n);
     
}