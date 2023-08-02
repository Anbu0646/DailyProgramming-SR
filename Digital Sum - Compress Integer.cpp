/*
The program must accept an integer N as the input. 
The program must compress the integer N by concatenating the digital sum of every two consecutive digits. 
Then the program must print the modified value of N as the output. 

Boundary Condition(s): 10 <= N <= 10^9 

Input Format: The first line contains the value of N. 

Output Format: The first line contains the modified value of N. 

Example Input/Output 1: 

Input:  208914 

Output: 28815 

Explanation: 

The digital sum of 2 and 0 is 2 
The digital sum of 0 and 8 is 8 
The digital sum of 8 and 9 is 8 
The digital sum of 9 and 1 is 1 
The digital sum of 1 and 4 is 5 
Hence the output is 28815 

Example Input/Output 2: 

Input:  1234 

Output: 357

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int sum(int n)
{
    int ans = 0;
    while(n)
    {
        ans += n%10;
        n /= 10;
    }
    return ans;
}

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int n = s.length();

    int val=0;

    for(int i=0; i<s.length() - 1; i++)
    {
        val *= 10;
        int x = (s[i] - '0') + (s[i + 1] - '0');
    
        x = sum(x);
        val += x;
    }
  
    cout<<val;
}

/*
C:

#include<stdio.h>
#include<stdlib.h>
int main()
{
   char s[1000];
   scanf("%s", s);
   int l = strlen(s) - 1;
   for(int i=0; i<l; i++)
   {
       int l = (s[i] - '0') + (s[i + 1] - '0');
       int s = 0;
       while(l > 0)
       {
           s = s + (l % 10);
           l = l/10;
       }
       printf("%d",s);
   }
}


PY3:

s = input().strip()
ans = ""
for i in range(len(s) - 1):
    k = int(s[i]) + int(s[i + 1])
    if(k > 9):
        k = k % 10 + (k // 10 % 10)
    ans += str(k)
print(ans)
*/
