/*
The program must accept an integer N as the input.
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= N <= 100 

Input Format:  The first line contains N. 

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1:

Input:  5

Output: 

1*3*5 
-7*9 
--11

Example Input/Output 2: 

Input:  8 

Output: 

2*4*6*8
-10*12*14 
--16*18 
---20

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int k=(n%2!=0)?1:2;
    if(k==1)
    {
        int x=k;
        int half=(n/2);
        for(int i=0;i<half+1;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"-";
            }
            for(int j=0;j<half-i+1;j++)
            {
                if(j<half-i)
                {
                    cout<<x<<"*";
                }
                else
                {
                    cout<<x;
                }
                x+=2;
            }
            cout<<endl;
        }
    }
    else
    {
        int x=k;
        int half(n/2);
        for(int i=0;i<half;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"-";
            }
            for(int j=0;j<half-i;j++)
            {
                if(j<half-i-1)
                {
                    cout<<x<<"*";
                }
                else
                {
                    cout<<x;
                }
                x+=2;
            }
            cout<<endl;
        }
    }
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;scanf("%d",&n);int l=0,k=n,p=0,m=0;
    if(n%2==0) {p=1;k=n-1;m=n/2;}
    else {p=0;k=n;m=(n/2)+1;}
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<l;j++) {printf("-");}p++;
        for(int j=1;j<=k;j++) {
            if(j%2!=0) printf("%d",p);
            else printf("*");
            p++;
        }
        printf("\n");l++;k-=2;
    }
}

PY3:
import math
n = int(input())
m = math.ceil(n/2.0)
t=2 if(n%2==0) else 1
for i in range(m):
    for k in range(i):
        print('-',end='')
    for j in range(m):
        if(j!=m-1):
            print(str(t)+"*",end='')
        else:
            print(str(t),end='')
        t+=2
    print("")
    m-=1



n = int(input())

if n%2==0:
    v = 2
    for i in range(n//2):
        #v = 1
        for j in range(i):
            print("-",end="")
        for j in range(n-i-i-1):
            if j%2==0:
                print(v,end="")
                v+=2
            else:
                print("*",end="")
        print()
else:
    v=1
    for i in range(n//2+1):
        for j in range(i):
            print("-",end="")
        for j in range(n-i-i):
            if j%2!=0:
                print("*",end="")
            else:
                print(v,end="")
                v+=2
        print()

*/
