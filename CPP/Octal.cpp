#include<stdio.h>
#include<conio.h>
int main()
{
	int num,max=+32768,min=-32768,range;
	char choice='y';
	while(choice=='y')
	{
		printf("Enter any number");
		scanf("%d",&num);
		if(num>max)
		max=num;
		printf("\n You want to add another number(y/n)");
		fflush(stdin);
		scanf("%c",&choice);
	}
	range=max-min;
	printf("\n The range is=%d",range);
	getch();
}
