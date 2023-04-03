/*
Given a string S as the input, the program must print the index of the first non-repeating character in S. If it doesn't exist, the program must print -1 as the output.

Note: The index of S always starts from 0. 

Boundary Condition(s): 2 <= length of S <=100 

Input Format:  The first line contains the string S. 
Output Format: The first line contains the index of the first non-repeating character in S or -1. 

Example Input/Output 1: 

Input:  skillrack 
Output: 0 

Explanation: Here s is the first non-repeating character in the string "skillrack". The index of s is 0. Hence the output is 0 

Example Input/Output 2: 

Input:   abbcaac 
Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100];
    scanf("%s ", s);
    int a[256]={0};
    int m=0;
    int l=strlen(s);
  
    for(int i=0; i<l; i++)
    {
        a[s[i]]++;
    }
  
    for(int i=0; i<l; i++)
    {
        if(a[s[i]] == 1)
        {
            printf("%d ", i);
            m = 1;
            return;
        }
    }
    if(m==0)
    {
        printf("-1");
    }
}
