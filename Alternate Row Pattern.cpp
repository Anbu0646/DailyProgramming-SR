/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 26 

Input Format:  The first line contains N.

Output Format: The first N lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 

Output: 

ab
a 
abcd 
abc 

Example Input/Output 2: 

Input:  7 

Output: 

ab
a 
abcd 
abc
abcdef 
abcde
abcdefgh

SOLUTION:
*/



/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, Count_1 = 1, Count_2 = 2;
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
    {
        if(i % 2 == 0)
        {
            for(int j=97; j<97 + Count_1; j++)
            {
                printf("%c", j);
            }
                Count_1 += 2;
                printf("\n");
        }
        else
        {
            for(int j=97; j<97 + Count_2; j++)
            {
                printf("%c", j);
            }
                Count_2 += 2;
                printf("\n");
        }
    }
}
*/
