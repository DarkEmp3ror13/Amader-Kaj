#include<stdio.h>
int main()
{
	char *str;
	int len=0;
	printf("Enter a string:");
	scanf("%s",str);
	while(*str!='\0')
	{
		len++;
		str++;
	}
	printf("The length of the stringis:%d",len);
}
	
