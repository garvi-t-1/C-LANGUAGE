#include<stdio.h>
#include<stdbool.h>
int main()
{
	int arr[5]={6,4,7,5,1};
	int n=5;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++){
		if(arr[j]<arr[j+1])
		{
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			flag=true;
		}
	}
	if(!flag)break;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
