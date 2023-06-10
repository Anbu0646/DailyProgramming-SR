/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 100 

Input Format: 

The first line contains the value of N. 

Output Format: 

The first N lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 4 

Output: 

1 
9 2 
8 10 3 
7 6 5 4 

Example Input/Output 2: 

Input: 7 

Output: 

1 
18 2 
17 19 3 
16 27 20 4 
15 26 28 21 5 
14 25 24 23 22 6 
13 12 11 10 9 8 7

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int a[n][n], ctr = 1, lim = ((n + 1) * n) / 2, u = 0, d = n - 1, l = 0 , r = 0;
  
    while(ctr <= lim)
    {
        int i, j;
        for(i=u, j=r; i<=d; i++, j++)
        {
            a[i][j] = ctr++;
        }
          
        j -= 2;
      
        for(; j>=l; j--)
        {
            a[d][j] = ctr++;
        }
      
        for(j = l, i = d - 1; i>u; i--)
        {
            a[i][l] = ctr++;
        }
      
        l++;
        u += 2;
        d--;
        r++;
    }
  
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
