#include<iostream>
using namespace std;
int max(int a, int b)
{
	if(a>b)
   		return a;
   	else
   		return b;
   		}
 int knapSack(int W, int wt[], int val[], int n)
{
if (n == 0 || W == 0)
       return 0;
  if (wt[n-1] > W)
       return knapSack(W, wt, val, n-1);


   else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
                    knapSack(W, wt, val, n-1)
                  );
}
int main()
{	int W,n;
    cout<<"Enter the maximum capacity of the knapsack\n";
    cin>>W;
    cout<<"Enter the number of weights to be entered";
    cin>>n;
	int val[200],wt[100];
	cout<<"Enter the different weights\n";
	for(int i=0;i<n;i++){
		cin>>wt[i];
	}
	cout<<"\n";
    cout<<"Enter the corresponding values of different weights\n";
    for(int i=0;i<n;i++){
    	cin>>val[i];
	}
	cout<<"\n";
    cout<<knapSack(W, wt, val, n);
    return 0;
}
