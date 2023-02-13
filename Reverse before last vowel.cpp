/*
The program must accept a string S as the input. The program must reverse all the characters present before the last vowel and print the modified string as the output.

Note: The string S contains at least one vowel. 

Boundary Condition(s): 1 <= Length of String S <= 1000 

Input Format:  The first line contains the string S.
Output Format: The first line contains the modified string.

Example Input/Output 1: 

Input:  ethernet 
Output: nrehteet 

Explanation: The last vowel is e so all the alphabets before e are reversed. 

Example Input/Output 2:

Input:  umbrella 
Output: llerbmua

SOLUTION:
*/

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() 
{
  string word;
  cin >> word;
  int loco = 0;
  
  for(int i = word.size() - 1; i >= 0; i--)
  {
    if(word[i] == 'a' || word[i] == 'e' || word[i] == 'o' || word[i] == 'i' || word[i] == 'u' )
    {
      loco = i;
      break;
    }
  }

  reverse(word.begin(), word.end() - (word.size() - loco));
  cout << word;
}
