/*
Two string values S1 and S2 are passed as input to the program. 
The program must pad S1 with asterisks on the right (when the length of S2 is greater than the length of S1) and must pad S2 with asterisks on the left (when the length of S1 is greater than the length of S2).

Boundary Condition(s): 1 <= Length of S1, S2 <= 100 

Input Format:  

The first line contains S1. 
The second line contains S2. 

Output Format:

The first line contains a string based on the given conditions. 
The second line contains a string based on the given conditions.

Example Input/Output 1: 

Input: 

lemon 
rainbowcolor

Output: 

lemon******* 
rainbowcolor

Explanation: 

The length of the string lemon is 5. 
The length of the string rainbowcolor is 12. 
Here the length of S2 is greater than the length of S1. 
So the string lemon is padded with asterisks on the right side. 
Hence the output is 
lemon******* 
rainbowcolor 

Example Input/Output 2: 

Input:  

maintain 
pen 

Output: 

maintain 
*****pen

SOLTUION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string S1, S2;
    cin>>S1>>S2;
    //cout<<S1<<endl<<S2<<endl;
    int len1 = S1.length(), len2 = S2.length();
    //cout<<len1<<endl<<len2<<endl;
    if(len1 > len2)
    {
        cout<<S1<<endl;
        for(int i=0; i < (len1 - len2); i++)
        {
            cout<<"*";
        }
        cout<<S2;
    }
    else
    {
        cout<<S1;
        for(int i=0; i < (len2 - len1); i++)
        {
            cout<<"*";
        }
        cout<<endl;
        cout<<S2<<endl;
    }



/*


*/
