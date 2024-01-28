//insertion sort
//swapping from end till the element finds its position
//swap happens only when element is smaller than its left element
#include<stdio.h>
int main()
{
	int arr[5]={1,3,5,0,2};
	int n=5;
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]); 
	}
	for(int i=1;i<n;i++)
	{
		int j=i;
		while(j>=1 && arr[j]<arr[j-1])
		{
			int temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
		printf("\nsorted array");
		for(int i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}	
return 0;
 }
