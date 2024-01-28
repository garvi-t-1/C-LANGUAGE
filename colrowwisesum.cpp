#include<stdio.h>

int main() {
    int a[3][3];

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

    // Sum of rows
    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
        printf("Sum of elements in row %d is %d\n", i + 1, sum);
    }

    // Sum of columns
    for(int j = 0; j < 3; j++) {
        int sum = 0;
        for(int i = 0; i < 3; i++) {
            sum += a[i][j];
        }
        printf("Sum of elements in column %d is %d\n", j + 1, sum);
    }

    return 0;
}

