#include<iostream>
#include<limits.h>
using namespace std;

int max(int left_sum,int right_sum,int cross_sum)
{
int x,y;

x=left_sum>right_sum?left_sum:right_sum;

y=x>cross_sum?x:cross_sum;

return y;

}

int max_crossing(int a[],int l,int mid,int r)
{
int ls,rs;
ls=INT_MIN;
rs=INT_MIN;

int sum1=0,sum2=0;
int y,z;

for(int i=mid;i>=0;i--)
{
sum1=sum1+a[i];
	if(sum1>ls)
	{
	ls=sum1;
	y=i;
	}
}

for(int i=mid+1;i<=r;i++)
{
sum2=sum2+a[i];
	if(sum2>rs)
	{
	rs=sum2;
	z=i;	
	}

}
cout<<"value of cross_Sum is : "<<ls+rs<<"\n";
return ls+rs;
}


int maximum_subarray(int a[],int l,int r)
{
int left=l;
int right=r;
int mid=(l+r)/2;
int left_sum,right_sum,cross_sum;
if(l==r)
	return a[l];
else
	{
	left_sum=maximum_subarray(a,l,mid);
	right_sum=maximum_subarray(a,mid+1,r);
	cross_sum=max_crossing(a,l,mid,r);
	cout<<"sum is : "<<max(left_sum,right_sum,cross_sum)<<"\n";
	return max(left_sum,right_sum,cross_sum);
	}

}
int main()
{
int n;
cout<<"enter the array : ";
cin>>n;

int a[n];

for(int i=0;i<n;i++)
cin>>a[i];

int max_final_sum;
max_final_sum=maximum_subarray(a,0,n-1);

cout<<"maximum sum is : "<<max_final_sum;


return 0;
}
