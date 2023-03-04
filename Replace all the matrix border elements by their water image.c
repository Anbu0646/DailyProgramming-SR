/*
You must implement the function replaceBorderElementsByWaterImage which accepts two integers R and C and an integer matrix of size RxC. 
This function must replace all the border elements of the given matrix by the border elements of its water image.

Example Input/Output 1: 

Input:  4 5 
        0 3 6 9 7
        1 6 8 1 4
        8 2 0 2 9
        9 4 7 6 4 

Output: 9 4 7 6 4
        8 6 8 1 9
        1 2 0 2 4
        0 3 6 9 7 

Explanation:  The input matrix is given below. 
              0 3 6 9 7
              1 6 8 1 4
              8 2 0 2 9
              9 4 7 6 4

              The water image of the input matrix is given below. 

              9 4 7 6 4 
              8 2 0 2 9
              1 6 8 1 4
              0 3 6 9 7 

              So replace all the border elements of input matrix by the border elements of its water image. 

              Hence the output is

              9 4 7 6 4
              8 6 8 1 9 
              1 2 0 2 4
              0 3 6 9 7 

Example Input/Output 2: 

Input:  3 3
        81 49 33
        94 41 46 
        81 51 19 

Output: 81 51 19 
        94 41 46
        81 49 33
        
SOLUTION:        
*/

#include <stdio.h>
#include <stdlib.h>

void replaceBorderElementsByWaterImage(int R, int C, int matrix[][C])
{
    for(int i=0; i<R/2; i++)
    {
        for(int j=0; j<C; j++)
        {
            if(i==0 || j==0 || j==C-1)
            {
                int tem=matrix[i][j];
                matrix[i][j]=matrix[R-i-1][j];
                matrix[R-i-1][j]=tem;
            }
        }
    }
}

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }

    replaceBorderElementsByWaterImage(R, C, matrix);

    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
