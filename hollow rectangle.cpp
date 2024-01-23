#include<stdio.h>
int main()
{
	int n,i,j,m;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("enter the number: ");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==1||i==n|| j==0||j==m-1)
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
