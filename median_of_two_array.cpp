#include<iostream>
using namespace std;


int max(int x,int y)
{
return x>y?x:y;
}


int min(int x,int y)
{
return x>y?y:x;
}

int  median(int a[],int n)
{
if(n%2==0)
return (a[n/2]+a[(n+1)/2])/2;
else
return a[n/2];

}

int median_of_two_array(int a[],int b[],int n)
{
int m1=median(a,n);
int m2=median(b,n);

if(n==1)
return (a[0]+b[0])/2;

else if(n==2)
{
int x =(max(a[0],b[0]),min(a[1],b[1]))/2;
return x;
}

else if(m1>m2)
{
	if(n%2==0)
		return median_of_two_array(b+n/2-1,a,n-n/2+1);
	else
		return median_of_two_array(b+n/2,a,n-n/2);
}
else
{
	if(n%2==0)
		return median_of_two_array(a+n/2-1,b,n-n/2+1);
	else
		return median_of_two_array(a+n/2,b,n-n/2);
}

}


int main()
{
int n;
cout<<"enter the size of the array";
cin>>n;

int a[n],b[n];
cout<<"enter the first array";
for(int i=0;i<n;i++)
cin>>a[i];

cout<<"enter the second array";
for(int i=0;i<n;i++)
cin>>b[i];

int med;
//med=median_of_two_array(a,b,n);

//cout<<"meadian of two array is : "<<med<<"\n";
cout<<a+n/2-1;


return 0;
}
