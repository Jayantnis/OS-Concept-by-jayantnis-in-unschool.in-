#include<iostream>
using namespace std; ////developer by jayantnis in unschool.in

int  main()
{	//burst time ,processes,waiting time, turnaround time
	int bt[20],p[20],wt[20],tat[20],i,j,n,total=0;
	int pos,temp;//remining
float avg_wt,avg_tat;
cout<<"Enter the processes ";
cin>>n;
cout<<"\n Enter the burst time:- "<<endl;
cin>>n;

for(i=0;i<n;i++)
{ cout<<"p "<<i+1;
	cin>>bt[i];
		p[i]=i+1;//concept contains process numbers
		
}

	//sorting burst time in ascending orders using selection sort 
///let's get started
for(i=0;i<n;i++)
{
	pos=i;
	for(j=i+1;j<n;j++)
	{
		if(bt[j]<bt[pos])
		pos=j;
	}

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

//now average waiting time so that concisitions 

avg_wt=(float)total/n;
total=0;
cout<<"\n process  , burst time  , waiting time , turnaround time \n"<<endl;
//now finialy 
//inilizing
//let's we get started 
for(i=0;i<n;i++)
{
	tat[i]=bt[i]+wt[i];
	cout<<"\n p \t\t\t  \n",p[i],bt[i],wt[i],tat[i];
}
avg_tat=(float)total/n;
cout<<"\n average waiting time =  \n",avg_wt;
cout<<"\n\n average turnAround time = \n",avg_tat;


return 0;
}
