/*
The program must accept an integer N as the input.
The program must print the integer N in the ordinal form as the output. 

Boundary Condition(s): 1 <= N <= 1000

Input Format:  The first line contains N.

Output Format: The first line contains N in ordinal form.

Example Input/Output 1:

Input:  96 

Output: 96th 

Explanation: 

The ordinal form of 96 is 96th. 
Hence the output is 96th. 

Example Input/Output 2: 

Input:  1 

Output: 1st

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int Unit_Digit = N % 10;
    if((N % 100) > 4 && (N % 100) <= 20)
    {
        printf("%dth", N);
    }
    else if(Unit_Digit == 1)
    {
        printf("%dst", N);
    }
    else if(Unit_Digit == 2)
    {
        printf("%dnd", N);
    }
    else if(Unit_Digit == 3)
    {
        printf("%drd", N);
    }
    else
    {
        printf("%dth", N);
    }
    return 0;
}

/*


*/
