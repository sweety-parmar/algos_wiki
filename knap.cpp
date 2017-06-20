#include<iostream>
using namespace std;
float max(float a[20],int n);
int main()
{
int i,k,n,m,wt;
float p[20],w[20];
float a[20],x[20];
cout<<"Enter no. of items to be put in bag:";
cin>>n;
cout<<"Enter maximum weight of bag:";
cin>>m;
cout<<"Enter weight and profit of each item:\n";
for(i=1;i<=n;i++)
{
cout<<"w["<<i<<"]=\t";
cin>>w[i];
cout<<"p["<<i<<"]=\t";
cin>>p[i];
a[i]=p[i]/w[i];
cout<<"p[i]/w[i]="<<a[i]<<endl;
x[i]=0;
}

wt=0;
while(wt<m)
{
k=max(a,n);
if(wt+w[k]<=m)
{  x[k]=1;
   wt=wt+w[k];
}
else
{
x[k]=(m-wt)/w[k];
wt=m;
}
a[k]=-1;
}
cout<<"The maximum capacity of bag is "<<m<<endl;
cout<<"This could be done by taking:";
for(i=1;i<=n;i++)
{

cout<<x[i]<<" part of item "<<i<<endl;
 }
 }
 float max(float a[20],int n)
 {
int i;
 float pos=1;
 float max1=a[1];
 for(i=1;i<=n;i++)
 {if(a[i]>max1)
     {
     max1=a[i];
     pos=i;
     }
 }
 return pos;
 }
