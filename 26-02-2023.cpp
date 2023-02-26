/*
The program must accept a string S (where the length of S is always a multiple of 5) as the input. 
The program must print YES if the first five characters of S are alphabets, the second five characters of S are digits, the third five characters of S are alphabets 
and so on. 
Else the program must print NO as the output. 

Boundary Condition(s): 5 <= Length of S <= 100 

Input Format:  The first line contains the string S. 
Output Format: The first line contains either YES or NO. 

Example Input/Output 1: 

Input:  abcde25353KnMDn92483fjkdm 
Output: YES 

Explanation: The first five characters in S are alphabets (abcde). 
             The second five characters in S are digits (25353).
             The third five characters in S are alphabets (KnMDn). 
             The fourth five characters in S are digits (92483). 
             The fifth five characters in S are alphabets (fjkdm).
             Hence the output is YES 

Example Input/Output 2: 

Input:  qwers63i53asdfe
Output: NO

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin >> s;
    for(int i = 0, toggle = 0; i < s.size(); i += 5)
    {
        string tmp = s.substr(i, 5);
        for(char c : tmp)
        {
            if((toggle == 0 && isalpha(c)) || (toggle == 1 && isdigit(c)))
            {
                continue;
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
        toggle = (toggle == 0) ? 1 : 0;
    }
    cout << "YES";
}
