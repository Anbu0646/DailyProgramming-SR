/*
A string S with space is passed as the input to the program. 
The program must print the words in S separated by exactly one space character and the additional space characters (following the first space character) must be replaced
by asterisk (*) if present.

Boundary Condition(s): 1 <= Length of S <= 1000 

Input Format:  The first line contains the string S. 
Output Format: The first line contains the words as per the given condition. 

Example Input/Output 1:

Input:  Practice makes perfect 
Output: Practice *******makes ******perfect 

Explanation: The additional spaces between words are replaced by asterisks and printed.

Example Input/Output 2: 

Input:   The process needed 30 minutes to finish 
Output:  The **process ****needed ****30 *minutes ***to finish

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string ar;
    getline(cin, ar);
    for(int i = 0; i < ar.size(); i++)
    {
        if((isalpha(ar[i]) || isdigit(ar[i])) && ar[i + 1] == ' ')
        {
            cout << ar[i] << ' ';
            i++;
        }
        else if(ar[i] == ' ')
        {
            cout << '*';
        }
        else
        {
            cout << ar[i];
        }
    }
}
