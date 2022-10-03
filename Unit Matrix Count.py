'''
An N*N matrix containing 1s and 0s is given as the input to the program. The program must print the number of 2x2 unit matrices in the given matrix. A matrix is said to be unit matrix if all the integers are 1. Also, consider the overlapping matrices. 

Boundary Condition(s): 1 <= N <= 100 

Input Format:  The first line contains the value of N. 
               The next N lines contain N elements each separated by space(s). 
Output Format: The first line contains an integer value. 

Example Input/Output 1: 

Input:  3 
        1 0 1 
        1 1 1 
        1 1 0 
Output: 1 

Explanation : The number of 2*2 Unit matrix in the 3*3 matrix is 1. 
              1 0 1 
              1 1 1 
              1 1 0 
              Hence the output is 1. 

Example Input/Output 2: 

Input:  4 
        1 0 1 1
        1 1 1 1 
        1 1 0 0 
        0 0 0 0 
Output: 2 

Explanation : The number of 2*2 Unit matrix in the 4*4 matrix is 2. 
              Hence the output is 2.
              
SOLUTION:

'''

n=int(input())
mat=[list(map( int, input().split() )) for i in range(n)]
c=0
for i in range(n-1):
    for j in range(n-1):
        s=mat[i][j] + mat[i][j+1] + mat[i+1][j] + mat[i+1][j+1]
        if s==4:
            c+=1
print(c)
