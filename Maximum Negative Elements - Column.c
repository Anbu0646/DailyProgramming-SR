/*
The program must accept an integer matrix of size RxC as the input. 
The program must print the column number which has the most number of negative numbers in the given matrix as the output. 
If more than one column have the most number of negative numbers then the program must print the first ocurring such column number as the output. 
If the matrix does not contain any negative element then the program must print -1 as the output. 

Boundary Condition(s): 1 <= R, C <= 100 

Input Format: 

The first line contains two integers R and C separated by a space. 
The next R lines contain C integers separated by space(s). 

Output Format: 

The first line contains either the column number which has the most number of negative numbers or -1. 

Example Input/Output 1: 

Input: 

3 4 
 10  20 11 -12 
-22 -23 89 -79 
-89  10 29 -12 

Output: 4 

Explanation: 

The 1st column contains 2 negative numbers. 
The 2nd column contains 1 negative number. 
The 3rd column does not contain any negative number. 
The 4th column contains 3 negative numbers. 
Here, the column 4 has the most number of negative numbers. 
Hence the output is 4. 

Example Input/Output 2: 

Input: 

3 3 
11 91 81 
90 10 20 
89 88 87 

Output:  -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int Mat[R][C];
    
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            scanf("%d ", &Mat[i][j]);
        }
    }
    
    int Negative_count_max = 0, Negative_Column = -1;
    
    for(int j=0; j<C; j++)
    {
        int Negative_count = 0;
        
        for(int i=0; i<R; i++)
        {
            if(Mat[i][j] < 0)
                Negative_count += 1;
        }
        
        if(Negative_count > Negative_count_max)
        {
            Negative_count_max = Negative_count;
            Negative_Column = j + 1;
        }
    }
    
    printf("%d", Negative_Column);
}
