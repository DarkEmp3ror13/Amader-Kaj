#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("Enter the year");
	scanf("%d",&i);
	if((i%4==0)&&(i%400==0)||(i%100!=0))
    printf("\n The year is a leapyear");
    else
    printf("Not leapyear");
    getch();
}
