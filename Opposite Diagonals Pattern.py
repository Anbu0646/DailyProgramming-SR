'''
The program must accept an integer matrix of size NxN as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= N <= 50

Input Format:  

The first line contains N.
The next N lines each contain N integers separated by a space.

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:

Input: 

3
1 2 3 
4 5 6
7 8 9 

Output: 

1
2 4 
3 5 7
6 8 
9

Example Input/Output 2: 

Input : 

2 
1 2
3 4

Output:

1 
2 3 
4 

Example Input/Output 3:

Input : 

5 
65 72 68 52 24
57 83 61 77 86 
41 19 74 44 32 
86 20 69 40 63 
27 97 46 82 31 

Output: 

65
72 57 
68 83 41 
52 61 19 86 
24 77 74 20 27 
86 44 69 97
32 40 46
63 82
31

SOLUTION:
'''

n = int(input())
m = []
for i in range(n):
    row = input().split()
    m.append(row)
    
for i in range(n):
    for j in range(i + 1):
        print(m[j][i - j], end = ' ')
    print()

for i in range(1, n):
    for j in  range(i, n):
        print(m[j][n + i - j - 1], end = ' ')
    print()
  
'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    for(int i = 0; i < n; i++)
    {
        for(int k = 0, j = i; k <= i, j >= 0; k++, j--)
            printf("%d ", arr[k][j]);
        printf("\n");
    }
    for(int i = 1; i < n; i++)
    {
        for(int k = i, j = n - 1; k < n, j >= i; k++, j--)
            printf("%d ", arr[k][j]);
        printf("\n");
    }
}

CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int mat[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
        }
    }
    map<int, vector<int>>m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int sum = i + j;
            m[sum].push_back(mat[i][j]);
        }
    }
    for(auto i:m)
    {
        for(auto j:i.second)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
'''
