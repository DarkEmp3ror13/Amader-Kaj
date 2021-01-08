#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,m,n,p,q,k,sum=0;
	int a[10][10],b[10][10],c[10][10];
	printf("Entet the row and colum of first matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter the element of first matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the row and colum of second matrix:");
	scanf("%d%d",&p,&q);
	if(n!=p)
	printf("The matrix can't be multiplied.\n");
	else
	printf("Enter the element of second matrix:");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<p;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;			
	}
		}
		printf("The product of matrix:\n");
		for(i=0;i<m;i++)
		{
			for(i=0;i<m;i++)
			{
				for(i=0;i<q;i++)
				{
					printf("%d\t",c[i][j]);
				}
			}
			}
			printf("\n");
			return 0;
	
}
