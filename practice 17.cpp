#include<stdio.h>
int main()
{
	int i,n;
	printf("enter a number: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("number is composite");
			break;
		}
		else
		{
			printf("number is prime");
		}

		
	}
	return 0;
}

