/*
The program accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 100 

Input Format:  The first line contains the value of N. 
Output Format: The first 2*N lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 
Output: 1 * * * 4 3 2 1 
	      2 1 * * 3 2 1 * 
	      3 2 1 * 2 1 * * 
	      4 3 2 1 1 * * * 
	      * * * 1 4 3 2 1 
	      * * 2 1 * 3 2 1 
	      * 3 2 1 * * 2 1
	      4 3 2 1 * * * 1 

Example Input/Output 2: 

Input:  7 
Output: 1 * * * * * * 7 6 5 4 3 2 1 
	      2 1 * * * * * 6 5 4 3 2 1 *
	      3 2 1 * * * * 5 4 3 2 1 * * 
	      4 3 2 1 * * * 4 3 2 1 * * * 
	      5 4 3 2 1 * * 3 2 1 * * * * 
	      6 5 4 3 2 1 * 2 1 * * * * * 
	      7 6 5 4 3 2 1 1 * * * * * * 
	      * * * * * * 1 7 6 5 4 3 2 1
	      * * * * * 2 1 * 6 5 4 3 2 1 
	      * * * * 3 2 1 * * 5 4 3 2 1 
	      * * * 4 3 2 1 * * * 4 3 2 1 
	      * * 5 4 3 2 1 * * * * 3 2 1 
	      * 6 5 4 3 2 1 * * * * * 2 1
	      7 6 5 4 3 2 1 * * * * * * 1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
  
    for(int i=0; i<n; i++, printf("\n"))
    {
        for(int j=i+1; j>=1 ;j--)
            printf("%d ",j);
      
        for(int j=n-1-i; j>0; j--)
            printf("* ");
      
        for(int j=n-i; j>0; j--)
            printf("%d ", j);
      
        for(int j=0; j<i; j++)
            printf("* ");
    }
  
    for(int i=0; i<n; i++, printf("\n"))
    {
        for(int j=n-1-i; j>0; j--)
            printf("* ");

        for(int j=i+1; j>0; j--)
            printf("%d ",j);

        for(int j=0; j<i; j++)
            printf("* ");

        for(int j=n-i; j>0; j--)
            printf("%d ", j);
    }
}
