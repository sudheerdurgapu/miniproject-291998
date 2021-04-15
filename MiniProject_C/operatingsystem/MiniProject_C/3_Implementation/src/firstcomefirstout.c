#include"time.h"
#include<stdio.h>

void firstcomefirstout()
{
    int bt[20],n;
   int wt[20],tat[20],avwt=0,avtat=0,i,j;
   printf("print no of the process is ");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",bt[i]);
   }
   wt[0]=0;   

 
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
 
    printf("nProcessttBurst TimetWaiting TimetTurnaround Time");
 
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        printf("nP[%d]tt%dtt%dtt%d",i+1,bt[i],wt[i],tat[i]);
    }
 
    avwt/=i;
    avtat/=i;
    printf("nnAverage Waiting Time:%d",avwt);
    printf("nAverage Turnaround Time:%d",avtat);

}