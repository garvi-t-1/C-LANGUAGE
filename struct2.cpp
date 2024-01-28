#include<stdio.h>
#include<string.h>
int main()
{
	struct book{
		char name[50];
		int noofpages;
		float price;
	}a,b,c;
	a.noofpages=100;
	a.price=411.5;
//char ch[13]="secret seven";
	char ch[]="secret seven";
	strcpy(a.name,ch);
	printf("%d\n",a.noofpages);
	printf("%f\n",a.price);
	printf("%s",ch);
	
};
