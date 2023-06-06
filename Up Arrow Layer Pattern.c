/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= N <= 100 

Input Format: 

The first line contains the value of N.
 
Output Format: 

The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 

3 

Output: 

- - 3 
- 3 2 3 
3 2 1 2 3 

Example Input/Output 2: 

Input: 

4 

Output: 

- - - 4 
- - 4 3 4 
- 4 3 2 3 4 
4 3 2 1 2 3 4

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n - i; j++)
        {
            printf("- ");
        }
     
        for(int j=n; j>=n - i; j--)
        {
            printf("%d ", j);
        }
     
        for(int j=n - i + 1; j<=n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
