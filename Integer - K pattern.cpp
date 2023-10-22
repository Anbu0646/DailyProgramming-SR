/*
The program must accept an odd integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 5 <= N <= 99 

Input Format:  The first line contains N. 

Output Format: The first N lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  5 

Output: 

1 * 1
2 2 *
3 * *
4 4 *
5 * 5 

Example Input/Output 2: 

Input: 7

Output: 

1 * * 1 
2 * 2 * 
3 3 * * 
4 * * * 
5 5 * * 
6 * 6 * 
7 * * 7

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin>>N;
    int len = (N / 2) + 1;
    
    for(int i=0; i<N; i++, cout<<endl)
    {
        for(int j=0; j<len; j++)
        {
            if(j == 0 || i + j == len - 1 || i - j == len - 1)
            {
                cout<<i + 1<<" ";
            }
            else
            {
                cout<<"* ";
            }
        }
    }
}

/*
PY3:
n = int(input())
k = (n // 2)
for i in range(1, 1 + n):
    for j in range((n // 2) + 1):
        if j == 0 or j == k:
            print(i, end = ' ')
        else: print('*', end = ' ')
    print()
    if i <= n//2:
        k -= 1
    else:
        k += 1
        
C:

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    m = n/2 + 1;
    int x = m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(j == x || j == 1)
            {
                printf("%d ", i);
            }
            else
            {
                printf("* ");
            }
        }
        if(i <= n/2)
        {
            x--;
        }
        else
        {
            x++;
        }
        printf("\n");
    }
}
*/
