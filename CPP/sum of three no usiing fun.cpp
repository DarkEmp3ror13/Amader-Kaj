#include<stdio.h>
int sum(int a,int b,int c);
int main()
{
	int a,b,c,sums;
	printf("Enter three number: ");
	scanf("%d%d%d",&a,&b,&c);
	sums=sum(a,b,c);
	printf("The sum is=%d",sums);
}
int sum(int a,int b,int c)
{
	int add;
	add=a+b+c;
	return (add);
}

