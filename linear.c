#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[20],i,n,key;
printf("Enter the  size of the array\n");
scanf("%d",&n);
printf("Enter the elements of array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the key element\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
   if(key==a[i])
   {
      printf("1\n");
	break;
   }
  
}
if(key!=a[i])
{
printf("-1\n");
}
}




