#include <stdio.h>

int main(){
    //2D array = an array , where ecah element is an entire array useful if you need a matrix, grid, or table of data
/*
    int numbers[2][3]={
        {1,2,3},
        {4,5,6}
        };
// max amt of array--[2](no of rows)
// max size of elements within array-- [3](no of column)

*/
int numbers[2][3]={{1,2,3},{4,5,6}};// square bracket shows indexing

for (int i = 0; i < 2; i ++)
{
    for (int j = 0; j<3; j++)
    {
        printf("%d",numbers[i][j]);
    }
    printf("\n");
}

    return 0;
}