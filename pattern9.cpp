#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int a=1;
		for(j=1;j<=n+1-i;j++)
		{
			printf("%d",a);
			a=a+2;
		}
		printf("\n");
		
	}
	return 0;
}
