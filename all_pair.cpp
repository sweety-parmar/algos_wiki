#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,min,j,cost[50][50],a[50][50],n,k;
	cout<<"program for all pair shortest path\n";
	cout<<"enter the number of vertices\n";
	cin>>n;
	cout<<"\nenter infinity as a number greater than 9999 in adjacency matrix";
	cout<<"\nenter the adjacency matrix\n";
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	cin>>cost[i][j];
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	a[i][j]=cost[i][j];
	for(k=1;k<=n;k++)
	for(i=1;i<=n;i++)
	for(j=1,min=9999;j<=n;j++)
	{
	    if((a[i][k]+a[k][j])<a[i][j])
	    {
min=(a[i][k]+a[k][j]);
	    	a[i][j]=min;
		}
	}
	cout<<"\nshortest distance matrix is\n";
	for(i=1;i<=n;i++)

	{ cout<<"\n";
	for(j=1;j<=n;j++)
	cout<<a[i][j]<<"\t";
    }
}
