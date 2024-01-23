#include<stdio.h>
void england()
{
	printf("garvit\n");
	return ;
}
void australia()
{
	printf("tina\n");
	england();
	return ;
}
void india()
{
	printf("us\n");
	australia();
	return;
}
int main()
{
	india();
	return 0;
}
