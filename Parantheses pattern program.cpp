/*
The program must accept a string S as the input.
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= Length of S <= 1000 

Input Format:  The first line contains S. 

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  SkillRack

Output: 

(S)killRac(k) 
S(k)illRa(c)k 
Sk(i)llR(a)ck 
Ski(l)l(R)ack
Skil(l)Rack 

Example Input/Output 2: 

Input:  hide 

Output: 

(h)id(e)
h(i)(d)e

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{

string s;
cin>>s;
int i = 0, j = s.size()-1;

while(i <= j)
{
    for(int z=0; z<s.size(); z++)
    {
        if(z == i)
        {
            cout<<"("<<s[z]<<")";
        }
        else if(z == j)
        {
            cout<<"("<<s[z]<<")";
        }
        else
        {
            cout<<s[z];
        }
    }
    cout<<endl;
    i++;
    j--;
}

}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[10001];
    scanf("%s", s);
    int j = strlen(s) - 1;
    for(int i=0; i<=j; i++, j--)
    {
        for(int k=0; k<strlen(s); k++)
        {
            if(i == k || j == k)
            {
                printf("(%c)", s[k]);
            }
            else
            {
                printf("%c", s[k]);
            }
        }
        printf("\n");
    }
}


PY3:
a = input()
k = (len(a) // 2)
if len(a) % 2 != 0:
   k += 1
n = 0
m = len(a) - 1
for i in range(k):
    for j in range(0, len(a)):
        
        if j == n or j == m:
                
            print("(" + a[j] + ")", end = "")
        else:
            print(a[j], end = "")
    print()
    n += 1
    m -= 1
*/
