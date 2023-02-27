'''
The program must accept an integer matrix of size MxN as the input. 
For each row in the matrix, the program must print all the integers in the row along with their sum as the output. 

Boundary Condition(s):  1 <= M, N <= 50 
                        1 <= Each Integer Value <= 999 

Input Format:  The first line contains the integers M and N separated by a space. The next M lines each contain N integers separated by space(s). 
Output Format: The first M lines each contain N+1 integers separated by a space.

Example Input/Output 1: 

Input:  3 4
        1 2 3 7
        4 5 6 1 
        7 8 9 3 

Output: 1 2 3 7 13 
        4 5 6 1 16 
        7 8 9 3 27 

Explanation:  The sum of integers in the first row is 13 (1 + 2 + 3 + 7). 
              The sum of integers in the second row is 16 (4 + 5 + 6 + 1). 
              The sum of integers in the third row is 27 (7 + 8 + 9 + 3). 
              Hence the output is  1 2 3 7 13
                                   4 5 6 1 16
                                   7 8 9 3 27
                    
Example Input/Output 2: 

Input:  5 7 
        41 46 42 44 28 40 27 
        14 29 14  1 19 12 24 
        42 45 15 36 23 20 39 
        19 46 24 17  1 40 24 
        36 35 23 10 44 43 40 

Output:   41 46 42 44 28 40 27 268 
          14 29 14 1 19 12 24 113 
          42 45 15 36 23 20 39 220 
          19 46 24 17 1 40 24 171 
          36 35 23 10 44 43 40 231

SOLUTION:
'''

m, n = map(int, input().split())
mat=[list(map(int, input().split())) for i in range(m)]

for i in range(m):
    for j in range(n):
        print(mat[i][j], end=" ")
    print(sum(mat[i]))
