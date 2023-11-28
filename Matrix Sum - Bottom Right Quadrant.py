'''
The program must accept an integer matrix of size RxC as the input. 
The program must print the sum of integers in the bottom-right quadrant of the matrix as the output.

Note: R and C are always even integers. 

Boundary Condition(s): 2 <= R, C <= 50 

Input Format: 

The first line contains R and C separated by a space.
The next R lines each contain C integers separated by a space. 

Output Format: The first line contains the sum of integers in the bottom-right quadrant of the matrix.

Example Input/Output 1: 

Input: 

4 4 
1 2 3 4 
5 6 7 8 
9 1 2 3 
4 5 6 7 

Output: 18 

Explanation:

The integers in the bottom-right quadrant of the matrix are 2 3 6 7. 
So the sum of those integers is 18 (2 + 3 + 6 + 7). 
Hence the output is 18.

Example Input/Output 2: 

Input: 

6 2 
5 7
4 4 
8 3 
1 5 
9 7 
2 1 

Output: 13

SOLUTION:
'''

R, C = map(int, input().split())
Mat = [list(map(int, input().split())) for i in range(R)]

Sum = 0

for i in range(R // 2, R):
    for j in range(C // 2, C):
        Sum += Mat[i][j]

print(Sum)

'''


'''
