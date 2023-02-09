'''
The program must accept a matrix of size NxN as the input. 
The program must print two different columns in the matrix based on the following condition. 

The program must print the column C1 having the largest integer in the matrix then the program must print the column C2 having the largest integer in the matrix excluding the column C1. 

Note: If more than one column exist with the largest integer, print the first occurring column. 
      Also if more than one column exist with next greater integer value, print the first occurring column. 

Boundary Condition(s): 2 <= N <= 100 

Input Format:  The first line contains N. 
               The next N lines contain N integers each separated by a space.
Output Format: The first N lines contain two integers each separated by a space. 

Example Input/Output 1:

Input:  4 
        19 27 24 21
        30 16 1  13
        35 18 29 9
        4  21 4  18 
Output: 19 24
        30 1 
        35 29 
        4  4 

Explanation: The largest integer in the matrix is 35 which is in the first column. So the first column is printed. 
The next greater value in other columns is 29 which is in the third column. So the third column is printed.

Example Input/Output 2:

Input:  6 
        66 68 76 15 24 32 
        32 30 39 71 95 80
        59 37 61 91 11 78 
        45 84 58 87 15 10 
        19 47 56 44 71 92
        27 21 62 22 27 55 
Output: 24 32 
        95 80 
        11 78
        15 10
        71 92
        27 55
        
 SOLUTION:
 '''
n = int(input())
matrix = zip(*[list(map(int, input().split())) for i in range(n)])
matrix = sorted(matrix, key=max, reverse=True)
for i in range(n): print(matrix[0][i], matrix[1][i])
      
'''
n=int(input())
l=[list(map(int,input().split())) for _ in range(n)]

m=0
mc1=0
for r in range(n):
    for c in range(n):
        if l[r][c]>m:
            mc1=c
            m=l[r][c]

m=0
mc2=0
for r in range(n):
    for c in range(n):
        if c!=mc1:
            if l[r][c]>m:
                mc2=c
                m=l[r][c]

for r in range(n):
    print(l[r][mc1],l[r][mc2])
'''
