#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
