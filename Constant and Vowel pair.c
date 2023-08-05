/*
The program must accept a string S as the input. 
The program must print all the pairs having a consonant followed by a vowel in the string S (in the order of occurrence) as the output.

Note: The string S always contains at least one pair having a consonant followed by a vowel. 

Boundary Condition(s):  2 <= Length of S <= 100 

Input Format:  The first line contains the string S. 

Output Format: The first line contains all the pairs having a consonant followed by a vowel separated by a space. 

Example Input/Output 1: 

Input:  volcano 

Output: vo ca no 

Explanation: 

The string "volcano" contain three pairs having a consonant followed by a vowel. 
So the pairs vo ca and no are printed as the output. 

Example Input/Output 2: 

Input:  TELEVISION 

Output: TE LE VI SI

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int isv(char c)
{
    c=tolower(c);
    if(c == 'a' || c == 'e'||c == 'i' || c == 'o' || c == 'u')
    {
        return 0;
    }
    
    return 1;
}

int main()
{
    char s[10000];
    int l;
    scanf("%s%n", s, &l);
    
    for(int i=0; i<l - 1; i++)
    {
        if(isv(s[i]) == 1 && isv(s[i + 1]) == 0)
        {
            printf("%c%c ", s[i], s[i + 1]);
        }
    }
}

/*
PY3:

String = input().strip()
Vowels = "aeiouAEIOU"

for i in range(0, len(String) - 1):
    if String[i] not in Vowels and String[i + 1] in Vowels:
        print(String[i], end="")
        print(String[i + 1], end=" ")
*/
