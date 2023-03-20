'''
The program must accept an integer matrix of size NxN as the input. The program must replace each integer in the matrix by the sum of all four adjacent integers.
Finally, the program must print the modified matrix as the output. 

Note: If any of the four adjacent integers are not available then the integer must be printed without any change. 

Boundary Condition(s): 2 <= N <= 50 

Input Format:  The first line contains N. The next N lines each contain N integers separated by space(s). 
Output Format: The first N lines each contain N integers separated by a space. 

Example Input/Output 1: 

Input:  4
        14 18 15 16 
        3 16 5 10
        4 9 12 2
        9 4 13 4

Output: 14 18 15 16
        3 35 53 10
        4 36 29 2
        9 4 13 4

Explanation:  There are four integers having all 4 adjacent integers. The sum of adjacent for the elements 16 is 18 + 3 + 9 + 5 = 35 
              The sum of adjacent for the elements 5 is 15 + 16 + 12 + 10 = 53
              The sum of adjacent for the elements 9 is 16 + 4 + 4 + 12 = 36 
              The sum of adjacent for the elements 12 is 5 + 9 + 13 + 2 = 29 

Example Input/Output 2:
Input:  5 
        16 13 22 38 45
        13 48 50 15 17 
        24 49 23 48 38
        38 38 41 31 45
        42 23 27 33 35 

Output:   16 13 22 38 45
          13 125 108 153 17
          24 133 188 107 38 
          38 151 119 167 45
          42 23 27 33 35

SOLUTION:
'''

N=int(input())
mat=[list(map(int, input().split())) for row in range(N)]

for row in range(N):
    for col in range(N):
        if row==0 or row==N-1 or col==0 or col==N-1:
            print(mat[row][col], end=' ')
        else:
            print(mat[row-1][col] + mat[row+1][col] + mat[row][col-1] + mat[row][col+1], end=' ')
    print()
