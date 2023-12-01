'''
The program must accept a string S as the input. 
The program must print the characters with an odd number of occurrences in the order of their occurrence in S as the output. 
If there is no such character in the string S then the program must print -1 as the output. 

Boundary Condition(s): 2 <= Length of S <= 1000 

Input Format:  The first line contains S. 

Output Format: The first line contains the characters with an odd number of occurrences in the order of their occurrence in S.

Example Input/Output 1:

Input:  nneettwwoorkwo 

Output: work

Explanation: 

In the string nneettwwoorkwo, only the four characters w, o, r, and k have occurred the odd number of times. 
Hence the output is work.

Example Input/Output 2: 

Input:  roboticsrobotics

Output: -1 

Example Input/Output 3: 

Input:  5#ATE5#5# 

Output: 5#ATE

SOLUTION:
'''

s = input().strip()
res = ""
for i in s:
    if s.count(i) % 2 == 1 and i not in res:
        res += i
if len(res) == 0:
    print(-1)
else:
    print(res)

'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[10001];
    int c = 0, br[256] = {0};
    scanf("%s", s);
    for(int i = 0; s[i] != '\0'; i++)
    {
        br[s[i]]++;
    }
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(br[s[i]] % 2 != 0)
        {
            printf("%c", s[i]);
            c = 1;
            br[s[i]] = 0;
          }
    }
    
    if(c == 0) printf("-1");
}

CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s, k = "";
    cin>>s;
    for(int i = 0; i < s.length(); i++)
    {
        int c = count(s.begin(), s.end(), s[i]);
        if(c % 2) 
        {
            if(k.find(s[i]) == string::npos)
            k += s[i];
    }
}

if(k.length() > 0)
    cout<<k;
else cout<<-1;
}
'''
