#include<iostream>
#define cap 100000
using namespace std;

int tower_of_hanoi(int n, char a,char b,char c,int count)
{
        if(n>=1)
        {
                count++;
              tower_of_hanoi(n-1,a,c,b,count);
              tower_of_hanoi(n-1,c,b,a,count);
		return count;
        }
}




int main()
{
int t;
    cin>>t;
    int x[cap],y=0;
while(t--)
{
int n;

cin>>n;
char a,b,c;

a='A';
b='B';
c='C';
int count=0;
x[y++]=tower_of_hanoi(n,a,b,c,count);
}

for(int i=0;i<y;i++)
cout<<x[i]<<"\n";
return 0;
}
          
