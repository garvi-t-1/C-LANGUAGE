#include<stdio.h>
#include<math.h>
int main()
{
	int n,o,sum=0,l=0,digits=0;
	printf("enter: ");
	scanf("%d",&n);
	o=n;
	while(o!=0){
		o /=10;
		digits++;
	}
	o=n;
	while(o>0)
	{
		l=o%10;
		sum += pow(l,digits);
		o /= 10;
	}
	if(n==sum)
	{
		printf("%d is an armstrong number \n",n);
		
	}
	else
	{
		printf("%d is not an armstrong num\n",n);
	}
	return 0;
}
