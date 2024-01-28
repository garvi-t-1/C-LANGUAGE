#include<stdio.h>
int main()
{
    int a[3][3];
    printf("enter the elements of the matrix: ");
    for(int i=0;i<3;i++)
    {
        for( int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("the elements of the matrix are: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<3;i++)
    {
        int sum =0;
        for(int j=0;j<3;j++)
        {
            sum+=a[i][j];
            
        }
       
          printf("sum of rows of %d is %d",i+1,sum);
    }
   
     for(int i=0;i<3;i++)
    {
        int sum =0;
        for(int j=0;j<3;j++)
        {
            sum+=a[j][i];
            
        }
         printf("sum of column of %d is %d",j+1,sum);
    }
   
    return 0;
}
