/*
The program must accept an integer matrix of size RxC as the input. The program must sort the integers in every column of the matrix in ascending order. 
Then the program must print the modified matrix as the output. 

Boundary Condition(s): 2 <= R, C <= 100, -999 <= Matrix element value <= 999 

Input Format:  The first line contains the values of R and C separated by a space. The next R lines contain C integers each separated by space(s). 
Output Format: The first R lines contain C integers of the modified matrix each separated by a space. 

Example Input/Output 1: 

Input:  4 5 
        6 4 5 8 0 
        8 1 8 2 4 
        7 8 4 5 0
        1 2 2 3 2 
        
Output: 1 1 2 2 0 
        6 2 4 3 0 
        7 4 5 5 2 
        8 8 8 8 4 
        
Explanation: The integers in every column of the matrix are sorted in ascending order and printed as the output. 

Example Input/Output 2:

Input:  3 8 
        18 87 40 23 -45 68 98 -44 
        -2 -22 -7 23 -21 67 60 -16 
        -1 19 23 -45 37 27 31 57 
        
Output: -2 -22 -7 -45 -45 27 31 -44 
        -1 19 23 23 -21 67 60 -16
        18 87 40 23 37 68 98 57
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r, c, a[100][100];
    scanf("%d %d ", &r, &c);
    
    for(int i=0; i<r; i++) 
      for(int j=0; j<c; j++) 
        scanf("%d ", &a[i][j]);
    
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            for(int k=j + 1; k<r; k++)
            {
                if(a[j][i] > a[k][i])
                {
                    int t = a[j][i];
                    a[j][i] = a[k][i];
                    a[k][i] = t;;
                }
            }
        }
    }
  
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
