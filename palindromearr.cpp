#include<stdio.h>
int ispalindrome(int arr[],int n)
{
	for(int i=0;i<n/2;i++)
	{
		if(arr[i]!=arr[n-1-i])
		{
			return 0;
		}
	}
	return 1;
}
	
int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("enter the elements:");
		scanf("%d",&arr[i]);
		
	}
	printf("the elements of array are:");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
		
	}
	if(ispalindrome(arr,n))
	{
		printf("\n palindrome number\n");
	}
	else
	{
		printf("\n not a palindrome\n");
	}
	return 0;
}


