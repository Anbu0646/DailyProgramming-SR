/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 10 <= N <= 10^16

Input Format: The first line contains N. 

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  9165 

Output: 

9165 
165 
65
5 

Example Input/Output 2:

Input:  108004

Output: 

108004 
8004
8004
4 
4
4

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    char s[1000];
    cin>>s;
  
    for(int i = 0; i < strlen(s); i++)
    {
        long long int f = 0;
      
        for(int j = i; j < strlen(s); j++)
        {
            f = (f * 10) + (s[j] - '0');
        }
      
        cout<<f<<"\n";
    }
}

/*
PY3:
s = input().strip()
for i in range(len(s)) : print(int(s[i:]))

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[20];
    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++)
    {
        int j = i;
        
        while(s[j] == '0' && j < strlen(s))
        {
            j++;
        }
        
        if(j < strlen(s))
           printf("%s\n", (s + j));
        else 
           printf("0\n");       
    }
}
*/
