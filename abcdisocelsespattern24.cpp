#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		char c='A';
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("%c",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}

