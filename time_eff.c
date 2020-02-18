#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int linear(int key,int a[10],int i, int n);
int binary(int a[10],int l,int h,int key);

void main()
{
int key,n,i,a[10],pos;
int startt,timelin,endt,timebs;
int ch;
printf("enter size of array\n");
scanf("%d",&n);
printf("enter element to be searched\n");
scanf("%d",&key);
printf("enter the elements of array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("enter 1 for linear search and 2 for binary search\n");
scanf("%d",&ch);
if(ch==1)
{
startt=clock();
pos=linear(key,a,0,n);
endt=clock();
timelin=endt-startt;
printf("time taken=%d\n",timelin); 
}

if(ch==2)
{
startt=clock();

pos=binary(a,0,n-1,key);

endt=clock();
timebs=endt-startt;
printf("time taken=%d\n",timebs); 
   }       
if(pos!=-1)
printf("key found at position %d\n",pos);
else
printf("key not found in array\n");

}



int linear(int key,int a[10],int i,int n)
{
int pos;
if(i<n)
{
if(a[i]==key)
{
pos=i;
return pos;
}
else
return linear(key,a,i+1,n);
}
return -1;
}

int binary(int a[], int l, int h, int key)
{
	int mid;
	if(l<=h)
	{
		mid = (l+h)/2;
		if(a[mid]==key)
			return mid;
		else if(a[mid]<key)
			return binary(a,mid+1,h,key);
		else 
			return binary(a,l,mid-1,key);
	}
	return -1;
}
 
