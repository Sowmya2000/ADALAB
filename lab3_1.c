

#include<stdio.h>
#include<time.h>

void selection(int a[],int n)
{

	
	int min,i,j,t;
	
	for(i=0;i<n-2;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	
	printf("Array in sorted manner:\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
void main()
{
	int l,i,key;
	int arr[10];
	clock_t t; 
    
	printf("Enter length of array\n");
	scanf("%d",&l);
	printf("Enter array elements\n");
	for(i=0;i<l;i++)
	scanf("%d",&arr[i]);
	t = clock(); 
    selection(arr,l);
    t = clock() - t; 
    double time_taken = 1000000*((double)t)/CLOCKS_PER_SEC; 
  
    printf("sorting took %f milliseconds to execute \n", time_taken);
	
	
	
}

