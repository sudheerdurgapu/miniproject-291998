#include"time.h"
#include<stdio.h>
void  shortestfirstjob()
{
     int bt[20],at[20],n,temp[20],time_quantum;
      int i, smallest, count = 0, time, limit;
      double wait_time = 0, turnaround_time = 0, end;
      float average_waiting_time, average_turnaround_time;
      printf("\nEnter the Total Number of Processes:\t");
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
      bt[9] = 9999;  
      for(time = 0; count != n; time++)
      {
            smallest = 9;
            for(i = 0; i < n; i++)
            {
                  if(at[i] <= time && bt[i] < bt[smallest] && bt[i] > 0)
                  {
                        smallest = i;
                  }
            }
            bt[smallest]--;
            if(bt[smallest] == 0)
            {
                  count++;
                  end = time + 1;
                  wait_time = wait_time + end - at[smallest] - temp[smallest];
                  turnaround_time = turnaround_time + end - at[smallest];
            }
      }
      average_waiting_time = wait_time / limit; 
      average_turnaround_time = turnaround_time / limit;
      printf("\n\nAverage Waiting Time:\t%lf\n", average_waiting_time);
      printf("Average Turnaround Time:\t%lf\n", average_turnaround_time);
}

   
