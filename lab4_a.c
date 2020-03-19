#include<stdio.h>
void insertion(int arr[],int n)
{
	int i,item,j;
	for(i=1;i<n;i++)
	{
		item=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>item)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=item;
	}
	printf("SORTED ARRAY\n");
	for(i=0;i<n;i++)
	printf("%d  ",arr[i]);
	printf("\n");
}

void main()
{
	int l,i;
	int a[10];
	printf("Enter length of array\n");
	scanf("%d",&l);
	printf("Enter array elements\n");
	for(i=0;i<l;i++)
	scanf("%d",&a[i]);
	insertion(a,l);
	
}
