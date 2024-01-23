#include<stdio.h>
int main()
{
	int n,sum;
	printf("enter the vallue of n:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		if(n%2==0){
			sum=-n/2;
			
		}
		else
		sum=(-n/2)+n;
	}
	printf("sum=%d",sum);
	return 0;
}
