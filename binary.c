#include<stdio.h>
#include<stdlib.h>
void binary_search(int *,int,int,int);
void main()
{
int n;
int arr[10],i,key,mid,pos;
printf("enter the number of elements in array\n");
scanf("%d",&n);
printf("Enter the elements of the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the key element to search\n");
scanf("%d",&key);
binary_search(arr,0,n-1,key);
//printf("The key element found in the position %d",pos+1);
return;
}
void binary_search(int array[],int low,int high,int key)
{
if(high >= low)
{
int mid=(low+high)/2;
	if(array[mid]==key)
	{
		printf("The key element %d is found at mid position %d\n",key,mid);
		goto leftsubarray;
		
	}
	leftsubarray:
	if(array[mid]>=key)
	{
		binary_search(array,low,mid-1,key);
		printf("the key element %d is found at left sub array %d\n",key,mid);
	}
	else
		 binary_search(array,mid+1,high,key);
}
}





