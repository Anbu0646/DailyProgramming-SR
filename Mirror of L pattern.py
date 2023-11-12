'''
The program must accept a string S as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= Length of S <= 100 

Input Format:  The first line contains S.

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  skillrack 

Output: 

skillrack
kkillrack 
iiillrack 
lllllrack
lllllrack 
rrrrrrack 
aaaaaaack 
cccccccck 
kkkkkkkkk 

Example Input/Output 2: 

Input:  huge 

Output: 

huge 
uuge 
ggge 
eeee

SOLUTION:
'''

s = input('')
for i in range(0, len(s)):
    print(s[i] * (i + 1) + s[i + 1:])


a = input().strip()
for i in range(len(a)):
    for j in range(len(a)):
        if i < j:
            print(a[j], end = "")
        else:
            print(a[i], end = "")
    print()
'''
CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(i == 0) cout<<s<<endl;
        else if(i > 0) 
        {
            int c = 0;
            while(c < s.length())
            {
                if(c <= i)
                {
                     cout<<s[i];
                }
                else if(c > i)
                {
                    cout<<s.substr(i + 1, s.length())<<endl;
                    break;
                }
                c++;
            }
        }     
    }
}


C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[101];
    scanf("%s", s);
    
    int len = strlen(s);
    
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if(j <= i)
            {
                printf("%c", s[i]);
            }
            else
            {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
}
'''
