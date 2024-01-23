#include<stdio.h>
int main()
{
	int m;
	printf("enter number of rows of first matrix : ");
	scanf("%d",&m);
	int n;
	printf("enter number of columns of first matrix: ");
	scanf("%d",&n);
	int a[m][n];
	printf("Enter the elements of first matrix: ");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	int p;
	printf("enter number of rows second matrix: ");
	scanf("%d",&p);
	int q;
	printf("enter number of column second matrix: ");
	scanf("%d",&q);
	int b[p][q];
	printf("Enter the elements of second matrix: ");
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(n!=p)
	{
		printf("the matrices cant be  multiplied");
	}
	else{
		int res[m][n];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<q;j++)
			{
				res[i][j]=0;
				for(int k=0;k<n;k++)
				{
					res[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<q;j++)
			{
				printf("%d",res[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
	
}
