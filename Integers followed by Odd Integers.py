'''
The program must accept a matrix of size RxC as the input. The program must print the integers which are followed by an odd integer. 
Else the program must print * as the output. 

Note: The last column must be * in the output matrix. 

Boundary Condition(s): 2 <= R, C <= 100 

Input Format:  The first line contains the value of R and C. The next R lines contain C integers separated by space(s).
Output Format: The first R lines contain C integers or * separated by space. 

Example Input/Output 1: 

Input:  3 3 
        1 2 3 
        4 5 6
        7 8 9 
        
Output: * 2 * 
        4 * *
        * 8 * 
        
Example Input/Output 2: 

Input:  3 3 
        5 5 4
        6 6 5 
        4 5 6 
        
Output: 5 * * 
        * 6 *
        4 * *

SOLUTION:
'''

R, C = map(int, input().split())
matrix = [list(map(int, input().split())) for row in range(R)]

for row in range(R):
    for col in range(C):
        if col == C-1:
            print("*", end = " ")
        else:
            if matrix[row][col + 1]%2:
                print(matrix[row][col], end = " ")
            else:
                print("*", end = " ")
    print()
