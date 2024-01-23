#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	printf("enter the elements:\n");
	scanf("%d",&arr[i]);
	}
	printf("elements of array:");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>4)
		count++;
	}printf("elements greater than 4=%d",count);
	return 0;

	
}
