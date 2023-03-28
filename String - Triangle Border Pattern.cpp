/*
The program must accept a string S as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Note: Length of S is always a multiple of 3. 

Boundary Condition(s): 3 <= Length of S <= 99 

Input Format:  The first line contains the string S. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  abcdef
Output: --a 
        -f-b
        e-d-c 

Example Input/Output 2: 

Input:  skillrack 
Output: ---s 
        --k-k 
        -c---i 
        a-r-l-l

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string S;
    cin>>S;
    int first, second, third, len=S.size()/3, last, odd=1;
    first=0, second=len, last=S.size()-1;
  
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len-i; j++)
        {
            cout<<"-";
        }
        if(i==0)
            cout<<S[first++];
        else
        {
            cout<<S[last--];
            for(int j=0; j<odd; j++)
            {
                cout<<"-";
            }
            odd+=2;
            cout<<S[first++];
        }
        cout<<endl;
    }
  
    for(int i=0; i<=len; i++)
    {
        cout<<S[last--];
        if(i<len)
            cout<<"-";
    }
}
