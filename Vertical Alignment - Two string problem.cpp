/*
The program must accept two string values S1 and S2 with spaces as the input. 
The program must align the characters in the vertically down side and then print them as shown in the Example Input/Output section. 

Note: After aligning both string values, all the white space characters must be replaced by hyphens. 

Boundary Condition(s): 2 <= Length of S1, S2 <= 1000 

Input Format: 

The first line contains S1. 
The second line contains S2. 

Output Format: 

The first line contains the modified S1. 
The second line contains the modified S2. 

Example Input/Output 1: 

Input:  

hello world 
i am very happy 

Output: 

h-ll--wor-d---- 
ieamoverylhappy 

Example Input/Output 2: 

Input: 

this is long text 
its not long 

Output: 

thi--is-long----- 
itssnot-long-text

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    s1.pop_back();
    int n = s1.size(), m = s2.size();

    for(int i=0; i<max(n, m); i++)
    {
        if(i < n)
        {
            if(s1[i] == ' ' || s1[i] == '\r') 
               s1[i]='-';
        }
        else s1.push_back('-');
        if(i<m)    
        {
            if(s2[i] == ' ') 
               s2[i]='-';
        }
        else s2.push_back('-');
    }
    
    int x = max(n, m);

    for(int i=0; i<x; i++)
    {
        if(s2[i] == '-')
            swap(s2[i], s1[i]);
    }

    cout<<s1;
    cout<<"\n";
    cout<<s2;

}

/*
PY3:
S1 = input().strip()
S2 = input().strip()
Res1 = ""
Res2 = ""
i = 0
Max = max(len(S1), len(S2))

while i < Max:
    if i < len(S1):
        if i < len(S2):
            if S1[i].isalpha() and S2[i].isalpha():
                Res1 += S1[i]
                Res2 += S2[i]
            elif S1[i].isalpha() and S2[i] == ' ':
                Res1 += '-'
                Res2 += S1[i]
            elif S1[i] == ' ' and S2[i].isalpha():
                Res1 += '-'
                Res2 += S2[i]
            elif S1[i] == ' ' and S2[i] == ' ':
                Res1 += '-'
                Res2 += '-'
        else:
            if S1[i] == ' ':
                Res2 += '-'
                Res1 += '-'
            else:
                Res1 += '-'
                Res2 += S1[i]
    else:
        Res1 += '-'
        if i < len(S2):
            if S2[i] == ' ':
                Res2 += '-'
            else:
                Res2 += S2[i]
    i += 1

print(Res1)
print(Res2)

a,b = list(input().strip().replace(' ','-')),list(input().strip())  

if len(a)>len(b): 
    b+=[' ']*(len(a)-len(b)) 
else:
    a+=['-']*(len(b)-len(a)) 

for i in range(len(a)): 
    if b[i]==' ':b[i],a[i]=a[i],'-'

print(''.join(a))
print(''.join(b))


C:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void verticalalign(char *s1,char *s2,int l1,int l2)
{
    int min, max, i;
    l1--;
    if(l1 < l2)
    {
        min = l1;
        max = l2;
    }
    else
    {
        min = l2;
        max = l1;
    }
    if(min == l1)
    {
        for(i=min; i<l2; i++)
        {
            s1[i] = ' ';
        }
        s1[max] = '\0';
    }
    else
    {
        for(i=min; i<l1; i++)
        {
            s2[i] = ' ';
        }
        s2[max] = '\0';
    }
    for(i=0; i<max; i++)
    {
        if(s2[i] == ' ')
        {
            s2[i] = s1[i];
            if(s1[i] == ' ')
            {
                s2[i] = '-';
            }
            s1[i] = '-';
        }
        if(s1[i] == ' ')
        {
            s1[i] = '-';
        }
    }
    return;
}

int main()
{
    char s1[1001], s2[1001];
    scanf("%[^\n]\n%[^\n]", s1, s2);
    int l1 =s trlen(s1), l2 = strlen(s2);
    verticalalign(s1, s2, l1, l2);
    printf("%s\n%s", s1, s2);
    return 0;
}
*/
