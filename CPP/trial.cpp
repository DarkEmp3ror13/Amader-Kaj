#include<stdio.h>
int factorial(int x);
int main()
{
	int s,n;
	printf("Enter the number:");
	scanf("%d",&n);
	s=factorial(n);
	printf("The factorial of %d is=%d",n,s);
}
int factorial(int m)
{
	int f,i=1;
	for(i=m;i>=1;i--)
	{
	f=f*i;
    }
	return (f);
}
