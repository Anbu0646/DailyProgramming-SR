/*

An N*N matrix containing 1s and 0s is given as the input to the program. The program must print the number of 2x2 unit matrices in the given matrix. A matrix is said to be unit matrix if all the integers are 1. Also, consider the overlapping matrices. 

Boundary Condition(s): 1 <= N <= 100 

Input Format:  The first line contains the value of N. 
               The next N lines contain N elements each separated by space(s). 
Output Format: The first line contains an integer value. 

Example Input/Output 1: 

Input:  3 
        1 0 1 
        1 1 1 
        1 1 0 
Output: 1 

Explanation : The number of 2*2 Unit matrix in the 3*3 matrix is 1. 
              1 0 1 
              1 1 1 
              1 1 0 
              Hence the output is 1. 

Example Input/Output 2: 

Input:  4 
        1 0 1 1
        1 1 1 1 
        1 1 0 0 
        0 0 0 0 
Output: 2 

Explanation : The number of 2*2 Unit matrix in the 4*4 matrix is 2. 
              Hence the output is 2.
              
SOLUTION:

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int mat[n][n], s=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d ", &mat[i][j]);
    for(int i=0; i<n - 1; i++)
        for(int j=0; j<n - 1; j++)
            if(mat[i][j]==1 && mat[i + 1][j]==1 && mat[i][j + 1]==1 && mat[i + 1][j+ 1]==1)
                s+=1;
    printf("%d", s);
}
