/*
The program must accept a string S as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s):  1 <= Length of S <= 100 

Input Format:  The first line contains the string S. 

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  coding 

Output: 

ggggggc 
nnnnnoo 
iiiiddd 
dddiiii 
oonnnnn 
cgggggg 

Example Input/Output 2: 

Input: SKILL 

Output: 

LLLLLS 
LLLLKK 
IIIIII 
KKLLLL 
SLLLLL

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string a;
    cin>>a;
    
    int end = a.length() - 1;
    int start = 0;
  
    for(int i=0; i<a.length(); i++)
    {
        for(int j=0; j<a.length() - i; j++)
        {
            cout<<a[end];
        }
        for(int j=0; j<=i; j++)
        {
            cout<<a[start];
        }
      
        start++;
        end--;
        cout<<"\n";
    }
}

/*
PY3:

s=input().strip()
r=len(s)
k=r
l=1
for i in range(k):
    print(s[k-i-1]*r,end='')
    print(s[i]*l)
    r-=1
    l+=1
*/
