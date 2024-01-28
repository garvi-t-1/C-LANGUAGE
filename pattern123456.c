#include <stdio.h>

int main()
{
    int row = 0, col = 0 , counter = 1;
    int arr[5][5];//Here 5 is the count of the rows to be printed
    //Initialize all array values to Zero
    for( row = 0; row < 5; row ++)
    {
        for(col = 0; col < 5; col ++)
        {
            arr[row][col] = 0;
        }
    }
    for( row = 0; row < 5; row++)
    {
        int arr2[5];
        for( col = row; col < 5; col++)
        {
            if(row % 2 == 0)
            {
                arr[row][col]  = counter++;
            }
            else
            {
                arr2[col] = counter++;
            }
        }
        if(row % 2 != 0)
        {
            int singleIndex = col - 1;
            col = row;
            while(singleIndex >=row)
            {
                arr[row][col] = arr2[singleIndex];
                singleIndex--;
                col ++;
            }
        }
    }

     for(int col = 0; col < 5; col ++)
    {
        for(int row = 0; row < 5; row ++)
        {
            if(arr[row][col] != 0)
            {
                printf("%d",arr[row][col] );
            }
        }
         printf("\n");
    }

    return 0;
}