#include<iostream>//lets as c to c++ language
#include<conio.h>

using namespace std;
//functions waiting time processes
void findwaitingTime(int processes[],int n,int bt[],int wt[])
{
	wt[0]=0;
	for(int i=1;i<n;i++)
	{
		wt[i]=bt[i-1]+wt[i-1];
	}
}

//functions to calculate TurnAround time
void findTurnAroundTime(int processes[],int n,int bt[],int wt[],int tat[])
{
	//calculate turn around time by adding  bt[i]+wt[i]
	for(int i=0;i<n;i++)
	{
		tat[i]=bt[i]+wt[i];
	}

}

//functions to calculate Average time
void findavgTime(int processes[],int n,int bt[])
{
	int wt[n],tat[n],total_wt=0,total_tat=0;
	//call above two funcitons
	findwaitingTime(processes,n,bt,wt);
	//call TurnAroundTime
	findTurnAroundTime(processes,n,bt,wt,tat);

	//display
	cout<<"processes  burst_time   waiting_time  Turn_AroundTime \n";

	for(int i=0;i<n;i++)
	{
		total_wt=total_wt+wt[i];
		total_tat=total_tat+tat[i];
		cout<<"\n";

		cout<<" %d\t\t",(i+1)<<endl;
		cout<<" %d\t\t",bt[i]<<endl;
		cout<<" %d\t\t",wt[i]<<endl;
		cout<<" %d\t\t",tat[i]<<endl;//t is declared by the /t is horizontal distance of spaces//
	cout<<endl;
	}
	int s/*average waiting time*/,t/* Average turn around time*/;
	s=(float)total_wt/(float)n;
	t=(float)total_tat/(float)n;
	cout<<"\nAverage Waiting time= %d",s<<endl;
	cout<<"\n"<<endl;
	cout<<"\nAverage Turn Around time= %d",t<<endl;

}

int main()///driver code installing the starting that come it's own int=s
{
	//processes ID is installing response at product at that time the property
	/* at characterestics at soon as knows to devices access at that time OS concept */


	int processes[]={1,2,3};//array
	int n=sizeof processes/sizeof processes[0];
	int bt[]={10,5,8};
	findavgTime(processes,n,bt);
	return 0;
}
