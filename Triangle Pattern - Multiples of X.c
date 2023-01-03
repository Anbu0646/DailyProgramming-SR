/*
The program must accept two integers N and X as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N, X <= 100 

Input Format:  The first line contains the values of N and X separated by a space. 
Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 5 
Output: 1 
        2 3 
        4 * 6 
        7 8 9 * 
        
Example Input/Output 2: 

Input:  5 2 
Output: 1 
        * 3 
        * 5 *
        7 * 9 *
        11 * 13 * 15

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, x, c=1;
    scanf("%d %d", &n, &x);
    for(int i=1; i<=n; i++, printf("\n"))
    {
        for(int j=1; j<=i; j++)
        {
            if(c%x==0) printf("* ");
            else printf("%d ", c);
            c++;
        }
    }
}
