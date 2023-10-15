/*
The program must accept N string values as the input. 
The program must print those N string values vertically as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N, Length of each string <= 100 

Input Format:  The first line contains N. The second line contains N string values separated by a space.

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 

3 
All is well

Output: 

Aiw 
lse 
l*l 
**l 

Example Input/Output 2:

Input:  

4 
Robotic process automation RPA

Output:

RpaR
oruP
botA 
oco* 
tem* 
isa*
cst*
**i* 
**o* 
**n*

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n, maxx = 0;
    cin>>n;
    vector<string> v1(n, "");
    
    for(int i=0; i<n; i++) 
    {
        cin>>v1[i];
        int si = v1[i].size();
        maxx = max(maxx, si);
    }
  
    for(int i=0; i<maxx; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i < v1[j].size()) cout<<v1[j][i];
            else cout<<"*";
        }
        cout<<endl;
    }
}

/*
c:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i = 0, max = 0;
    scanf("%d ", &n);
    char s[n][101];
    int l[n];
    while(scanf("%s ", s[i]) > 0)
    {
        l[i] = strlen(s[i]);
        if(max < l[i])
        max = l[i];
        i++;
    }
    for(int i=0; i<max; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(l[j] > 0)
            printf("%c", s[j][i]);
            else 
            printf("*");
            l[j]--;
        }
        printf("\n");
    }
}

PY3:
n = int(input())
l = list(map(str, input().strip().split()))
l1 = sorted(l, key = len)
for i in range(len(l1[-1])):
    for j in range(n):
        if i < len(l[j]):
            print(l[j][i], end = '')
        else:
            print('*', end = '')
    print()
*/
