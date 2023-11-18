'''
The program must accept a time T (in 24hr format HH:MM) and an integer X as the input. 
The program must update the time T by adding X minutes to it. 
Then the program must print the updated time T in the same 24hr format as the output.

Boundary Condition(s):

0 <= HH <= 23 
0 <= MM <= 60 
1 <= X <= 10^8

Input Format:  

The first line contains T. 
The second line contains X. 

Output Format: The first line contains the updated time T. 

Example Input/Output 1: 

Input:  

08:15
20 

Output: 08:35

Explanation:

Here, HH=08, MM=15 and X=20. 
After adding 20 minutes, the time T becomes 08:35 So 08:35 printed as the output. 

Example Input/Output 2:

Input: 

23:50
15

Output: 00:05

SOLUTION:
'''

h, m = map(int, input().split(':'))
x = int(input())
m += x
while m > 59:
    m -= 60
    h += 1
while h > 23:
    h -= 24
print(f'{h:02d}:{m:02d}')

'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int h, m1;
   long int m2;
   scanf("%02d:%02d\n%ld", &h, &m1, &m2);
   if(m1 + m2 >= 60)
   {
      h += (m1 + m2) / 60;
      m1 = (m1 + m2) % 60; 
      if(h >= 24) 
         h %= 24;
   }
   else
   {
      m1 = m1 + m2;
   }
    printf("%02d:%02d", h, m1);
}

CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int a, b, c;
    scanf("%d:%d", &a, &b);
    cin>>c;
    int d = a * 60 + b + c;
    int e = (d / 60) % 24, f = d % 60;
    if (e >= 24) 
        e -= 24;
    else 
        int x = 1;
    if(e < 10) 
       cout<<"0"<<e;
    else 
       cout<<e;
       cout<<":";
    if(f < 10) 
       cout<<"0"<<f;
    else 
       cout<<f;
}
'''
