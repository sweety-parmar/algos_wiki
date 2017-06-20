#include<iostream>
#define infinity 9999
#define max 10
using namespace std;
void dijikstra(int G[max][max],int n,int startnode)
{
	int cost[max][max],distance[max],pred[max];
	int visited[max],count,mindistance,nextnode,i,j;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	if(G[i][j]==0)
	cost[i][j]=infinity;
	else
	cost[i][j]=G[i][j];
	for(i=0;i<n;i++)
	{
		distance[i]=cost[startnode][i];
		pred[i]=startnode;
		visited[i]=0;
	}
	distance[startnode]=0;
	visited[startnode]=1;
	count=1;
	while(count<n-1)
	{
		mindistance=infinity;
		for(i=0;i<n;i++)
		if(distance[i]<mindistance&&!visited[i])
		{

			mindistance=distance[i];
			nextnode=i;
}
		visited[nextnode]=1;
		for(i=0;i<n;i++)
		if(!visited[i])
		if(mindistance+cost[nextnode][i]<distance[i])
		{
			distance[i]=mindistance+cost[nextnode][i];
			pred[i]=nextnode;
		}
		count++;
	}
	for(i=0;i<n;i++)
	if(i!=startnode)
	{
		cout<<"\ndistance of "<<i<<" = "<<distance[i];
		cout<<"\npath = "<<i;
		j=i;
		do
		{
			j=pred[j];
			cout<<"<- "<<j;
		}
		while(j!=startnode);
	}
}
int main()
{
	int G[max][max],i,j,n,u;
cout<<"program for single source shortest path\n";
	cout<<"enter the number of vertices\n";
	cin>>n;
	cout<<"enter the adjacency matrix\n";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		cin>>G[i][j];

	}
	cout<<"enter the starting node\n";
	cin>>u;
	dijikstra(G,n,u);
}

