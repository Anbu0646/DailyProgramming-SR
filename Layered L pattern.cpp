/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 100 

Input Format:  The first line contains N. 

Output Format: The first N lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  5

Output: 

1 
1 2 
1 2 3
1 2 2 2 
1 1 1 1 1 

Example Input/Output 2: 

Input:  10 

Output: 

1 
1 2
1 2 3 
1 2 3 4 
1 2 3 4 5
1 2 3 4 5 5
1 2 3 4 4 4 4
1 2 3 3 3 3 3 3 
1 2 2 2 2 2 2 2 2
1 1 1 1 1 1 1 1 1 1

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
  
    for(int i=1; i<=n; i++)
    {
        int c = 1;
      
        for(int j=1; j<=i; j++)
        {
            if(i < n/2 + 1)
            {
                cout<<c<<" ";
                c++;
            }
            else if(i > n/2)
            {
               if(j <= n - i)
               {
                   cout<<c<<" ";
                   c++;
               }
               else
               {
                   cout<<c<<" ";
               }
            }
        }
        cout<<endl;
    }
}

/*
PY3:
n = int(input())
lis = []
for i in range(1, n + 1):
    if i <= (n + 1)//2:
        k = list(range(1, i + 1))
        lis.append(k)
        print(*k)
    else:
        j = lis[n - i]
        print(*j + [j[-1]] * (i - len(j)))
        
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    k = (n/2);
    if(n % 2 != 0)   
       k = (n/2) + 1;
    for(int i=1; i<=k; i++)
    {
        for(int j=1; j<=i; j++) 
            printf("%d ", j);
         printf("\n");
    }
    if(n % 2 != 0) 
       k -= 1;
    int v = k;
    for(int i=n - k + 1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j >= v) 
               printf("%d ", v);
            else printf("%d ", j);
        }
        printf("\n");
        v -= 1;
    }
}   
*/
