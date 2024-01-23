#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			int a=(n/2)+1;
			if(i==a||j==a)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
