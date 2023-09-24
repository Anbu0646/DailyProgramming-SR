/*
The program must accept a positive integer N as the input.
The program must print the next greater integer which is divisible by 3 and the sum of digits in it is also divisible by 3 as the output. 

Boundary Condition(s): 1 <= N <= 1000 

Input Format:  The first line contains N. 

Output Format: The first line contains the next greater integer based on the given conditions. 

Example Input/Output 1: 

Input:  22 

Output: 24 

Explanation: 

The next greater integer which is divisible by 3 and the sum of digits in it 6 (2+4) is also divisible by 3 is 24.
Hence 24 is the output.

Example Input/Output 2: 

Input:  84 

Output: 87

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int sumofdigits(int K)
{
    int Sum = 0;
    while(K != 0)
    {
        int Unit_Digit = K % 10;
        Sum += Unit_Digit;
        K /= 10;
    }
    return Sum;
}

int main(int argc, char** argv)
{
    int N;
    cin>>N;
    if(N == 1000)
        cout<<1002;
    for(int i=N + 1; i<=1000; i++)
    {
        if(i % 3 == 0 && sumofdigits(i) % 3 == 0)
        {
            cout<<i;    
            break;
        }
    }
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);
  int s = 0, a = 0;
  for(int i = n + 1; i >= 1; i++)
  {
      s = 0;
      if(i % 3 == 0)
      {
          a = i;
          while(i > 0)
          {
              int r = i % 10;
              s = s + r;
              i = i / 10;
          }
          if(s % 3 == 0)
          {
              printf("%d", a);
              return 0;
          }
      }
  }
}

PY3:
N = int(input())

while True:
    N += 1
    if N % 3 == 0 and sum(int(digit) for digit in str(N)) % 3 == 0:
        print(N)
        break
*/
