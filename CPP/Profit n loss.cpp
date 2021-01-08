#include<stdio.h>
#include<conio.h>
int main()
{
	float cp,sp,p,l;
	printf("Enter the prizes");
	scanf("%f%f",&cp,&sp);
	p=sp-cp;
	l=cp-sp;
	if(p>0)
	printf("The seller made a profit of Rs%f",p);
	if(l>0)
	printf("The seller made a loss of Rs%f",l);
	if(p==0)
	printf("There is no loss of profit");
	getch();
}
