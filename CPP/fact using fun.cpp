#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main()
{
	int a,fact;
	printf("Enter a number:");
	scanf("%d",&a);
	fact=factorial(a);
	printf("The factorial of the number is =%d",fact);
}
int factorial(int m)
{
	int i,f=1;
	for(i=m;i>=1;i--)
	{
		f=f*i;
	}
	return(f);
}

