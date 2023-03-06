'''
The program must accept a positive odd integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= N <= 999

Input Format:  The first line contains the value of N.
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1: 

Input:  5 
Output: 1 * 3 2 1 
        2 * 4 * *
        3 4 5 4 3 
        * * 4 * 2
        1 2 3 * 1 
        
Example Input/Output 2: 

Input:  7 
Output: 1 * * 4 3 2 1
        2 * * 5 * * *
        3 * * 6 * * *
        4 5 6 7 6 5 4
        * * * 6 * * 3
        * * * 5 * * 2 
        1 2 3 4 * * 1

SOLUTION:
'''

n = int(input()) 
matrix = [['*' for i in range(n)] for j in range(n)]
l = n//2 + 1
k, c = l, 0
for i in range(n): 
    if k == n:
        c = 1
    matrix[l-1][i] = k 
    matrix[i][l-1] = k
    if c == 1:
        k -= 1
    else:
        k += 1 
for i in range(l-1):
    matrix[i][0] = i + 1 
    matrix[0][-i-1] = i + 1 
    matrix[n-1][i] = i + 1 
    matrix[-i-1][n-1] = i + 1
for i in range(n): 
    for j in range(n):
        print(matrix[i][j], end = ' ')
    print()
