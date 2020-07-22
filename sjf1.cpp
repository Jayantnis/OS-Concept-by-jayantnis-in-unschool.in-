#include<stdio.h>
///Developer by jayantnis in unschool.in 

int main()
{	//burst time ,processes,waiting time, turnaround time
	int bt[20],p[20],wt[20],tat[20],i,j,n,total=0;
	int pos,temp;//remining
float avg_wt,avg_tat;
printf("Enter the processes:-  ");
scanf("%d",&n);
printf("\n Enter the burst time :- ");

for(i=0;i<n;i++)
{ 	printf("p%d",i+1);
	scanf("%d\n\t",&bt[i]);	
		p[i]=i+1;//concept contains process numbers
		
}

	//sorting burst time in ascending orders using selection sort 
///let's get started
for(i=0;i<n;i++)
{
	pos=i;
	for(j=i+1;j<n;j++)
	
		if(bt[j]<bt[pos])
		pos=j;
	

temp=bt[i];
bt[i]=bt[pos];
bt[pos]=temp;//upgrading the utility

temp=p[i];
p[i]=p[pos];
p[pos]=temp;//recovered files

}

wt[0]=0;//waiting time 0
for(i=0;i<n;i++)
{
	wt[0]=0;
	for(j=0;j<i;j++)
	{
		wt[i]=bt[j];
		total=wt[i];
	}
	
}
	avg_wt=(float)total/n;
	total=0;
	printf("\n processes(p)  burst time(bt)  waiting time(wt)  TurnAround time(tat) \n");
	
	for(i=0;i<n;i++)
	{
		tat[i]=bt[i]+wt[i];
		total = tat[i];
		
		printf("\n p %d\t\t %d \t\t %d \t %d \n",p[i],bt[i],wt[i],tat[i]);
	}
		
avg_tat=(float)total/n;
printf("\n Average waiting time =%f",avg_wt);
printf("\n Average turnaaround time= %f \n",avg_tat);
return 0;
}
