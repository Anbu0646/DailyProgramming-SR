'''
The program must accept a character matrix of size RxC containing only lower case alphabets as the input. 
The program must print the count of rows in the matrix where the alphabets are sorted in alphabetical order as the output. 

Boundary Condition(s): 2 <= R, C <= 50 

Input Format:

The first line contains R and C separated by a space. 
The next R lines each contain C characters separated by a space. 

Output Format: The first line contains the count of rows in the matrix where the alphabets are sorted in alphabetical order. 

Example Input/Output 1: 

Input: 

5 4 
a s d f h 
i j k z x 
y q r s t 
u u t x k 

Output: 2

Explanation: 

In 5x4 matrix, the alphabets in the second row and the fourth row are sorted in alphabetical order.
Second row: h i j k 
Fourth row: r s t u 
Hence the output is 2.

Example Input/Output 2:

Input: 

3 3
i j o 
a z b 
p c e 

Output: 1

SOLUTION:
'''

r, c = map(int, input().strip().split())
mat = []
for i in range(r):
    li = list(map(str, input().strip().split()))
    mat.append(li)
count = r
for i in range(r):
    for j in range(c - 1):
        if mat[i][j] > mat[i][j + 1]:
            count -= 1
            break
print(count)

x, y = map(int, input().split())
a = [input().split() for i in range(x)]
print(len([i for i in a if i == sorted(i)]))

'''
C:
#include<stdio.h>
#include<stdlib.h>

int sort(char c[], int b)
{
    int f = 0;
    for(int i = 0; i < b - 1; i++)
    {
        for(int j = 0; j <b - i - 1; j++)
        {
            if(c[j] > c[j + 1])
            {
                f++;
               return f;
            }
        }
    }
    
    return f;
    
}

int main()
{
    int a, b;
    int f = 0;
    scanf("%d %d\n", &a, &b);
    for(int i = 0; i < a; i++)
    {
        char c[b];
        for(int j = 0; j < b; j++)
            scanf("%c ", &c[j]);
        if(sort(c, b) == 0)    
            f++;
    }
    printf("%d ", f);
}


CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int r, c;
    cin>>r>>c;
    char k, p;
    int count = 0, flag;
    for(int i = 0; i < r; i++)
    {
        cin>>p;
        flag = 1;
        for(int j = 1; j < c; j++)
        {
            cin>>k;
            if(k < p)
            {
                flag = 0;
            }
            p = k;
        }
        if(flag == 1)
        {
            count++;
        }
    }
    cout<<count;
}
'''
