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
return 0;
}
