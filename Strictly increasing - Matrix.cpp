/*
The program must accept an integer matrix of size RxC as the input. 
The program must print YES if the matrix is a strictly increasing matrix. 
Else the program must print NO as the output. 
In a strictly increasing matrix, all the integers in each row (left to right) and all the integers in each column (top to bottom) are in strictly increasing order. 

Boundary Condition(s): 2 <= R, C <= 100 

Input Format:  

The first line contains R and C separated by a space. 
The next R lines each contain C integers separated by a space. 

Output Format: 

The first line contains YES or NO. 

Example Input/Output 1: 

Input: 

4 5 
1 3 5 6 7 
3 6 7 8 9 
5 7 8 9 10 
8 9 10 11 12 

Output: YES 

Explanation: 

In the above matrix, all the integers in each row from left to right and all the integers in each column from top to bottom are in strictly increasing order. 
Hence the output is YES. 

Example Input/Output 2: 

Input: 

3 3 
1 2 3 
2 5 6 
3 4 7

Output: NO

Solution:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int r, c;
    cin>>r>>c;
    
    int mat[r][c];
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>mat[i][j];
    
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c - 1; j++)
        {
            if(mat[i][j] >= mat[i][j + 1])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    
    for(int j=0; j<c; j++)
    {
        for(int i=0; i<r - 1; i++)
        {
            if(mat[i][j] >= mat[i + 1][j])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}

/*
PY3:

R, C = map(int, input().split())
Mat = [list(map(int, input().split())) for i in range(R)]
Flag = 0

for i in range(R):
    for j in range(C):
        if j > 0 and Mat[i][j] <= Mat[i][j - 1]:
            Flag = 1
        if i > 0 and Mat[i][j] <= Mat[i - 1][j]:
            Flag = 1

if Flag:
    print("NO")
else:
    print("YES")

*/
