/*
The program must accept an integer matrix of size NxN containing only 0's and 1's as the input. 
The program must print the count of 0's which are surrounded by 1's on all four sides and the count of 1's which are surrounded by 0's on all four sides as the output. 

Boundary Condition(s): 1 <= N <= 100 

Input Format: The first line contains N. The next N lines contain N integers each separated by a space. 

Output Format: The first line contains two integers separated by a space as the per the given condition. 

Example Input/Output 1: 

Input: 

5 
0 1 0 1 0 
1 0 1 0 1
0 1 0 1 0 
0 0 1 0 0 
0 0 0 0 0 

Output: 3 4 

Explanation: 

The 0's which are surrounded by four 1's are at the following postions (2,2), (2,4) and (3,3). 
The 1's which are surrounded by four 0's are at the following positions (2,3), (3,2), (3,4) and (4,3). 

Example Input/Output 2: 

Input: 

6 
0 0 1 1 1 0 
0 1 0 1 0 1 
1 0 1 1 0 1 
0 1 1 0 0 0
1 1 1 0 1 0 
0 1 0 0 0 0 

Output: 2 2

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int Mat[N][N], Count_zeros = 0, Count_ones = 0;
    
    for(int i=0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            scanf("%d", &Mat[i][j]);
        }
    }
    
    for(int i=1; i<N - 1; i++)
    {
        for(int j=1; j<N - 1; j++)
        {
            if(Mat[i][j] == 0)
            {
                if(Mat[i - 1][j] == 1 && Mat[i + 1][j] == 1 && Mat[i][j - 1] == 1 && Mat[i][j + 1] == 1)
                {
                    Count_zeros += 1;
                }
            }
            else if(Mat[i][j] == 1)
            {
                if(Mat[i - 1][j] == 0 && Mat[i + 1][j] == 0 && Mat[i][j - 1] == 0 && Mat[i][j + 1] == 0)
                {
                    Count_ones += 1;
                }
            }
        }
    }
    
    printf("%d %d", Count_zeros, Count_ones);
}
