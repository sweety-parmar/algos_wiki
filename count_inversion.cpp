#include<iostream>
using namespace std;
int main()
{
int t;
//cout<<"enter the no. of test cases : ";
cin>>t;

while(t--)
{

int n;

//cout<<"enter the size of the array : ";
cin>>n;

int c[n];
//cout<<"enter the array : ";
for(int i=0;i<n;i++)
cin>>c[i];

int count=0;

for(int i=0;i<n-1;i++)
{	
	for(int j=i+1;j<n;j++)
	{	
		if(c[i]>c[j])
			count++;
	}
}


cout<<count<<"\n";

}


return 0;
}
