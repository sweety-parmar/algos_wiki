#include<iostream>
#define capacity 100
using namespace std;
int size;

struct H
{
int u,v,h;
}heap[capacity];



void matrix_to_heap(int a[][6])
{

if(size>=capacity)
	cout<<"overflow in heap \n";
else
	{
		for(int i=0;i<6;i++)
		{
			for(int j=0;j<6;j++)
			{
				if((a[i][j]!=0) && (a[i][j]!=9999))
				{
					heap[size].h=a[i][j];
					heap[size].u=i;
					heap[size].v=j;

					int p=size;
			
					while( (p>0) && (heap[p].h<heap[(p-1)/2].h) )
					{
						int temp1,temp2,temp3;
						temp1=heap[p].h;	temp2=heap[p].u;	temp3=heap[p].v;
						heap[p].h=heap[(p-1)/2].h;	heap[p].u=heap[(p-1)/2].u;	 heap[p].v=heap[(p-1)/2].v;
						heap[(p-1)/2].h=temp1;	heap[(p-1)/2].u=temp2;	heap[(p-1)/2].v=temp3;
						p=(p-1)/2;
					}	
						size++;
				}
			}	
		}
	}


 for(int i=0;i<size;i++)
      cout<<"heap "<<i<<" : "<<heap[i].h<<"  corresponding value of u and v is :  "<<heap[i].u<<" "<<heap[i].v<<"\n";
 cout<<"\n";


}
void reheapify(struct H heap[])
{   
int p=size-1,i;
heap[0].h=heap[p].h;	heap[0].u=heap[p].u;	heap[0].v=heap[p].v;
size=size-1;	
cout<<"size of heap is : "<<size<<"\n";
p--;
if(size==0)
	cout<<"no heap present";
else if(size==1)
	return;
else
	{	
		int left,right,i,j;
		i=0;
		int smallest=i;
		left=2*i+1;
		right=2*i+2;
		cout<<"left : "<<left<<"right : "<<right<<" value of i is : "<<i<<"\n";
		while(p)
		{
			smallest=i;
		if((left<size) && (heap[smallest].h>heap[left].h) )
		{	smallest=left; j=smallest; 	}
		if((right<size) && (heap[smallest].h>heap[right].h))
		{	smallest=right; j=smallest; 	}
			
		if(smallest!=i)
		{
			int temp1,temp2,temp3;
		        temp1=heap[i].h;	temp2=heap[i].u;	temp3=heap[i].v;
			heap[i].h=heap[smallest].h;	heap[i].u=heap[smallest].u;	heap[i].v=heap[smallest].v;
			heap[smallest].h=temp1;		heap[smallest].u=temp2;		heap[smallest].v=temp3;
		}
		left=2*j+1;
		right=2*j+2;
		i=j;
		cout<<"left : "<<left<<"right : "<<right<<" value of i is : "<<i<<"\n";
		p--;
		}				

	}
cout<<"\n";
cout<<"\n";
for(int i=0;i<size;i++)
 cout<<"heap "<<i<<" : "<<heap[i].h<<"  corresponding value of u and v is :  "<<heap[i].u<<" "<<heap[i].v<<"\n";
cout<<"\n";


}


int main()
{

 size=0;

	
int a[6][6]={
		{0,3,9999,9999,6,5},
                {3,0,1,9999,9999,4},
                {9999,1,0,6,9999,5},
                {9999,9999,6,0,8,5},
                {6,9999,9999,8,0,2},
                {5,4,5,5,2,0}
	    };

matrix_to_heap(a);


int parent[capacity];

for(int i=0;i<6;i++)
{
parent[i]=-1;
}

int i=0,minele,minu,minv,mincost=0,t[capacity][2],j=1;


while( (i<=5) && (size!=0) )
{
minele=heap[0].h;
minu=heap[0].u;
minv=heap[0].v;
reheapify(heap);

if((parent[minu]==-1) && (parent[minv]==-1))
{
mincost=mincost+minele;
t[i][0]=minu;
t[i][1]=minv;
i++;
parent[minu]=j++;
parent[minv]=j++;
}

else if( (parent[minu]!=parent[minv]) )
{
mincost=mincost+minele;
t[i][0]=minu;
t[i][1]=minv;
i++;

for(int z=0;z<6;z++)
{
if( (parent[minu]==parent[z]) && (z!=minu) )
{
parent[z]=j;
}
}
parent[minu]=j;
j++;

}

}

for(int j=0;j<5;j++)
cout<<t[i][0]<<" "<<t[i][1]<<" \n ";
return 0;
}
