#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the no. of vertices : ";
cin>>n;

int min1;
//cout<<"enter the cost of each edge : ";

/*for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout<<"cost of edge from vertex "<<i<<" to "<<j<<" : ";
cin>>a[i][j];
}
}*/

int a[6][6]={	{0,3,9999,9999,6,5},
                   {3,0,1,9999,9999,4},
                   {9999,1,0,6,9999,5},
                   {9999,9999,6,0,8,5},
                   {6,9999,9999,8,0,2},
                   {5,4,5,5,2,0}};
min1=9999;
int k,l;


for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if((min1>a[i][j]) && (i!=j))
	{
		min1=a[i][j];
		k=i;
		l=j;
		cout<<"k="<<k;
		cout<<"l="<<l;
  	}
}
}

int mincost=a[k][l];
int t[n][2];
int near[n];

t[0][0]=k;
t[0][1]=l;

for(int i=0;i<n;i++)
{
if(a[i][l]>a[i][k])
near[i]=k;
else
near[i]=l;
cout<<"\n near "<<i<<"="<<near[i];
}
near[k]=-1;
near[l]=-1;
int m;
for(int i=1;i<n-1;i++)
{
int x=9999;

	for(int j=0;j<n;j++)
	{
		if((near[j]!=-1) && (a[j][near[j]]<x))
			{m=j;
			x=a[j][near[j]];
			}

	}

t[i][0]=m;
t[i][1]=near[m];
mincost=mincost+a[m][near[m]];
near[m]=-1;

for(int k=0;k<n;k++)
{
if((near[k]!=-1) && (a[k][near[k]]>a[k][m]))
	near[k]=m;
}

}

for(int i=0;i<n-1;i++)
cout<<t[i][0]<<"  "<<t[i][1]<<"\n";

return 0;
}
