#include<stdio.h>
#include<stdlib.h>
int compute_gcd(int,int);
void main()
{
int n1,n2,gcd;
printf("Enter the values of n1 and n2:");
scanf("%d %d",&n1,&n2);
gcd=compute_gcd(n1,n2);
printf("The gcd of %d and %d is %d",n1,n2,gcd);
return;
}
int compute_gcd(int num1,int num2)
{
if(num2==0)
return num1;
else
return compute_gcd(num2,num1%num2);
}

