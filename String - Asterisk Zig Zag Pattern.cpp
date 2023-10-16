/*
The program must accept a string S as the input. 
The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s): 2 <= Length of S <= 100 

Input Format:  The first line contains S. 

Output Format: The lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  abcde

Output: 

abcde
abcd* 
*bcde
abc**
**cde 
ab*** 
***de 
a**** 
****e 
*****
*****

Example Input/Output 2:

Input:  How 

Output: 

How 
Ho* 
*ow 
H** 
**w 
***
***

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string dc;
    cin>>dc;
    cout<<dc<<endl;
    int a = 1, b = dc.length() - 2;
    for(int i = 1; i <= dc.length(); i++)
    {
        for(int j = 0; j < dc.length(); j++)
        {
            if(j > b)
                cout<<"*";
            else cout<<dc[j];
        }
      
        cout<<endl;
      
        for(int j = 0; j < dc.length(); j++)
        {
            if(j < a)
                cout<<"*";
            else cout<<dc[j];
        }
      
        b--;
        a++;
        cout<<endl;
    }
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
  char a[1000];
  scanf("%s",a);
  int l = 1;
  printf("%s\n", a);
  for(int i=0; i<strlen(a) * 2; i++)
  {
    for(int j=0; j<strlen(a); j++)
    {
        if(i % 2 == 0)
        {
            if(j >= strlen(a) - l)
            {
                printf("*");
            }
            else
                printf("%c", a[j]);
        }
        if(i % 2 == 1)
        {
           if(j < l)
                printf("*");
            else
                printf("%c", a[j]);
        }
    }   
    
    if(i % 2 == 1)
        l++;
    printf("\n");
  }
}

PY3:
s = input()
print(s)
a = 1;b = len(s) - 1
for i in range(len(s)):
    print(s[:b] + '*' * a)
    print('*' * a + s[a:])
    a += 1
    b -= 1
*/
