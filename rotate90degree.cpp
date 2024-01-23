#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);

    printf("Enter all the elements of the array:\n");
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Transpose (swap rows and columns)
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Rotate each row by reversing the elements
    for (int i = 0; i < n; i++) {
        int j = 0;
        int k = n - 1;

        while (j < k) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;

            j++;
            k--;
        }
    }

    // Print the rotated matrix
    printf("\nRotated Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

