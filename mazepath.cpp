#include<stdio.h>
int maze(int cr,int cc,int er,int ec)//cr current row cc currect column  er end row endcolumn
{
	int rightways=0;
	int downways=0;
	if(cr==er && cr==ec) 
	return 1;
	
	if(cr==er){
		//only rightways call
		rightways +=maze(cr,cc+1,er,ec);
		
	}
	if(cc==ec){
		//only downward call
		downways += maze(cr+1,cc,er,ec);
	}
	if(cr<er && cc<ec)
	{
		rightways +=maze(cr,cc+1,er,ec);
		downways += maze(cr+1,cc,er,ec);
	}

	int totalways= rightways +downways;
	return totalways;
}
int main()
{
	int n,m;
	printf("enter the rows of maze: ");
	scanf("%d",&n);
	printf("enter no. of column of maze: ");
	scanf("%d",&m);
	int noofways = maze(1,1,n,m);
	printf("%d",noofways);
	return 0;
	
}
