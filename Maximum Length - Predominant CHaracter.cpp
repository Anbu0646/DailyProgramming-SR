/*
The program must accept N string values as the input. 
For each string S among the N string values, the program must replace the string based on the following conditions. 
- If the count of alphabets is greater than or equal to the count of non-alphabets in S then replace the string by removing all the non-alphabets in S. 
- If the count of alphabets is less than the count of non-alphabets in S then replace the string by removing all the alphabets in S. 
Finally, the program must print the string having the maximum length among the N modified string values as the output. 
If more than one string has the maximum length then print the first occurring string as the output. 

Boundary Condition(s): 1 <= N, Length of each string <= 100 

Input Format: 

The first line contains N.
The next N lines each contain a string value. 

Output Format: The first line contains a string value as per the given conditions. 

Example Input/Output 1: 

Input: 

5 
123Abcd###
99@xyz.com 
a4B3c2D1 
SD100FG-qw500er
x1a2y3b4z5c6 

Output: SDFGqwer 

Explanation: 

After replacing the 5 string values, the string values becomes 
123### 
xyzcom
aBcD
SDFGqwer 
xaybzc 
Here the string SDFGqwer is having the maximum length 8. 
So SDFGqwer is printed as the output. 

Example Input/Output 2: 

Input:

3
1000USD
7839HKD
1460AUD 

Output: 1000

SOLUTION:
*/

0 0 1458
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
int n;
cin>>n;
int mcnt = 0;
string ans = "";
for(int i=0; i<n; i++)
{
    string s;
    cin>>s;
    int acnt = 0, bcnt = 0;
    string z1 = "", z2 = "";
    for(int j=0; j<s.length(); j++)
    {
        if(isalpha(s[j]))
        {
            acnt++;
            z1 += s[j];
        }
        else
        {
            bcnt++;
            z2 += s[j];
        }
    }
    if(acnt > bcnt && acnt > mcnt)
    {
        mcnt = acnt;
        ans = z1;
    }
    else if(bcnt > acnt && bcnt > mcnt)
        {
            mcnt = bcnt;
            ans = z2;
        }
    }
    cout<<ans;
}


/*
C:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,m=-1;
    scanf("%d",&n);
    char s[101],cc[101];
    for(int i=0; i<n; i++){
        scanf("%s",&s);
        char aa[101],dd[101];
        int a=0, d=0;
        for(int j=0; s[j]; j++){
            if((s[j]>='A' && s[j]<='Z') || (s[j]>='a' && s[j]<='z')) aa[a++]=s[j];
            else dd[d++]=s[j];
        }
        aa[a]='\0';
        dd[d]='\0';
        if(a>=d){
            if(a>m){
                m=a;
                strcpy(cc,aa);
            }
        }
        else{
            if(d>m){
                m=d;
                strcpy(cc,dd);
            }
        }
    }
    printf("%s",cc);
}

PY3:
N = int(input())
Modified_String = []

for i in range(N):
    Strings = input().strip()
    Replaced_Strings_1 = " "
    Replaced_Strings_2 = " "
    for j in range(len(Strings)):
        if Strings[j].isalpha():
            Replaced_Strings_1 += Strings[j]
        else:
            Replaced_Strings_2 += Strings[j]
    Modified_String.append(Replaced_Strings_1)
    Modified_String.append(Replaced_Strings_2)
    
print(max(Modified_String, key = len))
*/
