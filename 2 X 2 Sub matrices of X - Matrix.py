'''
The program must accept an integer matrix of size RxC and an integer X (where X has occurred at least once in the matrix) as the input.
The program must print all submatrices of size 2x2, containing the integer X at least once as shown in the Example Input/Output section. 

Boundary Condition(s):

2 <= R, C <= 50
1 <= Matrix element value, X <= 1000

Input Format: 

The first line contains R and C separated by a space. 
The next R lines each contain C integers separated by a space. 
The (R+2)nd line contains X. 

Output Format: The lines contain the list of 2x2 submatrices containing the integer X as shown in the Example Input/Output section. 

Example Input/Output 1:

Input:

4 4 
10 20 30 40
45 78 56 89
12 56 23 10 
48 98 26 55
56 

Output:

20 30 
78 56 
30 40
56 89 
45 78 
12 56 
78 56
56 23 
56 89 
23 10 
12 56 
48 98 
56 23
98 26

Explanation:

Here X = 56. 
There are seven 2x2 submatrices containing the integer 56.
So they are printed as the output. 

Example Input/Output 2:

Input: 

5 3 
5 8 6
8 8 2 
2 9 9 
8 3 5
6 5 7 
6 

Output: 

8 6 
8 2 
8 3 
6 5

SOLUTION:
'''

x, y = map(int, input().split())
mj = [list(map(int, input().split())) for i in range(x)]
a = int(input())
for i in range(x - 1):
    for j in range(y - 1):
        if mj[i][j] == a or mj[i + 1][j] == a or mj[i][j +1 ] == a or mj[i + 1][j + 1] == a:
            print(mj[i][j], mj[i][j + 1])
            print(mj[i + 1][j], mj[i + 1][j + 1])
            
'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m, n, x; 
    scanf("%d %d\n", &m, &n); 
    int arr[m][n]; 
    
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    
    scanf("%d", &x); 
    
    for(int i = 0 ; i < m - 1 ; i++)
    {
        for(int j = 0 ; j < n - 1 ; j++)
        {
            if(arr[i][j] == x || arr[i + 1][j] == x || arr[i][j + 1] == x || arr[i + 1][j + 1] == x)
            {
                printf("%d %d \n %d %d\n", arr[i][j], arr[i][j + 1], arr[i + 1][j], arr[i + 1][j + 1]);
            }
        }
    }
}

CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    
    int r,c;
    cin >> r >> c;
    
    
    int mat[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
    
    int e;
    cin >> e;
    
    
    for(int i = 0; i < r - 1; i++)
    {
        for(int j = 0; j < c - 1; j++)
        {
            if(mat[i][j] == e or mat[i + 1][j] == e or mat[i][j + 1] == e or mat[i + 1][j + 1] == e)
            {
                cout << mat[i][j] << " " << mat[i][j + 1] << endl;
                cout << mat[i + 1][j] << " " <<mat[i + 1][j + 1] << endl;
            }
            
        }
    }

}
'''
