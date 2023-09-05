/*
The program must accept a string S containing only alphabets as the input. 
The program must reverse the string S, keeping the vowels in the same position. 
Then the program must print the modified string S as the output. 

Boundary Condition(s): 1 <= Length of S <= 1000

Input Format:  The first line contains S. 

Output Format: The first line contains the modified string S. 

Example Input/Output 1: 

Input:  bulk 

Output: kulb 

Explanation: 

There is only one vowel u in bulk.
So the string is reversed except u.
Hence the output is kulb.

Example Input/Output 2: 

Input:  Apple 

Output: Alppe

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int l = 0, j = 0;
    char s[1001];
    scanf("%s%n", s, &l);
    char v[11] = "aeiouAEIOU";
    char r[l + 1];
    for(int i=l - 1; i>=0; i--)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            //no
        }
        else
        {
            r[j++]=s[i];
        }
    }
    int k = 0;
    for(int i=0; i<l; i++)
    {
        if(strchr(v, s[i]) == 0)
        {
            printf("%c", r[k++]);
        }
        else
            printf("%c", s[i]);
    }
    return 0;
}

/*
PY3:
S = input().strip()
Vowels = 'aeiouAEIOU'
Mod = ""

for i in range(0, len(S)):
    if S[i] not in Vowels:
        Mod += S[i]

Len = len(Mod) - 1

for i in range(0, len(S)):
    if S[i] in Vowels:
        print(S[i], end="")
    else:
        print(Mod[Len], end="")
        Len -= 1

C:
#include<stdio.h>
#include<stdlib.h>

int isv(char c)
{
    c=tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    else
        return 0;
}

int main()
{
    char s[1000],a[1000];
    int i, p = 0;
    scanf("%s",s);
    for(i=0; i<strlen(s); i++)
    {
        if(!isv(s[i]))
            a[p++] = s[i];
    }
    p--;
    for(i=0; i<strlen(s); i++)
    {
        if(isv(s[i]))
            printf("%c", s[i]);
        else    
            printf("%c", a[p--]);
    }    
}
*/
