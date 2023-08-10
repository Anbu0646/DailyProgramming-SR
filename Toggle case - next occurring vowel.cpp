/*
The program must accept a string S containing only alphabets as the input. 
For each consonant in S, the program must toggle the case of the next occurring vowel. 
If there is no vowel occurring after the consonant, then the case of the consonant must be toggled. 
Finally, the program must print the modified string S as the output. 

Boundary Condition(s): 1 <= Length of S <= 10^5 

Input Format: The first line contains S.

Output Format: The first line contains the modified string value. 

Example Input/Output 1: 

Input:  WATER 

Output: WaTer 

Explanation: 

The 1st consonant in the string "WATER" is 'W' and the next vowel of 'W' is 'A'. 
So the case of 'A' is toggled. Now the string becomes "WaTER".
The 2nd consonant in the string "WATER" is 'T' and the next vowel of 'T' is 'E'. 
So the case of 'E' is toggled. 
Now the string becomes "WaTeR" The 3rd consonant in the string "WATER" is 'R' and there is no vowel after 'R'. 
So the case of 'R' is toggled. 
Now the string becomes "WaTer" 
Hence the output is WaTer. 

Example Input/Output 2: 

Input: apple 

Output: applE

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
    string s;
    cin>>s;
  
    for(int i=0; i<s.length(); i++)
    {
        if(!isvow(s[i]))
        {
            int f = 0;
            for(int j=i + 1; j<s.length(); j++)
            {
                if(isvow(s[j]))
                {
                    if(isupper(s[j]))
                    {
                        s[j] = tolower(s[j]);
                    }
                    else
                    {
                        s[j] = toupper(s[j]);
                    }
                    f = 1;
                    break;
                }
            }
            if(f == 0)
            {
                if(isupper(s[i]))
                {
                    s[i] = tolower(s[i]);
                }
                else
                {
                    s[i] = toupper(s[i]);
                }
            }
        }
    }
    cout<<s;
}

/*
PY3:

s=list(input())
for i in range(len(s)):
    
    f=0
    if s[i].lower() not in 'aeiou':
        for j in range(i+1,len(s)):
            if s[j].lower() in 'aeiou':
                s[j]=s[j].swapcase()
                f=1
                break
        if f==0:
            s[i]=s[i].swapcase()
print(*s,sep="")

        
c:

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[100000];
    scanf("%s",a);
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        int f=0;
        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='A' && a[i]!='E' && a[i]!='I' && a[i]!='O' && a[i]!='U')
        {
            for(int j=i+1;j<len;j++)
            {
                if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u' || a[j]=='A' || a[j]=='E' || a[j]=='I' || a[j]=='O' || a[j]=='U')
                {
                    if(islower(a[j]))
                    {
                        a[j]=toupper(a[j]);
                        f=1;
                        
                        break;
                    }
                    else
                    {
                        a[j]=tolower(a[j]);
                        f=1;
                        break;
                    }
                }
            }
            
            if(f==0)
            {
                if(isupper(a[i]))
                {
                    a[i]=tolower(a[i]);
                }
                else
                {
                    a[i]=toupper(a[i]);
                }
            }
        }
    }
    
    for(int i=0;i<len;i++)
    {
        printf("%c",a[i]);
    }

}
*/
