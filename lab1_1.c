#include<stdio.h>
void toh(int n,char src,char temp,char des)
{
	if(n==1)
	{
		printf("Move disc 1 from %c to %c\n",src,des);
		return;
	}
	else
	{
		toh(n-1,src,des,temp);
		printf("Move disc %d from %c to %c\n",n,src,des);
		toh(n-1,temp,src,des);
	}
}
int gcd(int m,int n)
{
	if(m==n)
	return m;
	if(m>n)
	return gcd(m-n,n);
	else
	return gcd(m,n-m);
}
void main()
{
	int ch,a,x,b,g;
	printf("1.TOH\n2.GCD\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("Enter number of discs\n");
	scanf("%d",&a);
	toh(a,'s','t','d');
	break;
	case 2:
	
	printf("Enter 2 numbers\n");
	scanf("%d%d",&x,&b);
	g=gcd(x,b);
	printf("The GCD of the 2 numbers is: %d\n",g);
	break;
	}
}
