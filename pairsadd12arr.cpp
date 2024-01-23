#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	printf("enter the elements:");
	scanf("%d",&arr[i]);
	}
	printf(" the elements:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
int totalpairs=0;
int x= 12;
for(int i=0;i<=n;i++)
{
	for(int j=i+1;j<=n;j++)
	{
		if(arr[i]+arr[j]==x)
		{
			totalpairs++;
			printf("(%d,%d)\n",arr[i],arr[j]);
	}
}

}
printf("%d",totalpairs);

	return 0;
}

