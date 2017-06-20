#include<iostream>
using namespace std;
int binary_search(int a[],int left,int right,int key)
{
int mid=(left+right)/2;
if(left>right)
return -1;
else if(key==a[mid])
return mid;
else
{
if(key>a[mid])
	return binary_search(a,mid+1,right,key);
else
	return binary_search(a,left,mid-1,key);
}	}

int main()
{
int t,z,y=0;
cin>>t;
z=t;
int x[z];
while(t--)
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int key;
cin>>key;

x[y++]=binary_search(a,0,n-1,key);

}
for(int i=0;i<z;i++)
cout<<x[i]<<"\n";
return 0;
}
