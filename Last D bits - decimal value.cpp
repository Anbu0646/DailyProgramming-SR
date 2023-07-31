/*
The program must accept two positive integers N and D as the input. 
Then the program must print the decimal value represented by the last D bits in the binary representation of N. 

Note: Always D will be less than or equal to the total number of bits in the binary representation of N. 

Boundary Condition(s): 

1 <= N <= 10^18 
1 <= D <= 57 

Input Format:  The first line contains the values of N and D separated by a space. 

Output Format: The first line contains the decimal equivalent of last D bits in the binary representation of N. 

Example Input/Output 1: 

Input:  10 3 

Output: 2 

Explanation: 

The binary representation of 10 is 1010. 
Last 3 bits are 010 whose decimal value is 2. 

Example Input/Output 2:

Input:  63 4 

Output: 15

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    unsigned long long n, p = 1, num = 0;
    int d;
    cin>>n>>d;
    while(d--)
    {
        num += (n % 2) * p;
        n >>= 1, p <<= 1;
    }
    cout<<num;
}


/*

C:

#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned long long n;
    int d;
    scanf("%llu %d", &n, &d);
    
    unsigned long long s = 0;
    
    for(int i=0; i<d; i++)
    {
        s += ((n & 1) * pow(2, i));
        n /= 2;
    }
    printf("%llu", s);

}




#include<stdio.h>
#include<stdlib.h>
int main()
{
  long long int a, b[100000], i, j, t, c, num = 0, z;
  scanf("%lld %lld", &a, &c);
  i = 0;
  while(a>0)
  {
      b[i] = a%2;
      i++;
      a = a / 2;
  }
  z = 0;
  for(j=0; j<c; j++)
  {
      num = num + (b[j] * pow(2, z));
      z++;
  }
  printf("%lld", num);
}
PY3:

N, D = map(int, input().split())
Bin = bin(N)[2:]
Dec = Bin[-D:]
print(int(Dec, 2))
*/
