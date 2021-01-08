#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter the vakue of A and B");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n The Value of A is=%d",a);
	printf("\n The Value of B is=%d",b);
	getch();
	return 0;
}
