'''
The program must accept an integer matrix of size RxC as the input. 
The program must print the mirror image of the matrix as the output. 

Boundary Condition(s): 1 <= R, C <= 100

Input Format: 

The first line contains R and C separated by a space. 
The next R lines each contain C integers separated by a space. 

Output Format:
The first R lines each contain C integers representing the mirror image of the matrix. 

Example Input/Output 1: 

Input: 

2 3 
1 2 3 
4 5 6 

Output: 

3 2 1
6 5 4 

Example Input/Output 2: 

Input: 

4 4
10 54 78 96 
36 59 24 87 
82 69 23 64 
16 26 87 12 

Output: 

69 87 45 01
78 42 95 63
46 32 96 28 
21 78 62 61

SOLUTION:
'''

a, b = map(int, input().split())
x = []

for i in range(a):
    p = list(map(str, input().split()))
    for i in range(b):
        p[i] = p[i][::-1]
    p = p[::-1]
    x.append(p)
  
for i in range(a):
    for j in range(b):
        print(x[i][j], end = " ")
    print()





#Aliter:
n, m = map(int, input().split())
a = []
for i in range(n):
    a.append(list(map(str, input().split())))
for i in range(n):
    for j in range(m - 1, -1, -1):
        print(a[i][j][::-1], end=" ")
    print()
'''
CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r, c;
    cin>>r>>c;
    string ar[r][c];
    
    for(int i = 0; i < r; i++)
    {
        vector<string> s;
        for(int j = 0; j < c; j++)
        {
            string r;
            cin>>ar[i][j];
            r += ar[i][j];
            reverse(r.begin(), r.end());
            s.push_back(r);
        }
        
        reverse(s.begin(), s.end());
        
        for(auto i:s)
        {
            cout<<i<<" ";
        }
        
        cout<<endl;
    }
}
'''
