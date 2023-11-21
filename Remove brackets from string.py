'''
The program must accept a string S as the input.
Some characters in the string S surrounded by anyone of the brackets (), [] and {}. 
The program must remove those brackets from the string S and print it as the output. 

Boundary Condition(s): 1 <= Length of S <= 1000

Input Format:  The first line contains S.

Output Format: The first line contains the modified string S. 

Example Input/Output 1:

Input:  Jac[k]po(t)

Output: Jackpot 

Explanation:

Here the string S is Jac[k]po(t) After removing the brackets [] and (), the string becomes Jackpot. 
So Jackpot is printed as the output.

Example Input/Output 2: 

Input:  D(v)[o]{r}a[k] 

Output: Dvorak

SOLUTION:
'''

S = input().strip()
S1 = ""

for i in S:
    if i != '[' and i != ']' and i != '(' and i != ')' and i != '{' and i != '}':
        S1 += i

print(S1)

'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001], val[1001];
    int len, ind = 0;
    scanf("%s%n", s, &len);
    
    for(int i = 0; i < len; i++)
    {
        if(s[i] == '{' || s[i] == '}' || s[i] == '[' || s[i] == ']' || s[i] == '(' || s[i] == ')')
        {
            continue;
        }
        else
        {
            val[ind++] = s[i];
        }
    }
    
    val[ind] = '\0';
    printf("%s", val);
}




#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == '[' || s[i] == ']' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
        {
            continue;
        }
        else
        {
            printf("%c", s[i]);
        }
    }
}

CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(auto &it:s)
    {
        if(isalpha(it))cout<<it;
    }
}
'''
