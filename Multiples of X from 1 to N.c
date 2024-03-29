/*
The program must accept two integers N and X as the input. The program must print the multiples of X from 1 to N in the order given below. 
The order must be the 1st multiple of X, the last multiple of X, the 2nd multiple of X, the last but second multiple of X and so on.

Boundary Condition(s): 1 <= N, X <= 1000 

Input Format:  The first line contains the values of N and X separated by a space. 
Output Format: The first line contains the multiples of X from 1 to N in the above-mentioned order. 

Example Input/Output 1: 

Input:  50 10
Output: 10 50 20 40 30 

Explanation:  The multiples of 10 from 1 to 50 are 10, 20, 30, 40 and 50. 
              The 1st multiple of 10 is 10. 
              The 5th multiple of 10 is 50. 
              The 2nd multiple of 10 is 20. 
              The 4th multiple of 10 is 40.
              The 3rd multiple of 10 is 30.
              Hence the output is 10 50 20 40 30 

Example Input/Output 2: 

Input:  30 3 
Output: 3 30 6 27 9 24 12 21 15 18

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int ar[n], count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i % x == 0)
        {
            ar[count++] = i;
        }
    }
    for(int i = 0; i < count/2; i++)
    {
        printf("%d ", ar[i]);
        printf("%d ", ar[count - 1 - i]);
    }
    if((count) % 2 == 1)
    {
        printf("%d", ar[count/2]);
    }

}
