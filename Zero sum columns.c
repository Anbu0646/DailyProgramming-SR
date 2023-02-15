/*
The program must accept an NxN matrix as the input. The program must print yes if the sum of each column in the matrix is equal to 0. 
Else the program must print no as the output. 

Boundary Condition(s): 1 <= N <= 100 

Input Format:  The first line contains N. 
               The next N lines contain N integers each separated by space. 
Output Format: The first line contains yes or no.

Example Input/Output 1:

Input:   3 
         10 -1 7 
        -1 -8 1
        -9 9 -8 
Output: yes 

Explanation: The sum of elements in the first column is 10 + (-1) + (-9) = 0. 
             The sum of elements in the second column is (-1) + (-8) + 9 = 0. 
             The sum of elements in the third column is 7 + 1 + (-8) = 0.

Example Input/Output 2: 

Input:   5
         1 0 -3 -7 3 
         5 2 -7 -6 -4 
         8 -10 -6 -3 9
        -10 -5 -9 3 -10 
        -4 12 25 13 2
Output: no

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, c=0;
    scanf("%d", &N);
    int arr[N][N];
  
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0; i<N; i++)
    {
        int sum=0;
        for (int j=0; j<N; j++)
        {
            sum+=arr[j][i];
        }
        if (sum==0)
        {
            c+=1;
        }
    }
    if (c==N)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
