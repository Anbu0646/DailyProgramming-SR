/*
The program must accept a string value S the input. 
The program must print the vowel positions. 
If there are no such vowels in S then print -1 as the output. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format:  The first line contains the values of string S. 

Output Format: The first line contains either the vowel positions separated by a space(s) or -1. 

Example Input/Output 1: 

Input:  Mechanic 

Output: 2 5 7 

Explanation: 

In Mechanic, the vowels are e, a, and i.
And their positions are 2, 5 and 7. 
Hence the output is 2 5 7 

Example Input/Output 2: 

Input:  EncyclOPEDIA 

Output: 1 7 9 11 12 

Example Input/Output 3: 

Input:   Rhythm 
Output: -1


SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string String;
    getline(cin, String);
    int Flag = 0;
    
    for(int i=0; i<String.length(); i++)
    {
        String[i] = tolower(String[i]);
        if(String[i] == 'a' || String[i] == 'e' || String[i] == 'i' || String[i] == 'o' || String[i] == 'u')
        {
            cout<<i + 1<<" ";
            Flag = 1;
        }
    }
    
    if (Flag == 0)
    {
        cout<<-1;
    }

}
