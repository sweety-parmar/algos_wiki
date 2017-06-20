#include<iostream>
using namespace std;

void knapsack(int wt[],int val[],int n,int m)
{
int k[n+1][m+1];
int x[n+1];
	
	for(int z=0;z<=n;z++)
	{
		x[z]=0;
	}

	for(int i=0;i<=n;i++)
	{
		cout<<"\n";
		for(int w=0;w<=m;w++)
		{
			
			if((i==0) || (w==0))
			{
				k[i][w]==0;
			}
			
			else if( wt[i]<=w)
			{

				if( x[w]+wt[i]<=w )
				{
					x[w]=x[w]+wt[i];
					k[i][w]=k[i-1][w]+val[i];
				}
				else if(k[i-1][w]>val[i])
				{
					k[i][w]=k[i-1][w];
				}
				else
				{
					k[i][w]=val[i];
					x[w]=wt[i];
					cout<<"z";
				}

			}
			else
			{
				k[i][w]=k[i-1][w];
			}

		}

		for(int v=0;v<=n;v++)
			cout<<x[v]<<" ";
	}

for(int i=0;i<=n;i++)
{
	for(int j=0;j<=m;j++)
	{
		cout<<k[i][j]<<" ";
	}
cout<<"\n";
}


}


int main()
{

int n,m;
cout<<"enter the no. of items : \n";
cin>>n;
int wt[n+1],v[n+1];

cout<<"enter the weights and profits respectively : ";
for(int i=0;i<=n;i++)
{ cin>>wt[i]; }

for(int i=0;i<=n;i++)
{ cin>>v[i]; }

cout<<"enter the max knapsack weight";
cin>>m;

knapsack(wt,v,n,m);


}
