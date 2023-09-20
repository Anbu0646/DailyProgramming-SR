/*
The program must accept a string S containing only lower case alphabets as the input. 
The program must remove the repeated vowels in the string S. 
Then the program must print the modified string S as the output.

Boundary Condition(s): 1 <= Length of S <= 10^4 

Input Format:  The first line contains S. 

Output Format: The first line contains the modified string S. 

Example Input/Output 1: 

Input:  conditioner

Output: cndtner 

Explanation: 

The vowels o and i are repeated in the string "conditioner". 
So they are removed from the string "conditioner". 
Hence the output is cndtner.

Example Input/Output 2: 

Input:  skillrack 

Output: skillrack

SOLUTION:
*/

#include <iostream>
#include <unordered_map>

bool isVowel(char c) 
{
    c = std::tolower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() 
{
    string s;
    cin >> s;
    
    unordered_map<char, int> charCount;

    for (char c : s) 
    {
        charCount[c]++;
    }

    for (char c : s) 
    {
        if (!isVowel(c) || charCount[c] > 1) 
        {
            cout << c;
        }
    }

    return 0;
}

/*
PY3:
a=input().strip()
v="aeiouAEIOU"
vc={}
for i in a:
    if i in v:
        if i not in vc:
            vc[i]=1
        else:
            vc[i]+=1
for i in a:
    if i not in v or vc[i]==1:
        print(i,end="")

C:
#include<stdio.h>
#include<stdlib.h>

int isvowel(char b)
{
    return b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u';
}

int main()
{
    char b[10001];
    scanf("%s", b);
    int l = strlen(b) - 1;
    int r[26] = {0};
    for(int i=0; i<=l; i++)
    {
        if(isvowel(b[i]))
        {
            r[b[i] - 97]++;
        }
    }
    for(int i=0; i<=l; i++)
    {
        if(r[b[i] - 97] > 1)
        {
            continue;
        }
        else
        {
            printf("%c", b[i]);
        }
    }
}  
*/
