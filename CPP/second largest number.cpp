#include <stdio.h>

int main()
{
	int n,i,r,least,least2;
	printf(" ");
	scanf(" ");
	printf(" ");
	scanf("%d",&n);
	least=n;
	for(i=1;i<r;i++)
	{
		scanf("%d",&n);
    if(n==-1)
    	continue;
    	if(least<n)
    	least=n;
	}
	printf("%d",least);
}
