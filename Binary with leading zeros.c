/*
The program must accept two integers N and X as the input. The program must print the binary representation of N in X bits format as shown in the Example Input/Output section. If it is not possible to represent N in binary with X bits then the program must print -1 as the output. 

Boundary Condition(s): 

1 <= N <= 10^9
1 <= X <= 31 

Input Format: 

The first line contains the values of N and X separated by a space. 

Output Format: 

The first line contains the binary representation of N in X bits. 

Example Input/Output 1: 

Input: 12 8 

Output: 00001100 

Explanation: 

The binary representation of 12 is 1100. 
Here the binary representation of 12 is represented in 8 bits. 
So 1100 is padded with four leading zeros. 
Hence the output is 00001100 

Example Input/Output 2: 

Input: 36 5 

Output: -1

Explanation: 

The binary representation of 36 is 100100. Here the binary representation of 36 is not possible to represent in 5 bits. 
So -1 is printed.

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  
 int N, X;
 scanf("%d %d", &N, &X);
 int max = (1 << X) - 1;
  
 if(N > max)
    printf("-1");
 else
 {
     for(int i=X - 1; i>=0; i--)
     {
         int b = (N >> i) & 1;
         printf("%d", b);
     }
 }
  
}
