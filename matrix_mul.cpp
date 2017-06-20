#include<iostream>
using namespace std;
int main()
{
int a[20][20],b[20][20],c[20][20];
int i,j,k,m,n,p,q;
cout<<"enter no of rows and columns of matrix 1:";
cin>>m>>n;
cout<<"enter no of rows and columns of matrix 2:";
cin>>p>>q;
cout<<"Enter elements of first matrix:"<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
}
cout<<"Enter elements of second matrix:"<<endl;
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
cin>>b[i][j];
}
}
 for(i = 0; i < m; ++i)
        for(j = 0; j < q; ++j)
        {
            c[i][j]=0;
        }
for(i=0;i<m;i++)
{
  for(j=0;j<q;j++)
   {
     for(k=0;k<p;k++)
  c[i][j] += a[i][k] * b[k][j];
  }
}
cout<<"The resultant matrix is:"<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
cout<<c[i][j]<<"  ";
cout<<endl;

}

return 0;}
