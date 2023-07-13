/*
The program must accept an integer N as the input.
The program must print YES if N is a Twisted prime, else print NO.
A number is said to be Twisted prime if a number is prime number and its reverse also a prime number.

Boundary Conditions: 1 <= N <= 10^16

Input: 97

Output: YES

Input: 34

Output: NO

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, n1 = 0, x = 0;
  
    scanf("%d", &n);
  
    for(int i=2; i<n/2; i++)
    {
        if(n % i == 0)
        {
            x = 1;
            break;
        }
    }
  
    if(x == 0)
    {
        while(n != 0)
        {
            n1 = n1 * 10 + n % 10;
            n /= 10;
        }
    }
  
    for(int i=2; i<n1/2; i++)
    {
        if(n1 % i == 0)
        {
            x = 1;
            break;
        }
    }
  
    if(x == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
