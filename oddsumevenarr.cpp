#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("enter the elements: ");
		scanf("%d",&arr[i]);
	}
	printf("elements of array: ");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		arr[i]+=arr[i];
		else
		arr[i]*=arr[i];
	}
	printf("\nmodified array: ");
	{
		for(int i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}
		int sumEven=0;
		int sumOdd=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			sumEven += arr[i];
			else
			sumOdd += arr[i];
		}
	}
	int difference = sumEven - sumOdd;
	printf("%d",sumEven);
	printf("%d",sumOdd);
	printf("%d",difference);
	
	
	
		return 0;
}
