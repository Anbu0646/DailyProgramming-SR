/*
The program must accept an integer N with even number of digits as the input. The program must reverse every two digits in N and print the modified N as the output. 

Boundary Condition(s): 10 <= N < 10^16 

Input Format:  The first line contains N. 
Output Format: The first line contains the modified N.

Example Input/Output 1: 

Input:  214587 
Output: 125478 

Explanation: The first two digits are 2 and 1 which are reversed as 1 and 2. 
             The second two digits are 4 and 5 which are reversed as 5 and 4. 
             The third two digits are 8 and 7 which are reversed as 7 and 8. 
             
Example Input/Output 2: 

Input:  504786
Output: 57468

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
  
    int l=s.length();
  
    for(int i=0; i<l; i+=2)
    {
      if(i==0 && s[i+1]=='0') 
          cout<<s[i];
      else 
          cout<<s[i+1]<<s[i];
    }
}
