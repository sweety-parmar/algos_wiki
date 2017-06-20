#include<iostream>
using namespace std;

int main()
{
int t;
//cout<<"enter the no. of test cases : ";
cin>>t;

int n;
//cout<<"enter the size of the array : ";
cin>>n;

int a[n],b[n],c[2*n];

for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<n;i++)
cin>>b[i];

int j=0,k=0;

int y=0;
while(y!=2*n)
{
if(a[j]>b[k])
	c[y]=b[k++];
else
	c[y]=a[j++];
y++;
}

cout<<c[(y-1)/2]+c[y/2];
return 0;
}
