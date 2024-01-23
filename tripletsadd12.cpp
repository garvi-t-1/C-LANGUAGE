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
int totaltriplets=0;
int x= 12;
for(int i=0;i<=n;i++)
{
	for(int j=i+1;j<=n;j++)
	
	{
	for(int k=j+1;k<=n;k++)
	{
		if(arr[i]+arr[j]+arr[k]==x)
		{
			totaltriplets++;;
			printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
		}
	}
	}
}
	printf("%d",totaltriplets);
	return 0;


}


