#include<stdio.h>
#include<math.h>
#include<time.h>
void insertionsort(int*,int);
void main()
{
int arr[10],n,i,j,key;
int start_t,end_t;
double timetaken;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the elements of the array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("The elements before sorting the array\n");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
start_t=clock();
insertionsort(arr,n);
end_t=clock();
timetaken=(double)(end_t-start_t)/CLOCKS_PER_SEC;
printf("The time taken to sort the elements using insertion sort are %f",timetaken);
}

void insertionsort(int arr[],int n)
{
int i,j,key;
for(i=0;i<n;i++)
{
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
printf("The elements after sorting the array\n");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
}

