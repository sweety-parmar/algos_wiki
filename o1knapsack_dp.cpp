#include<iostream>
using namespace std;
// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }
// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];

   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[n][W];
}

int main()
{

    int n, W;
    cout<<"Enter the maximum capacity of the knapsack\n";
    cin>>W;
    cout<<"Enter the number of weights to be entered";
    cin>>n;
	int val[100],wt[100];
	cout<<"Enter the different weights\n";
	for(int i=0;i<n;i++){
		cin>>wt[i];
	}
	cout<<"\n";
    cout<<"Enter the corresponding values of different weights\n";
    for(int i=0;i<n;i++){
    	cin>>val[i];
	}
	cout<<"\nThe value of the knapsack is:" ;
    cout<< knapSack(W, wt, val, n);
    return 0;
}
