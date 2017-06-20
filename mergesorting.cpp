#include <iostream>
using namespace std;
int a[1000];
int b[1000];
void merge_sort(int low,int high);
void merge(int low ,int mid,int high);

int main()
{
	int n;
	
	cout<<"enter the size of array";
	cin>>n;
	
	for(int i=0;i<n;i++)
	cin>>a[i];

	merge_sort(0,n-1);

	for(int i=0;i<n;i++)
	{
		cout<<"\n"<<a[i]<<"\t";
	}

	return 0;
}


void merge_sort(int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		merge_sort(low,mid);
		merge_sort(mid+1,high);
		merge(low,mid,high);
	}
}

void merge(int low,int mid,int high)
{
	int i,j,k;
	k=low;
	i=low;
	j=mid+1;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}	
	while(i<=mid)
	{
		b[k]=a[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		b[k]=a[j];
		k++;
		j++;
	}
	cout<<"\n";
	for(int l=low;l<=high;l++)
	{	a[l]=b[l];
		cout<<b[l]<<"\n";
	}

}
