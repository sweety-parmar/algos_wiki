#include<iostream>
using namespace std;
struct activity
{
	int id;
	int start;
	int finish;
};
void activityselection(activity activities[],int n)
{
	int i,j;
	activity temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-1;j++)
{
			if(activities[j].finish>activities[j+1].finish)
			{
				temp=activities[j];
				activities[j]=activities[j+1];
				activities[j+1]=temp;
			}
		}
	}
	cout<<"\nsorted activities as per finish time (ascending order)\n";
	cout<<"\nactivity\t"<<"start\t"<<"finish\n";
	for(i=0;i<n;i++)
	{
cout<<"\t"<<activities[i].id<<"\t"<<activities[i].start<<"\t"<<activities[i].finish<<"\n";

	}
	cout<<"\nselected activities";
	cout<<"\nactivity\t"<<"start\t"<<"finish\n";
	cout<<"\t"<<activities[0].id<<"\t"<<activities[0].start<<"\t"<<activities[0].finish<<"\n";
	i=0;
	for(j=1;j<n;j++)
	{
		if(activities[j].start>=activities[i].finish)
		{
			cout<<"\t"<<activities[j].id<<"\t"<<activities[j].start<<"\t"<<activities[j].finish<<"\n";
		    i=j;
		}
	}
	}
int main()
{
	int n,i;
	cout<<"program for activity selection\n";
	cout<<"enter the number of activities\n";
	cin>>n;
	activity activities[n];
	cout<<"enter the starting time of each activity\n";
	for(i=0;i<n;i++)
	cin>>activities[i].start;
	for(i=0;i<n;i++)
	activities[i].id=i;
	cout<<"enter the finish time of each activity\n";
	for(i=0;i<n;i++)
cin>>activities[i].finish;

	activityselection(activities,n);
}
