/*
The program must accept a string S, a character CH and an integer X as the input. 
The program must remove the first X occurrences of the character CH in the string S. 
Then the program must print the modified string S as the output. 
If all the characters are removed from the string S, the program must print -1 as the output. 

Note: The string S is case sensitive. 

Boundary Condition(s): 

1 <= Length of S <= 1000 
1 <= X <= 100 

Input Format:  The first line contains S. The second line contains CH and X separated by a space. 

Output Format: The first line contains the modified string S or -1 as per the given condition(s). 

Example Input/Output 1: 

Input:  

Digitization 
i 3 

Output:  Dgtzation 

Explanation: 

Here the string is Digitization. 
After removing the first 3 occurrences of i, the string becomes Dgtzation. 
Hence the output is Dgtzation. 

Example Input/Output 2: 

Input:

B2b5b4@ABC 
B 4

Output:  2b5b4@AC 

Example Input/Output 3:

Input:

AAAA 
A 7

Output: -1

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s, out = "";
    int x;
    char c;
    cin>>s>>c>>x;
    for(char d:s)
    {
        if(x > 0)
        {
            if(c==d) x--;
            else out+=d;
        }
        else out+=d;
    }
    if(out.size() == 0) cout<<-1;
    else cout<<out;
}


/*
PY3:
String = input().strip()
Ch, X = map(str, input().split())
X = int(X)
Count = 0
Modified_String = ""
for i in String:
    if i == Ch:
        Count += 1
        if Count > X:
            Modified_String += i
    else:
        Modified_String += i
if len(Modified_String) == 0:
    print(-1)
else:
    print(Modified_String)


C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1000];
    scanf("%s", s);
    int a = strlen(s);
    char c;
    int n, d = 0;
    scanf(" %c %d", &c, &n);
    for(int i=0; i < a; i++)
    {
        if(s[i] == c)
        {
            s[i] = '<';
            d++;
        }
        if(d == n)
        {
            break;
        }
    }
    if(d == a)
    {
        printf("-1");
    }
    for(int i=0; i < a; i++)
    {
        if(s[i] != '<')
        {
            printf("%c", s[i]);
        }
    }
}    
*/
