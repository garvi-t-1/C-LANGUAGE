#include<stdio.h>
int main()
{
	int n,r=0,orignal;
	printf("enter the  number: ");
	scanf("%d",&n);
	orignal=n;
	while(n>0)
	{
		r=r*10;
		r=r+(n%10);
		n=n/10;
		
	}
	printf("the reversed number is %d",r);
	int sum=0;
	sum=r+orignal;
	printf("sum=%d",sum);
	return 0;
	
}
