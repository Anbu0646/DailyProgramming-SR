'''
The program must accept an integer N as the input. 
The program must print YES if all the digits in N are in ascending order. 
Else the program must print NO as the output. 

Boundary Condition(s): 10 <= N <= 10^7 

Input Format:  The first line contains N.

Output Format: The first line contains either YES or NO. 

Example Input/Output 1:

Input:  2579 

Output: YES 

Explanation: 

In 2579 all the digits are in ascending order. 
So YES is printed as the output. 

Example Input/Output 2: 

Input : 52738

Output: NO

SOLUTION:
'''

n = input()
k = 0
for i in range(1, len(n)):
    if n[i - 1] > n[i]:
        k = 1
print("YES" if k == 0 else "NO")

'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
   long long int n; 
   scanf("%lld", &n);  
   int ctr = 0; 
   int count = 0;
   
   while(n > 0) 
   {  
       if((n % 10) >= (n % 100) / 10) 
       { 
           ctr++; 
       }  
       count++;
       n /= 10; 
   }  
   
   if(ctr == count) 
   {
      printf("YES");  
   } 
   else 
   { 
       printf("NO"); 
   }
}

CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    long n;
    cin>>n;
    
    while(n > 0)
    {
        int ud = n % 10, td = (n / 10) % 10;
        if(ud < td)
        {
            cout<<"NO";
            return 0;
        }
        n /= 10;
    }
    cout<<"YES";
}
'''
