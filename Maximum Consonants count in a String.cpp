/*
The program must accept N string values as the input. 
The program must print the string S with the maximum number of consonants. 
If more than one string have the maximum number of consonants then print the first occurring string. 

Note: At least one string will contain one or more consonants. 

Boundary Condition(s):  1 <= N, Length of S <= 10^3 

Input Format: 

The first line contains N.
The next N lines contain the string values. 

Output Format: The first line contains the string value which has maximum number of consonants. 

Example Input/Output 1: 

Input: 

4 
dog 
puppy 
tiger 
lion 

Output: puppy 

Explanation: 

The string "dog" has 2 consonants. 
The string "puppy" has 4 consonants. 
The string "tiger" has 3 consonants. 
The string "lion" has 2 consonants. 
Hence the output is puppy 

Example Input/Output 2: 

Input: 

5 
Scooter 
Ambulance 
Skateboard 
Bus 
Helicopter 

Output: Skateboard

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int isvow(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main(int argc, char** argv)
{
    int n, max = 0;
    cin>>n;
    string s, t;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        int c = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(!isvow(s[i]))
            {
                c++;
            }
        }
        if(c > max)
        {
            max = c;
            t = s;
        }
    }
    cout<<t;
}

/*

PY3:

n = int(input())
v = 'aeiouAEIOU'
m = 0

for i in range(n):
    s = input().strip()
    c = 0
    for j in s:
        if j not in v:
            c += 1
    if c > m:
        p = s
        m = c
print(p)        


C:

#include<stdio.h>
#include<stdlib.h>

int isconsonant(char ch)
{
    ch = tolower(ch);
    return !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    int N, mc = 0;
    scanf("%d", &N);
    char s[10001], res[10001];
    for(int i=0; i<N; i++)
    {
        scanf("%s", s);
        int c = 0;
        for(int j=0; j<strlen(s); j++)
        {
            if(isconsonant(s[j]))
            {
                c++;
            }
        }
        if(c > mc)
        {
            mc = c;
            strcpy(res, s);
        }
    }
    printf("%s", res);
}



*/
