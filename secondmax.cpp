#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		printf("enter the elements of array %d: ",i+1);
		scanf("%d",&arr[i]);
		
	}
	printf("elements of array:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
		
	}
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	int smax=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			smax=max;
			max=arr[i];
		}
		else if(arr[i]>smax && arr[i]<max)
		{
			smax= arr[i];
		}
	}
	printf(" max value: %d",max);
		printf(" second max value: %d",smax);
	
	return 0;
}
