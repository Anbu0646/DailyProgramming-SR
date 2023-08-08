/*
The program must accept an integer X and swap the first occurring odd and even digit. 
The integer X will have at least one odd and one even digit. 
Consider 0 (zero) also as an even digit. 

Boundary Condition(s): 10 <= X <= 10^8 

Input Format:  The first line contains X. 

Output Format: The first line contains the modified integer value. 

Example Input/Output 1: 

Input:  12345 

Output: 21345 

Example Input/Output 2: 

Input:  106 

Output: 16

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int i = 0;
    
    while(s[i] && s[i] % 2 == 0)
    {
        i++;
    }
  
    int j = 0;
  
    while(s[j] && s[j] % 2)
    {
        j++;
    }
  
    swap(s[i], s[j]);
    cout<<stol(s);
}

/*
C:

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,x,a,b,e=0,o=0;
char s[1000],c;
scanf("%s%n",s,&n);
for(i=0;i<n;i++){
    x=s[i]-'0';
    if(x%2==0 && e==0){
        a=i;
        e=1;
    }
    if(x%2!=0 && o==0){
        b=i;
        o=1;
    }
}
c=s[a];
s[a]=s[b];
s[b]=c;
printf("%d",atoi(s));

PY3:
x=input().strip()
x=list(x)
for i in range(len(x)):
    if int(x[i])%2==0:
        break
for j in range(len(x)):
    if int(x[j])%2!=0:
        break
x[i],x[j]=x[j],x[i]
x="".join(x)
print(int(x))
}
*/
