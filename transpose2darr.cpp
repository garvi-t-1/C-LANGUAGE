#include<stdio.h>
int main()
{
	int r;
	printf("enter the number of rows: ");
	scanf("%d",&r);
	int c;
	printf("enter the number of columns: ");
	scanf("%d",&c);
	printf("enter all the elements: ");
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
	
	
}
