#include<stdio.h>
int main()
{
	typedef struct{
		int day;
		int month;
		int year;
	}date;
	 date a,b;
	a.day=5;
	a.month=12;
	a.year=1999;
	
	b.day=19;
	b.month=1;
	b.year=2023;
	bool flag= true;
	if(a.day!=b.day)flag=false;
	if(a.month!=b.month) flag=false;
	if(a.year!=b.year)flag=false;
	if(flag==true)printf("the dates are same");
	else printf("the dates are different");
//	if(a.date==b.date)
//	printf("The dates are same");
	//else
	//printf("Dates are diffrent");
	
	return 0;
	
}
