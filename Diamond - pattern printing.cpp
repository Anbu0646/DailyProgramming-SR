/*
The program must accept an odd integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= N <= 99 

Input Format:  The first line contains the value of N.
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  5 

Output: -********* 
        ***-----*** 
        --**---** 
        ----*-* 
        
Example Input/Output 2: 

Input:  7 
Output: -************* 
        ****-------**** 
        --***-----*** 
        ----**---** 
        ------*-*

SOLTUION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    cout<<"-"<<string(n*2-1, '*')<<"\n";
    int st = n/2 + 1;
    int mid = n;
    int front = 0;

    for(int i=1; i<=(n/2)+1; ++i)
    {
        cout<<string(front, '-');
        cout<<string(st, '*')<<string(mid, '-')<<string(st, '*')<<"\n";
        front += 2; --st;
        mid -= 2;
    }
}
