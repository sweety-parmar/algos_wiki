#include<iostream>
using namespace std;
int max(int a ,int b )
{
if(a>=b)
return a;
else 
return b;

}

int cut_rod(int p[],int n)
{
int q;
if(n==0)
return 0;
else
{
q=-1;
for(int i=1;i<=n;i++)
q=max(q,p[i]+ cut_rod(p,n-i));
return q;
}
}
int main()
{
int n;
cout<<"enter the lenght of the object";
cin>>n;

int p[11]={0,1,5,8,9,10,17,17,20,24,30};
int max_revenue;
max_revenue=cut_rod(p,n);

cout<<max_revenue;




}
