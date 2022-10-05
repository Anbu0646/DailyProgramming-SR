/*

An integer N is passed as the input to the program. The program must print the next prime number of N as the output. That is the smallest prime number which is greater than N. 

Boundary Condition(s): 1 <= N <= 10^17 

Input Format:  The first line contains the value of N.
Output Format: The first line contains the next prime number of N. 

Example Input/Output 1: 

Input:  8 
Output: 11 

Example Input/Output 2: 

Input:  29 
Output: 31

Solution:

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int p(long int n)
{
    for(long int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long int n;
    scanf("%ld", &n);
    for(long int i=n + 1;;)
    {
        if(p(i)==1)
        {
            printf("%ld", i);
            break;
        }
    i++;
    }
}
