#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of rows: ");
	scanf("%d",&n);
	int m;
	printf("ente the number of columns: ");
	scanf("%d",&m);
	printf("enter the elements: ");
	int a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
			printf("elements of matrix are: ");
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					printf("%d",a[i][j]);
				}
					printf("\n");
			}
		
		return 0;
	
}
