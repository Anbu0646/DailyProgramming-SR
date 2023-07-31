'''
The program accepts a string S containing only lower case alphabets as the input. 
For each vowel in S, the program must toggle the case of next consonant in S. Finally, the program must print the modified string S as the output. 

Boundary Condition(s): 2 <= Length of S <= 10000 

Input Format:  The first line contains S. 

Output Format: The first line contains the modified string S. 

Example Input/Output 1: 

Input:  about 

Output: aBout 

Explanation:

The 1st vowel in the string "about" is 'a' and the next consonant of 'a' is 'b'. So the case of 'b' is toggled. Now the string becomes "aBout". 
The 2nd vowel in the string "aBout" is 'o' and the next consonant of 'o' is 't'. So the case of 't' is toggled. Now the string becomes "aBouT". 
The 3rd vowel in the string "aBouT" is 'u' and the next consonant of 'u' is 'T'. So the case of 'T' is toggled. Now the string becomes "aBout". 
Hence the output is aBout. 

Example Input/Output 2: 

Input:  adoc 

Output: aDoC 

Example Input/Output 3: 

Input:  aeibco

Output: aeiBco

SOLUTION:
'''

s = input().strip()
s = [i for i in s]

for i in range(len(s)):
    if s[i].lower() in "aeiou":
        for j in range(i + 1, len(s)):
            if s[j].lower() not in "aeiou":
                s[j] = s[j].swapcase()
                break
print("".join(s))

'''
CPP:

#include <bits/stdc++.h>
 
using namespace std;

int isVowel(char ch)
{
    return ch=='a'||ch=='e'||ch=='i'||ch=='u'||ch=='o';
}

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(isVowel(s[i]))
        {
            int j = i;
            while(isVowel(s[j]) && j<s.size())
            {
                j++;
            }
            if(islower(s[j]))
            {
                s[j] = toupper(s[j]);
            }
            else
            {
                s[j] = tolower(s[j]);
            }
        }
    }
    cout<<s;
}
'''
