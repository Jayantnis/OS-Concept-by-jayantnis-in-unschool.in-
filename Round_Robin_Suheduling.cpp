#include<stdio.h>//RRS ROUND ROBIN SCHEDULING BY developer jayantnis in unschool.in
#include<conio.h>

int main()
{	int i,limit,x,total =0,counter=0,time_quantum;
	int wait_time=0,turnaround_time=0, arrival_time[10],burst_time[10],temp[10];//array

float average_waiting_time,average_turnaround_time;
printf("\n Enter Total number of processes:-  \n");
scanf("%d",&limit);
x=limit;

	for(i=0;i<limit;i++)
	{
		printf("\n Enter defailts of process[%d]\n",i+1);
		printf("\nArrival_Time :- \n");
		scanf("%d\a",&arrival_time[i]);
		
		printf("burst time : ");
		scanf("%d",&burst_time[i]);
		
		temp[i]=burst_time[i];
	}
printf("\n Enter Timr Quantum: \n");
scanf("%d\n",&time_quantum);

printf("\n process ID \t\t Burst Time \t\t\t TurnAround Time \t\t\t waiting_Time \n");

	for(total=0;i=0;x!=0)
	{
		if(temp[i]<=time_quantum && temp[i]>0)
		{
		total=total+temp[i];
		temp[i]=0;
		counter=1;
		}
		else if(temp[i]>0)
		{
		temp[i]=temp[i]-time_quantum;
		total=total+time_quantum;
		}
	
	if(temp[i]==0&&counter==1)
	{ x--;
		  printf("nProcess[%d]tt%dtt %dttt %d", i + 1, burst_time[i], total - arrival_time[i], total - arrival_time[i] - burst_time[i]);
                  wait_time = wait_time + total - arrival_time[i] - burst_time[i];
                  turnaround_time = turnaround_time + total - arrival_time[i];
                  counter = 0;
	
	}
	
	if(i==limit-1)
	{
		i=0;
	}
	else if(arrival_time[i+1] <= total)
	{
			i++;
	}
	else
		
		i=0;
	
	
	average_waiting_time=wait_time*1.0/limit;
	average_turnaround_time=turnaround_time*1.0/limit;
	
	printf("\n\n Average waiting time:  %f \n\n",average_waiting_time);
	
	printf("\n\n Average TurnAround Time : %f \n\n",average_turnaround_time);
	return 0;
}








}
