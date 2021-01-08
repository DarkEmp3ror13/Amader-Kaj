#include<stdio.h>
int ls(int arr[],int );
int main()
{
	int a[50],s,m,i;
	printf("Enter the size:");
	scanf("%d",m);
	printf("Enter the elements:");
	for(i=0;i<m;i++)
	{
		scanf("%d",a[i]);
	}
	printf("Enter the number to be search:");
	scanf("%d",&s);
	ls(a,s);
	
}
int ls(int arr[],int n)
{
	int c=0,i;
	for(i=0;arr[i]!=n;i++)
	{
		if(arr[i]==n)
		{
			c++;
			break;
		}
		if(c==1)
		{
			printf("The number is found in the position :%d",i+1);
		}
	}
	return 0;
}
