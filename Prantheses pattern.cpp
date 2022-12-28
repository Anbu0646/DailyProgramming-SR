/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= N <= 100 

Input Format:  The first line contains the value of N. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  2 
Output: *()* 
        (()) 
        *()* 
        
Example Input/Output 2: 

Input:  5 
Output: ****()****  
        ***(())*** 
        **((()))** 
        *(((())))* 
        ((((())))) 
        *(((())))* 
        **((()))** 
        ***(())*** 
        ****()****

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int a;
    scanf("%d",&a);
    int l=a, m=a+1;
    string str="";
    for(int i=1; i<=a; printf("\n"), i++)
    {
        for(int j=1;j<=2*a;j++){
            if(j>=l && j<=a)
            {
                printf("(");
                str+=')';
            }
            else if(j>a && j<=m)
            {
                printf(")");
                str+='(';
            }
            else
            {
                printf("*");
                str+='*';
            }
        }
    l--;
    m++;
    str+='\n';
    }
    for(int i=str.length()-(a+a)-3;i>=0;i--)
    {
        cout << str[i];
    }
}
