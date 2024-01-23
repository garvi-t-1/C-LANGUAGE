#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the number: ");
	scanf("%d",&n);
	int nsp=n/2;
	int nst=1;
	int ml=n/2+1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=nsp;j++)
		{
			printf(" ");
		}
		for(k=1;k<=nst;k++)
		{
			printf("*");
		}
		if(i<ml)
		{
			nsp--;
			nst+=2;
		}
		else{
			nst-=2;
			nsp++;
		}
		printf("\n");
	}
	return 0;
}
