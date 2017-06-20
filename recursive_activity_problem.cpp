#include<iostream>
using namespace std;
void recursive_activity_selector(int [],int [],int ,int);
int main()
{
int n;
cout<<"enetr the number of activities";
cin>>n;


int s[n],f[n];
cout<<"enter the starting and ending time of the activites respectively" ;

for(int i=0;i<n;i++)
cin>>s[i]>>f[i];

recursive_activity_selector(s,f,0,n);

return 0;
}

void recursive_activity_selector(int s[],int f[],int k,int n)
{
int m=k+1;

while(m<=n && s[m]<f[k])
	m++;
if(m<=n) 
{
cout<<m;
recursive_activity_selector(s,f,m,n);
}
}
