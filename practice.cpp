#include<stdio.h>
int main()
{
	int e,h,m,s,ss;
	scanf("\n%d",&e);
	scanf("\n%d",&h);
	scanf("\n%d",&m);
	scanf("\n%d",&s);
	scanf("\n%d",&ss);
	int percentage=(e+h+m+s+ss)/5;
	printf("%d",percentage);
	return 0;
	
}
