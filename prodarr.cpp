#include<stdio.h>
int main()
{
	int n,prod=1;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("enter element: ");
		scanf("%d",&arr[i]);
		prod = prod*arr[i];
		
	}
	printf("elements of array: \n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("product of array elements:%d\n",prod);
	return 0;
	
}

