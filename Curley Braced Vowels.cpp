/*
The program must accept a string S as the input. 
For each substring containing only vowels in the string S, the program must enclose the substring by a pair of curly braces {}. 
Then the program must print the modified string S as the output. 

Boundary Condition(s): 1 <= Length of S <= 100

Input Format:  The first line contains S.

Output Format: The first line contains the modified string S. 

Example Input/Output 1:

Input:  bookreading 

Output: b{oo}kr{ea}d{i}ng 

Explanation: 

Here the string is bookreading. 
The substring containing only vowels in S are oo ea and i.
So they are enclosed by the pair of curly braces {}. 
Hence the output is b{oo}kr{ea}d{i}ng.

Example Input/Output 2: 

Input:  AeIOu 

Output: {AeIOu} 

Example Input/Output 3: 

Input:  Apple

Output: {A}ppl{e}

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    string k = "aeiouAEIOU", m;
  
    for(int i = 0; i < s.length(); i++)
    {
        if(k.find(s[i]) != string :: npos)
        {
           m += s[i];
        }
        else if(m.length() > 0)
        {
            cout<<'{'<<m<<'}';
            m = "";
        }
        if(k.find(s[i]) == string::npos) 
           cout<<s[i];
  }
  
  if(m.length() > 0) cout<<'{'<<m<<'}';

}

/*
C:
#include<stdio.h>
#include<stdlib.h>
int isvow(char ch)
{
    char t=tolower(ch);
    return t=='a' || t=='e' || t=='i' || t=='o' || t=='u';
}
int main()
{
    char str[101];
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++)
    {
        if(isvow(str[i]))
        {
            printf("{");
            while(isvow(str[i]))
            {
                printf("%c", str[i]);
                i++;
            }
            i--;
            printf("}");
        }
        else
        {
            printf("%c",str[i]);
        }
    }

}



#include<stdio.h>
#include<stdlib.h>

int isvowel(char c)
{
    c = tolower(c);
    return(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    char s[101];
    int len;
    scanf("%s%n", s, &len);
    for(int i = 0; i < len; i++)
    {
        int count = 0;
        if((isvowel(s[i])) && (!isvowel(s[i - 1])))
        {
            printf("{");
        }
        if((!isvowel(s[i])) && isvowel(s[i - 1]))
        {
            printf("}");
        }
        if(isvowel(s[i]) && s[i + 1] == '\0')
        {
            printf("%c}", s[i]);
            return 0;
        }
        if(isvowel(s[i]))
        {
            printf("%c", s[i]);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
}

PY3:
s = input().strip()
s1 = ''
for i in s:
    if i in 'aeiouAEIOU':
        i = '{' + i + '}'
    s1 += ''.join(i)
    s1 = s1.replace('}{', '')
print(s1)        
*/
