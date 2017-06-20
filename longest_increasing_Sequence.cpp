#include<iostream>
using namespace std;

int main()
{

int t;

cout<<"enter the no. of test cases : ";
cin>>t;

if(t>40)
return -1;


while(t--)
{
int n;

cout<<"enter the size of the array : ";
cin>>n;

int a[n];

for(int i=0;i<n;i++)
	{	cin>>a[n];	}


int b[2][n+1],x=0,y,count;

for(int i=0;i<n-1;i++)
{
y=0;
count=0;

b[x][y++]=a[i];
count++;

for(int j=i;j<n;j++)
{

if(a[j]<a[j+1])
{

count++;
b[x][y++]=a[j+1];
}

}
b[x][n]=count++;

if(x==1 && b[x-1][n]>b[x][n])
{
x==1;
}
else
{
x==0;
}

}
}
return 0;
}
