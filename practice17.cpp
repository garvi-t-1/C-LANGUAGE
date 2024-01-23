#include<stdio.h>
int main()
{
	int i,n;
	printf("enter a number: ");
	scanf("%d",&n);
	int a=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			a=1;
			break;
		}
	
	}
	if(a==0)
	printf("the given number is prime\n");
	else
	printf("the given number is composite");
	return 0;
}

