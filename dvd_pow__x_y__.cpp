#include<iostream>
using namespace std;
int pow(int x, int y)
{
int temp;
if(y==0)
	return 1;
temp=pow(x,y/2);
 if(y%2==0)
	return temp*temp;
else
	return x*temp*temp;
}

int main()
{
int x,y;

cout<<"calculating power of x raised to power y \n";
cout<<"enter x and y respectively : ";

cin>>x>>y;

int power;
power=pow(x,y);

cout<<"x raised to power y is : "<<power;

return 0;
}
