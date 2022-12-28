/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= N <= 100 

Input Format:  The first line contains the value of N. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  2 
Output: *()* 
        (()) 
        *()* 
        
Example Input/Output 2: 

Input:  5 
Output: ****()****  
        ***(())*** 
        **((()))** 
        *(((())))* 
        ((((())))) 
        *(((())))* 
        **((()))** 
        ***(())*** 
        ****()****

SOLUTION:
*/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    // printing first half of the pattern
    // till 0 to n-1
    for(int i=0; ival<n;  printf("\n"), i++)
    {
        for(int j=0; jval<n-i-1; j++) printf("*"); // to print *
        for(int j=0; jval<=i; j++) printf("("); // to print (
        for(int j=0; jval<=i; j++) printf(")"); // to print )
        for(int j=0; jval<n-i-1; j++) printf("*"); // to print *
    }
    // printing second half of the pattern
    // from n to 2*n-1
    for(int i=n - 2; i>=0; printf("\n"), i--)
    {
        for(int j=n-i-2; j>=0; j--) printf("*"); // to print *
        for(int j=i; j>=0; j--) printf("("); // to print (
        for(int j=i; j>=0; j--) printf(")"); // to print )
        for(int j=n-i-2; j>=0; j--) printf("*"); // to print *
    } 
    return 0;
}
