'''
The program must accept an integer matrix of size NxN as the input. 
The matrix is set to be a symmetric matrix if the transpose of the original matrix is equal to the original matrix. 
The program must print YES if the given matrix is a symmetric matrix. Else the program must print NO as the output. 

Boundary Condition(s): 1 <= N <= 100 

Input Format:  The first line contains the integer N. The next N lines contain N integers separated by space. 
Output Format: The first line contains either YES or NO. 

Example Input/Output 1: 

Input:  4 
        2 5 9 1
        5 4 0 7
        9 0 8 6
        1 7 6 3 
        
Output: YES 

Explanation: The original matrix  2 5 9 1
                                  5 4 0 7
                                  9 0 8 6 
                                  1 7 6 3 
                                  
              The transposed matrix 2 5 9 1
                                    5 4 0 7 
                                    9 0 8 6
                                    1 7 6 3 
                                    
              Both the matrices are equal. 
              
              Hence the output is YES
              
Example Input/Output 2: 

Input:  3 
        3 9 4 
        9 2 1
        4 8 2 
        
Output: NO

SOLUTION:
'''

N = int(input())
Mat = [list(map(int, input().split())) for i in range(N)]
Sym = 1

for i in range(N):
    for j in range(N):
        if Mat[i][j] != Mat[j][i]:
            Sym = 0

print("YES" if Sym == 1 else "NO")
