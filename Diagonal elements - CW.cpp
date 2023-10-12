/*
The program must accept an integer matrix of size NxN as the input. 
The program must print all the diagonal elements of the matrix in circularly clockwise direction as the output. 

Boundary Condition(s): 2 <= N <= 100 

Input Format:  

The first line contains N. 
The next N lines contain N integers each separated by a space. 

Output Format:  The first line contains all the diagonal elements of the matrix separated by a space. 

Example Input/Output 1: 

Input: 

4 
1 2 3 4 
5 6 7 8 
9 10 11 12
13 14 15 16

Output: 

1 4 16 13 6 7 11 10 

Explanation: 

In the 4x4 matrix, all the diagonal elements are highlighted below 

1 2 3 4 5 6 7 8 9  10 11 12 13 14 15 16 

So the diagonal elements are printed in the circularly clockwise direction. 

Hence the output is 1 4 16 13 6 7 11 10.

Example Input/Output 1:

Input: 

3
10 20 30 
40 50 60
70 80 90 

Output: 10 30 90 70 50

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int>(n));
    for(auto&i:v) 
        for(auto&j:i) 
            cin>>j;

    int tlr = 0, tlc = 0, trr = 0, trc = n - 1;
    int blr = n - 1, blc = 0, brr = n - 1, brc = n - 1;

    for(int i=1; i<=n/2; i++)
    {
        cout<<v[tlr][tlc]<<" "<<v[trr][trc]<<" ";
        cout<<v[brr][brc]<<" "<<v[blr][blc]<<" ";
        ++tlr;
        ++tlc;
        ++trr;
        --trc;
        --blr;
        ++blc;
        --brr;
        --brc;
    }

    if(n % 2) cout<<v[tlr][tlc];
  
}
/*
PY3:
n = int(input())
li = [list(map(int, input().split())) for i in range(n)]
for i in range(n//2):
    print(li[i][i], end = " ")
    print(li[i][n - i - 1], end = " ")
    print(li[n - i - 1][n - i - 1], end = " ")
    print(li[n - i - 1][i], end = " ")
if n % 2:
    print(li[n//2][n//2])
    
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d ", &n);
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d ", &a[i][j]);
    }
    int j = n - 1;
    for(int i=0; i<=j; i++)
    {
        if(i!=j)
        {
        printf("%d %d ", a[i][i], a[i][n - i - 1]);
        printf("%d %d ", a[j][j], a[j][n - j - 1]);
        }
        if(i == j)
        printf("%d ", a[i][i]);
        j--;
    }

}
        
*/
