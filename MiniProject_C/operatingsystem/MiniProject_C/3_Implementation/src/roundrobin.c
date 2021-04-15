#include"time.h"
#include<stdio.h>
void roundrobin()
{
      int bt[20],at[20],n,temp[20],time_quantum;
       int i, total = 0, x, counter = 0;
       int wait_time = 0, turnaround_time = 0;
      float average_wait_time, average_turnaround_time;
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
      printf("nEnter Time Quantum:t");
      scanf("%d", &time_quantum);
    
      for(total = 0, i = 0; x != 0;)
      {
            if(temp[i] <= time_quantum && temp[i] > 0)
            {
                  total = total + temp[i];
                  temp[i] = 0;
                  counter = 1;
            }
            else if(temp[i] > 0)
            {
                  temp[i] = temp[i] - time_quantum;
                  total = total + time_quantum;
            }
            if(temp[i] == 0 && counter == 1)
            {
                  x--;
                  printf("nttProcess[%d]tt%dtt %dttt %d", i + 1, bt[i], total - at[i], total - at[i] - bt[i]);
                  wait_time = wait_time + total - at[i] - bt[i];
                  turnaround_time = turnaround_time + total - at[i];
                  counter = 0;
            }
            if(i == n - 1)
            {
                  i = 0;
            }
            else if(at[i + 1] <= total)
            {
                  i++;
            }
            else
            {
                  i = 0;
            }
      }
 
      average_wait_time = wait_time * 1.0 / n;
      average_turnaround_time = turnaround_time * 1.0 / n;
      printf("nnyAverage Waiting Time:t%f", average_wait_time);
      printf("n7yAvg Turnaround Time:t%fn", average_turnaround_time);
      
}
