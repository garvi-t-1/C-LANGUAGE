#include<stdio.h>
int main()
{
	int n;
	printf("size of the array: ");
	scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
	printf("enter element: ");
	scanf("%d",&arr[i]);
}
printf("elements of array:\n");
for(int i=0;i<n;i++)
{
	printf("%d \n",arr[i]);
}
int brr[n];
for(int i=0;i<n;i++)
{
	brr[i]= arr[n-i-1];	
}
for(int i=0;i<n;i++)
{
	printf("%d",brr[i]);	
}

return 0;
}
