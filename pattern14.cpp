#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j||i+j==n+1)
			printf("i love you noni");
			else 
			printf("     ");
		}
		printf("\n\n\n\n");
		
		
		
	}
	return 0;
}
