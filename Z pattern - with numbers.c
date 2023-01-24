/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 
 
 Boundary Condition(s): 1 <= N <= 100 
 
 Input Format:  The first line contains the value of N. 
 Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section. 
 
 Example Input/Output 1: 
 
 Input:  5 
 Output: 1 2 3 4 5 
         * * * 4
         * * 3 
         * 2
         1 2 3 4 5 
 
 Example Input/Output 2: 
 
 Input:  8 
 Output: 1 2 3 4 5 6 7 8 
         * * * * * * 7 
         * * * * * 6 
         * * * * 5
         * * * 4
         * * 3
         * 2 
         1 2 3 4 5 6 7 8

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, d;
    scanf("%d", &n);
    d=n - 1;
    for(int i=1; i<=n; i++)
        printf("%d ", i);
    printf("\n");
    for(int i=1; i<n - 1; i++, printf("\n"))
    {
        for(int j=0; j<(n - i - 1); j++)
        {
            printf("* ");
        }
    printf("%d", d--);
    }
    for(int i=1; i<=n; i++)
        printf("%d ", i);
}
