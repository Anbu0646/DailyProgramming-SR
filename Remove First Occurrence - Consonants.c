/*
The program must accept a string S as the input. 
The program must remove the first occurrence of all the repeated consonants in the string S. 
Then the program must print the modified string S as the output. 

Boundary Condition(s): 3 <= Length of S <= 1000 

Input Format:  The first line contains S. 

Output Format: The first line contains the modified string S. 

Example Input/Output 1: 

Input:  Attendance 

Output: Atedance 

Explanation: 

The repeated consonants in the string Attendance are t and n.
So the first occurrence of both the consonants are removed from the string Attendance. 
Hence the output is Atedance. 

Example Input/Output 2: 

Input:  Cloud 

Output: Cloud

Example Input/Output 3: 

Input:  OCcurrence@123 

Output: OCurence@123

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int iscon(char t)
{
    char k = toupper(t);
    if(k == 'A' || k == 'E' || k == 'I' || k == 'O' || k == 'U')
       return 1;
    else
       return 0;
}

int cou(char t, char s[])
{
    int z = 0;
    for(int i = 0; i < strlen(s); i++)
    {
      if(t == s[i])
         z++;
    }
    return z;
}

int main()
{
    char s[1001];
    scanf("%s", s);
    int a[128] = {0}, i;
    for(i = 0; i < strlen(s); i++)
    {
        if(iscon(s[i]) == 0)
        {
            int c = cou(s[i], s);
            if(c > 1)  
            {
                if(a[s[i]] == 0)
                {
                    a[s[i]] = 1;
                }
                else
                  printf("%c", s[i]);
            }
            else if(c == 1)
                 printf("%c", s[i]);
        }
        else
           printf("%c", s[i]);
    }
  
return 0;

}

/*
CPP:
#include <bits/stdc++.h>
 
using namespace std;

int check(char ch)
{
    char s = tolower(ch);
    if(s != 'a' && s != 'e' && s != 'i' && s != 'o' && s != 'u')
    {
        return 1;
    }
    return 0;
}

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int n = s.length();
    unordered_map<char, int> mp;
    for(int i = 0; i < n; i++)
    {
        if(check(s[i]))
        {
            mp[s[i]]++;
        }  
    }
    for(int i = 0; i < n; i++)
    {
        if(!check(s[i]))
        {
            cout<<s[i];
        }
        else
        {
            int k = mp[s[i]];
            if(k > 1)
            {
                mp[s[i]] = 1;
                continue;
            }
            else
            {
                cout<<s[i];
            }
        }
    }
}

PY3:
def isvowel(c):
    c = c.lower()
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'
    
s = list(map(str, input().strip())) 
l = [] 

for i in s:
    if i not in l and (not isvowel(i)) and (s.count(i) > 1):
        l.append(i) 
    else:
        print(i, end = "")
*/
