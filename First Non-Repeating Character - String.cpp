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

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int in = -1;
    int a[256]={0};
  
    for(int i=0;  i<s.length(); i++)
    {
        a[s[i]]++;
    }
    
    for(int i=0; i<s.length(); i++)
    {
        if(a[s[i]] == 1)
        {
            in = i;
            break;
        }
    }
    
    if(in == -1)
    {
        cout<<"-1";
    }
    else
    {
        cout<<in;
    }

}
