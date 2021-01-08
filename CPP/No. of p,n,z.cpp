#include<stdio.h>
#include<conio.h>
int main()
{
	int pos,neg,zero,n;
	char ch;
	pos=neg=zero=0;
	do
	{
	printf("Enter the number");
	scanf("%d",&n);
	if(n>0)
	pos++;
	else
	if(n<0)
	neg++;
	else
	zero++;
	printf("Do you want to continue(y/n)=");
	scanf("%s",&ch);	
	}
	while((ch=='y')||(ch=='Y'));
	printf("\nThe positive numbers are=%d",pos);
	printf("\nThe negetive numbers are=%d",neg);
	printf("\nThe zeros are=%d",zero);
	getch();
}
