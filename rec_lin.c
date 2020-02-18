#include<stdio.h>
#include<stdlib.h>

int recursivels(int arr[],int n,int k,int i)
{
int pos=0;
if(i >= n)
{
return 0;
}
else if(arr[i]==k)
{
pos=i+1;
return pos;
}
else
return recursivels(arr,n,k,i+1);
}

void main()
{
int array[10],n,key,i,pos;
printf("Enter the number of elements in the array\n");
scanf("%d",&n);
printf("enter the elements of array\n");
for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("Enter the key element to be searched\n");
scanf("%d",&key);
pos=recursivels(array,n,key,0);
if(pos!=0)
{
printf("The element found in the position %d",pos);
}
else
{
printf("the element not found in the array\n");
}
}



