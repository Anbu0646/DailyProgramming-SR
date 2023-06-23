/*
The program must accept an integer N as the input. 
The program must print the odd digits from the last digit and remove the last digit of N then again print the odd digits from the last digit and remove the last digit and so on. 
If there is no odd digit in the original N then print -1 as the output. 

Boundary Condition(s): 1 <= N <= 10^7 

Input Format:  The first line contains N. 

Output Format: The first line contains either odd digits as per the condition separated by a space or -1. 

Example Input/Output 1: 

Input:   12345
 
Output:  5 3 1 3 1 3 1 1 1 

Explanation: 

In 12345, the odd digits 5,3 and 1 are printed. 
After removing the last digit the integer becomes 1234. In 1234, the odd digits 3 and 1 are printed. After removing the last digit the integer is 123. 
In 123, the odd digits 3 and 1 are printed. After removing the last digit the integer is 12. 
In 12, the odd digit 1 is printed. After removing the last digit the integer becomes 1. 
In 1, the odd digit 1 is printed. 

Example Input/Output 2: 

Input:   2468 

Output:  -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  unsigned long long int a, n, m, f = 0;
  scanf("%llu", &a); 
  while(a>0)
  {
     n = a;
     while(n>0)
     {
        m = n % 10;
        if(m%2 != 0)
        {
            printf("%d ", m);
            f = 1;
        }
    n /= 10;
    }
a /= 10;
}
 
 if(f == 0)
    printf("-1");
}


/*
N = input().strip()
Flag = 0

for i in range(len(N) - 1, -1, -1):
    for j in range(i, -1, -1):
        if(int(N[j])%2!=0):
            print(N[j], end=" ")
            Flag = 1
if Flag == 0: print(-1)
*/
