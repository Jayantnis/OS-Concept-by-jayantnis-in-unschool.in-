#include<stdio.h>///priority scheduling alogorithm by jayantnis." in unschool.in "
#include<conio.h>// PSA 

int main()
{
	int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n;
	
	int total =0,pos,temp,avg_wt,avg_tat;
	printf("Enter total no. of process");
	scanf("%d",&n);
	
	printf("\nEnter burst time and priority\n");
	
	for(i=0;i<n;i++)///cpu scheduling the procsess on 
	{
		printf("\n p[%d]\n ",i+1);
		printf("\n burst time:- ");
		scanf("%d",&bt[i]);
		printf("Priority: ");
		scanf("%d",&pr[i]);
		p[i]=i+1;//contains procsess number
		
	}
	///sorting bursttime,priority and proces number in ascending and order using select sort;
	for(i=0;i<n;i++)
	{
	pos=i;
	for(j=i+1;j<n;j++)
	{
		if(pr[j]<pr[pos])
			pos=j;
			
	}//jump
 temp=pr[i];
 
 pr[i]=pr[pos];
 pr[pos]=temp;
 
 temp=bt[i];
 bt[i]=bt[pos];
 bt[pos]=temp;
 
 temp=p[i];
 p[i]=p[pos];
 p[pos]=temp;
 	
	}
//waiting time for first //process is zero wt[0]=0;
wt[0]=0;

//calcaulating waiting time 

for(i=1;i<n;i++)
{
	wt[i]=0;
	for(j=0;j<i;j++)
	{
		wt[i]+=bt[j];
		total+=wt[i];
	}
}

avg_wt=total/n;//Average waiting time 

total =0;

printf("\n process \t burst time \t waiting time  \t  turn Around time \n");

for(i=0;i<n;i++)
{
	tat[i]=bt[i]+wt[i];
	//calcaulating turnaround time 
	total+=tat[i];
	
	printf("\n p[%d] \t \t\t %d\t\t  %d\t\t\t %d \t\t\t  \n",p[i],bt[i],wt[i],tat[i]);
}

avg_tat=total/n;//average turnaround time

printf("\n\n Average waitingtime =%d\n\n",avg_wt);

printf("\n\n Average turnaround Time =%d\n\n",avg_tat);

return 0;
}


