#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int a=1;
		for(j=1;j<=i;j++)
		{
			if(a%2!=0)
			{
				printf("%d",a);
			}
			else
			{
				printf(" ");
			}
			a=a+2;
			
		}
		printf("\n");
	}
	return 0;
}
