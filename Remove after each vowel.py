'''
The program must accept a string S as the input. 
For each vowel CH in the string S (from left to right), the program must remove the next character of CH from the string S. 
Then the program must print the modified string as the output. 

Boundary Condition(s): 1 <= Length of S <= 1000

Input Format:  The first line contains S.

Output Format: The first line contains the modified string S. 

Example Input/Output 1: 

Input:  skillrack 

Output: skilrak 

Explanation:

Here the string is skillrack The first vowel in skillrack is i.
The next character of i is l, so l is removed from the string skillrack.
Now the string becomes skilrack.
The second vowel in skillrack is a. 
The next character of a is c, so c is removed from the string skilrack. 
Now the string becomes skilrak. 
Finally, the modified string skilrak is printed as the output.

Example Input/Output 2: 

Input:  Aerospace 

Output: Aropae 

Example Input/Output 3: 

Input:  AeI#oU123 

Output: AIo123

SOLUTION:
'''

s = input().strip()
i = 0
v = "aeiouAEIOU"

while i < len(s):
    if s[i] in v:
        print(s[i], end = "")
        i += 2
    else:
        print(s[i], end = "")
        i += 1

'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch[10001];
    scanf("%s", ch);
    
    for(int i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'i' || ch[i] == 'I' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'u' || ch[i] == 'U')
        {
            printf("%c", ch[i]);
            i++;
        }
        else
        {
            printf("%c", ch[i]);
        }
    }
}

CPP:
#include <bits/stdc++.h>
 
using namespace std;

bool vow(char ch) 
{    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
    {
        return true;
    }
    return false;
}

int main(int argc, char** argv)
{
    string name;
    cin>>name;
    
    int i = 0;
    
    while (i < name.size()) 
    {
        if (vow(name[i])) 
        {
            cout << name[i] << "";
            i += 2;
        } 
        else 
        {
            cout << name[i] << "";
            i++;
        }
    }

    return 0;
    
}
'''
