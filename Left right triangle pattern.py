'''
The program must accept a string S as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= Length of S <= 1000

Input Format:  The first line contains S. 

Output Format: The lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  skillrack 

Output: skillrack 
        *killrac* 
        **illra**
        ***llr***
        ****l**** 
        ***llr*** 
        **illra**
        *killrac* 
        skillrack 
        
Example Input/Output 2: 

Input:  logics 

Output: logics 
        *ogic* 
        **gi**
        *ogic* 
        logics

SOLUTION:
'''

n = input()
s = []
s.append(n)

for i in range(1, int(len(n) / 2) + 1):
    s.append("*" * i + n[i:len(n) - i] + "*" * i)
       
if len(n) % 2 == 0: 
       s.pop()
       
k = s[::-1]

for i in range(1, len(k)):
    s.append(k[i])
       
for i in s:
    print(i)
       
'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001];
    scanf("%s", &s);
    int n = strlen(s);
    for(int i = 0; i < n/2; i++)
    {
        for(int x = 0; x < i; x++)
        {
            printf("*");
        }
        for(int j = i; j < n - i; j++)
        {
            printf("%c", s[j]);
        }
        for(int y = n - 1; y > n - 1 - i; y--)
        {
            printf("*");
        }
        printf("\n");
    }
    if(n % 2 != 0)
    {
        for(int i = n/2; i >= 0; i--)
        {
            for(int x = 0; x < i; x++)
            {
                printf("*");
            }
            for(int j = i; j < n - i ; j++)
            {
                printf("%c", s[j]);
            }
            for(int y = n - 1; y > n - 1 - i; y--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    
    if(n % 2 == 0)
    {
        for(int i = n / 2 - 2; i >= 0; i--)
        {
            for(int x = 0; x < i; x++)
            {
                printf("*");
            }
            for(int j = i; j < n - i; j++)
            {
                printf("%c", s[j]);
            }
            for(int y = n - 1; y > n - 1 - i; y--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}


    
CPP:
#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
       string s;
       cin>>s;
       
       int l = s.length();
       int n = l % 2 == 0 ? (l/2) - 1 : l / 2;
       
       for(int i = 0; i <= n; i++)
       {
           for(int j = 0; j < l; j++)
           {
               if(i > j || j > l - i - 1)
               {
                   cout<<"*";
               }
               else
               {
                   cout<<s[j];
               }
           }
           cout<<endl;
       }
       
       int p = l % 2 == 0 ? (l/2) - 1 : l / 2;
       
       for(int i = p; i > 0; i--)
       {
           for(int j = 0; j < l; j++)
           {
               if(i - 1 > j || j > l - i)
               {
                   cout<<"*";
               }
               else
               {
                   cout<<s[j];
               }
           }
           cout<<endl;
       }
}
'''
