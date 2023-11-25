'''
The program must accept a string S as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Note: The length of S is always odd. 

Boundary Condition(s): 5 <= Length of S <= 99

Input Format:  The first line contains S.

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  12345 

Output: **1**
        *2*2*
        34543 
        
Example Input/Output 2: 

Input:  abcdefg 

Output: ***a*** 
        **b*b** 
        *c***c*         
        defgfed 
        
Example Input/Output 3:

Input:  skillrack 

Output: ****s**** 
        ***k*k*** 
        **i***i** 
        *l*****l* 
        lrackcarl

SOLUTION:
'''

s = input()
l = len(s) 
t = l // 2 + 1
k = 0
x = l // 2
y = x

for i in range(t - 1):
    for j in range(l):
        if x == j:
            print(s[k], end = "")
        elif y == j:
            print(s[k], end = "")
        else:
            print('*',end = "")
    print()
    k += 1 
    x -= 1
    y += 1
    z = l // 2
print(s[z:] + s[l - 2:z - 1: -1])

'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int k = strlen(s) / 2, l = strlen(s) / 2, t = 0, f = 0, f1 = 0;
    for(int i = 0; i <= strlen(s) / 2; i++)
    {
        for(int j = 0; j < strlen(s); j++)
        {
            if(i == strlen(s) / 2)
            {
                if(f1 == 0)
                {
                    t--;
                    f1 = 1;
                }
                if(t == strlen(s) - 1)
                { 
                    f = 1;
                }
                if(f == 0) t++;
                else t--;
                printf("%c", s[t]);
            }
            else if(j == k || j == l)
            {
                printf("%c", s[t]);
            }
            else
            {
                printf("*");
            }
        }
        t++;
        k--;
        l++;
        printf("\n");
    }
}


CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
       string s;
       cin>>s;
       int n = s.length();
       int ss = n / 2, m = 0;
       for(int i = 0;i < (n / 2); i++)
       {
           for(int j = 0; j < ss; j++)
           {
               cout<<"*";
           }
           cout<<s[i];
           for(int j = 0; j < m; j++)
           {
               cout<<"*";
           }
           if(m != 0)
           {
               cout<<s[i];
           }
           for(int j = 0; j < ss; j++)
           {
               cout<<"*";
           }
           ss--;
           if(m == 0)
           {
               m++;
           }
           else
           {
               m += 2;
           }
           cout<<endl;       
       }
       for(int i = n / 2; i < n; i++)
       {
           cout<<s[i];
       }
       for(int i = n - 2; i > (n - 2 - (n / 2)); i--)
       {
           cout<<s[i];
       }
}
'''
