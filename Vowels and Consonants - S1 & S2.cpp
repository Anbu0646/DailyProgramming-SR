/*
The program must accept two string values S1 and S2 of equal length as the input. 
The program must print YES if both the string values have a vowel or a consonant at the same position. 
Else the program must print NO as the output. 

Boundary Condition(s): 1 <= Length of S1, S2 <= 1000 

Input Format: 

The first line contains S1. 
The second line contains S2. 

Output Format: 

The first line contains YES or NO. 

Example Input/Output 1: 

Input:

mcabcdeng 
SKILLRACK 

Output: YES

Explanation: 

Here both the string values have a vowel or a consonant at the same position. 

m S - consonants 
c K - consonants 
a I - vowels 
b L - consonants 
c L - consonants 
d R - consonants 
e A - vowels 
n C - consonants
g K - consonants 

Hence the output is YES. 

Example Input/Output 2: 

Input: 

yogaa
power 

Output: NO

SOLUTION:
*/

#include <iostream>
#include<string.h>
using namespace std;

int main(int argc, char** argv)
{
    char s[1001];
    char t[1001];
    cin>>s>>t;
    int l = strlen(s);
    for(int i=0; i<l; i++)
    {
        if(strchr("AEIOUaeiou", s[i]) == strchr("AEIOUaeiou", t[i]))
        {
            continue;          
        }
        else if(strchr("AEIOUaeiou", s[i]) && strchr("AEIOUaeiou", t[i]))
        {
            continue;
        }
        else 
        {
            cout<<"NO";
            return 0;
        }
        
    }
    cout<<"YES";
}

/*
PY3:
S1 = input().strip()
S2 = input().strip()
Count_1 = Count_2 = 0
Vowels = "aAeEiIoOuU"
for i in range(len(S1)):
    if S1[i] in Vowels and S2[i] in Vowels:
        Count_1 += 1
    if S1[i] not in Vowels and S2[i] not in Vowels:
        Count_2 += 1
print("YES" if (Count_1 + Count_2) == len(S1) else "NO")

C:
#include<stdio.h>
#include<stdlib.h>

int vowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        return 1;
    }
    return 0;
}
int main()
{
    char s1[1000], s2[1000];
    scanf("%s\n%s", s1, s2);
    int a = strlen(s1), d = 0;
    for(int i=0; i<a; i++)
    {
        if((vowel(s1[i]) == 0 && vowel(s2[i]) == 0) || (vowel(s1[i]) == 1 && vowel(s2[i]) == 1))
        {
            d++;
        }
    }
    if(d == a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
*/
