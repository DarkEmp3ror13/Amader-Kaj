#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main()
{
	int a,fact;
	printf("Enter a number:");
	scanf("%d",&a);
    fact=factorial(a);
	printf("The factorial of the number is=%d",fact);
		
}
int factorial(int x)
{
	
	if(x==0 || x==1)
	return(1);
	else
	return(x*factorial(x-1));
}
