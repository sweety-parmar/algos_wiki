#include<iostream>
using namespace std;
int count;
int tower_of_hanoi(int n, char a,char b,char c)
{
	if(n>=1)
	{
		count++;
		tower_of_hanoi(n-1,a,c,b);
		tower_of_hanoi(n-1,c,b,a);
	}
}




int main()
{

int n;
cout<<"enter the no. of paper : ";
cin>>n;
char a,b,c;

a='A';
b='B';
c='C';

tower_of_hanoi(n,a,b,c);

cout<<count;
return 0;
}
