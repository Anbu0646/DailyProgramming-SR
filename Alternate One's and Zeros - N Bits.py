'''
The program must accept an integer N as the input. 
The program must form a binary representation B of length N (i.e., B has N bits) by concatenating 1s and 0s alternatively.
Then the program must print the decimal equivalent of B as the output.

Boundary Condition(s): 1 <= N <= 63

Input Format: The first line contains N. 

Output Format: The first line contains the decimal equivalent of B. 

Example Input/Output 1: 

Input:  5

Output: 21 

Explanation: 

Here N=5, so the binary representation B is 10101 (alternate 1s and 0s of length 5). 
The decimal equivalent of 10101 is 21.
Hence the output is 21. 

Example Input/Output 2: 

Input:  8

Output: 170

Explanation:

Here N=8, so the binary representation B is 10101010 (alternate 1s and 0s of length 8). 
The decimal equivalent of 10101010 is 170. 
Hence the output is 170.

SOLUTION:
'''

N = int(input())
BR = "10"

if N % 2 == 1:
    K = (N - 1) // 2
else:
    K = N // 2

if N % 2 == 1:
    BV = BR * K + '1'
else:
    BV = BR * K
    
print(int(BV, 2))





n = int(input())
s = ''
for i in range(0, n):
    if i % 2 == 0:
        s += "1"
    else:
        s += "0"
print(int(s, 2))


n = int(input())
a = '10'
s = a*(n)
d = s[:n]
print(int(d, 2))
'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int n, c = 1, s = 0, t;
    scanf("%lld", &n);
    if(n % 2 != 0) 
       t = 1;
    else t = 2;
    while(c <= n)
    {
        s += t;
        t *= 4;
        c += 2;
    }
    printf("%lld", s);
}

CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int> vec;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            vec.push_back(1);
        }
        else
        {
            vec.push_back(0);
        }
    }
    long sum = 0, c = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        sum += (vec[i] * (long)pow(2, c++));
    }
    cout<<sum;
}
'''
