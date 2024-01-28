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
			printf("elements of matrix are:\n");
			for(int i=0;i<n;i++)
			{ 
				for(int j=0;j<n;j++)
				{
					printf("%d\t",a[i][j]);
				}
					printf("\n");
			}
			printf("zigzag patter:\n");
			for(int j=0;j<m;j++)
			{
				if(j%2==0)
				{
					for(int i=n-1;i>=0;i--)
					{
						printf("%d\t",a[i][j]);
					}
				}
				else{
					for(int i=0;i<n;i++)
					{
						printf("%d\t",a[i][j]);
					}
				}
				printf("\n");
			}
			
		
		return 0;
	
}
