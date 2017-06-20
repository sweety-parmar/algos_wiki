#include<iostream>
using namespace std;
int a[1000],b[1000];

void merge(int p,int q,int r)
{
	 int i,j,k;

	 k=p;
	 i=p;
	 j=q+1;
	 while(i<=q && j<=r)
	 {
	 	if(a[i]<=a[j])
	 		b[k++]=a[i++];
	 	else
	 		b[k++]=a[j++];
	 }

	 while(i<=q)
	 	b[k++]=a[i++];

	while(j<=r)
		b[k++]=a[j++];

	for(i=p;i<=r;i++)
		a[i]=b[i];


}

void merge_sort(int p ,int r)
{
	int q,i;
	if(p<r)
	{
		q=(p+r)/2;

		merge_sort(p,q);

		merge_sort(q+1,r);

		merge(p,q,r);
	}
	else
	return ;
}



int main()
{
	int n,i;

	cout<<"enter the size of array : ";
	cin>>n;

	for(i=0;i<n;i++)
		cin>>a[i];


	merge_sort(0,n-1);

	cout<<"\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0;
}
