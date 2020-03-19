#include<stdio.h>
#include<time.h>
void bubbleSort(int arr[], int n) 
{ 
   int i, j,swap; 
   for (i = 0; i < n-1; i++)       
  {
      for (j = 0; j < n-i-1; j++)  
         {  if (arr[j] > arr[j+1]) 
             { swap=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=swap;
              }
          }
         }
         printf("Array in sorted order:\n");
         for(i=0;i<n;i++)
         printf("%d  ",arr[i]);
         printf("\n");
             
} 
void main()
{
	int a[10];
	int l,i;
	clock_t start, end;
	double cpu_time_used;
	printf("Enter length of array\n");
	scanf("%d",&l);
	printf("enter array elements\n");
	for(i=0;i<l;i++)
	scanf("%d",&a[i]);
	start = clock();
	bubbleSort(a,l);
	end = clock();
     cpu_time_used = ((double)(end - start))/ CLOCKS_PER_SEC;
     cpu_time_used=1000000*cpu_time_used;
     printf("TIME TAKEN IN MILLISECONDS: %f\n",cpu_time_used);
}
