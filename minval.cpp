#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("enter elements:");
		scanf("%d",&arr[i]);
		
	}
	printf("elements of array:\n ");
	for(int i=0;i<n;i++)
	
	{
		printf("%d\n",arr[i]);
	}
	int min_value=arr[n];
	for(int i=0;i<=n;i++)
	{
		if(min_value>arr[i])
		{
			min_value=arr[i];
		}
	}
	printf("\n minimum value:%d",min_value);
	return 0;
}

