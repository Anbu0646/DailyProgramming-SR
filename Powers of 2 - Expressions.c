/*
The program must accept an integer N representing a power of 2 as the input. 
The program must print the expression E which represents the product of 2s for the given integer N as the output. 

Boundary Condition(s): 2 <= N <= 10^4

Input Format: The first line contains N. 

Output Format: The first line contains the expression E. 

Example Input/Output 1: 

Input:  8 

Output: 2*2*2 

Explanation: 

Here 8 = 2^3.
Hence the output is 2*2*2.

Example Input/Output 2:

Input:  512 

Output: 2*2*2*2*2*2*2*2*2

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, Count = -1;
    scanf("%d", &N);
    while(N != 0)
    {
        Count += 1;
        N/=2;
    }
    //printf("%d\n", Count);
    for(int i=0; i < Count; i++)
    {
        if(i == Count - 1)
        {
            printf("2");
        }
        else
        {
            printf("2*");
        }
    }
}

/*

*/
