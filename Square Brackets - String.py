'''
The program must accept a string S with spaces as the input. 
The program must convert all the alphabets between each pair of square brackets [ ] to upper case alphabets. 
Finally, the program must print the modified string S as the output. 

Boundary Condition(s): 3 <= Length of S <= 1000 

Input Format:  The first line contains S.

Output Format: The first line contains the modified string S. 

Example Input/Output 1:

Input:  uhuu [ntu e]tuhnt[uheo 

Output: uhuu [NTU E]tuhnt[uheo 

Explanation:

In the string uhuu [ntu e]tuhnt[uheo, the alphabets within the pair of square brackets are n t u e. 
After coverting those alphabets into uppercase the string becomes uhuu [NTU E]tuhnt[uheo. 
Hence the output is uhuu [NTU E]tuhnt[uheo. 

Example Input/Output 2: 

Input:  [robert [was] a good [king] 

Output: [robert [WAS] a good [KING] 

Example Input/Output 3: 

Input:  [as[df]er] 

Output: [as[DF]er]

SOLUTION:
'''

S = input().strip()
wrds = []
for i in range(len(S)):
    if(S[i] == '['):
        s2 = S[i]
        for j in range(i + 1, len(S)):
            s2 += S[j]
            if(S[j] in "[]"):
                break
        if(s2.startswith("[") and s2.endswith("]")):
            wrds.append(s2)
for i in wrds:
    S = S.replace(i, i.upper())
print(S)

'''
C:
#include<stdio.h>
#include<stdlib.h>

void strConverter(int start, int end, char *str)
{
    for(int i = start; i < end; i++)
    {
        if(!isalnum(str[i]) && str[i] != ' ')
        {
            return;
        }
    }
    
    for(int i = start; i < end; i++)
    {
        str[i] = toupper(str[i]);
    }
}

int main()
{
    char str[1001];
    scanf("%[^\n]", str);
    int s = -1;
    
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == '[')
        {
            s = i + 1;
        }
        if(str[i] == ']')
        {
            if(s == -1)
            {
                continue;
            }
            strConverter(s, i, str);
        }
    }
    printf("%s", str);
}


CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin, s);
    bool caps = false;
    for(int i = 0; i < s.length(); i++)
    {
        if(caps)
        {
            cout<<(char)toupper(s[i]);
        }
        else
        {
            cout<<s[i];
        }
        if(s[i] == '[')
        {
            int j = i + 1;
            while(j < s.length() && s[j] != ']' && s[j] != '[')
            {
                j++;
            }
            if(s[j] == ']')
            {
                caps = true;
            }
        }
        else if(s[i] == ']')
        {
            caps = false;
        }
    }
}
'''
