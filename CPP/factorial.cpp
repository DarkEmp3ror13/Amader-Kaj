#include<stdio.h>
#include<conio.h>
int main()
{
	int n,j,fact=1;
	printf("Enter the number");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		fact=fact*j;
	}
	printf("The factorial is=%d",fact);
	getch();
}
