#include<stdio.h>
void selection(int a[],int n,int k)
{
	int min,i,j,t;
	for(i=0;i<n-2;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[min])
			min=j;
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	printf("k largest numbers:\n");
	for(i=0;i<k;i++)
	{
		printf("%d  ",a[i]);
	}
}
void largest(int a[],int n,int k)
{
	int i,j,r,l,num,count=0;
	l=0;
	int new[10];
	selection(a,n,k);
}
	
	

	
void main()
{
	int l,i,key;
	int arr[10];
	printf("Enter length of array\n");
	scanf("%d",&l);
	printf("Enter array elements\n");
	for(i=0;i<l;i++)
	scanf("%d",&arr[i]);
	printf("enter value of k\n");
	scanf("%d",&key);
	largest(arr,l,key);
	
}
		
