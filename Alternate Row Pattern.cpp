/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 26 

Input Format:  The first line contains N.

Output Format: The first N lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 

Output: 

ab
a 
abcd 
abc 

Example Input/Output 2: 

Input:  7 

Output: 

ab
a 
abcd 
abc
abcdef 
abcde
abcdefgh

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int r = (n % 2 != 0) ? n - 1 : n;
    int ev = 2, od = 1;
    for(int i=0; i<r; i++)
    {
        char ch = 'a';
        if(i % 2 == 0)
        {
            for(int j=0; j<ev; j++)
            {
                cout<<ch;
                ch++;
            }
            ev += 2;
        }
        else
        {
            for(int j=0; j<od; j++)
            {
                cout<<ch;
                ch++;
            }
            od += 2;
        }
        cout<<endl;
    }
    if(n % 2 != 0)
    {
        char ch = 'a';
        for(int i=0; i<=n; i++)
        {
            cout<<ch;
            ch++;
        }
    }
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, Count_1 = 1, Count_2 = 2;
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
    {
        if(i % 2 == 0)
        {
            for(int j=97; j<97 + Count_1; j++)
            {
                printf("%c", j);
            }
                Count_1 += 2;
                printf("\n");
        }
        else
        {
            for(int j=97; j<97 + Count_2; j++)
            {
                printf("%c", j);
            }
                Count_2 += 2;
                printf("\n");
        }
    }
}

PY3:
n = int(input()); x, y = 2, 1
def pr(j):
    for j in range(97, 97 + j):
        print(chr(j),end="")
    print()
for i in range(n):
    if i % 2 == 0:
        pr(x); x += 2
    else:
        pr(y); y += 2
*/
