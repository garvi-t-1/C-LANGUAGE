#include<stdio.h>

int main() {
    int a[3][3],i,j,k,c[3][3];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Print matrix elements
    printf("The elements of the matrix are:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    #include<stdio.h>

    int b[3][3];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Print matrix elements
    printf("The elements of the matrix are:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		int c[i][j]=0;
    		for(int k=0;k<3;k++)
    		{
    			c[i][j] +=a[i][j]*b[k][j];
			}
		}
	}
    printf("multiplication of the matrix is: ");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d",c[i][j]);
		}
	}
	
    
    

    return 0;
}

