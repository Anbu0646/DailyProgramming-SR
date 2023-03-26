/*
The program must accept an odd integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= N <= 99 

Input Format:  The first line contains the value of N.
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  5 

Output: -********* 
        ***-----*** 
        --**---** 
        ----*-* 
        
Example Input/Output 2: 

Input:  7 
Output: -************* 
        ****-------**** 
        --***-----*** 
        ----**---** 
        ------*-*

SOLTUION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, c = 0;
    scanf("%d", &n);
    int count = n;
    printf("-");
  
    for(int i = 0; i < 2*n-1; i++)
    {
        printf("*");
    }
  
    printf("\n");
  
    for(int i = n/2+1; i >= 1; i-- )
    {
        for(int j = 0; j < c; j++)
        {
            printf("-");
        }
        for(int j = 0; j < i; j++)
        {
            printf("*");
        }
        for(int j = 0; j < count; j++)
        {
            printf("-");
        }
        for(int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        c += 2;
        count -= 2;
    }
}
