/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary condition(s): 2 <= N <= 100 

Input Format:  The first line contains N. 

Output Format: The first N lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1: 

Input: 4 

Output: 
#*#* 
*#*# 
#*#*
*#*# 

Example Input/Output 2: 

Input:  5 

Output:
#*#*# 
*#*#*
#*#*# 
*#*#*
#*#*#

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin>>N;
    
    for(int i=1; i<=N; i++, cout<<endl)
    {
        for(int j=1; j<=N; j++)
        {
            if(i % 2 == 1 && j % 2 == 1)    cout<<"#";
            else if(i % 2 == 1 && j % 2 == 0) cout<<"*";
            else if(i % 2 == 0 && j % 2 == 0) cout<<"#";
            else if(i % 2 == 0 && j % 2 == 1) cout<<"*";
        }
    }
}

/*

PY3:
n = int(input())
if n % 2 == 0:
    s = '#*'
    e = '*#'
    for i in range(n):
        if i % 2 == 0:print(s * (n // 2))
        else:print(e * (n // 2))
else:
    s = ('*#')
    e = ('#*')
    for i in range(n):
        print(s * (n // 2) + '*' if i % 2 == 1 else e * (n // 2) + '#')

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=a; j++)
        {
            if(j % 2 != 0 && i % 2 != 0 || j % 2 == 0 && i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

*/
