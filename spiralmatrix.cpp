#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of rows: ");
	scanf("%d",&n);
	int m;
	printf("ente the number of columns: ");
	scanf("%d",&m);
	printf("enter the elements: ");
	int a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
			printf("elements of matrix are:\n");
			for(int i=0;i<n;i++)
			{ 
				for(int j=0;j<n;j++)
				{
					printf("%d\t",a[i][j]);
				}
					printf("\n");
			}
			//spiral print
			int minr=0;
			int maxr=m-1;
			int minc =0;
			int maxc=n-1;
			int tne=m*n;
			int count =0;
			while(count<tne){
				//print the minimum row
				for(int j=minc;j<maxc;j++)
				{
					printf("%d",a[minr][j]);
					count++;
				}
				minr++;
				if(count>=tne)break;
				for(int i=minr;i<=maxr;i++)
				{
					printf("%d",a[i][maxc]);
					count++;
				}
				maxc--;
				if(count>=tne)break;
				for(int j=maxc;j>=minc;j--)
				{
					printf("%d",a[maxr][j]);
					count++;
				}
				maxr--;
				if(count>=tne)break;
				for(int i=maxr;i>=minr;i--)
				{
					printf("%d",a[i][minc]);
					count++; 
				}
				minc++;
				if(count>=tne)break;
			}
			
			
			return 0;
		}
