'''
The program must accept two integer matrices A and B are of same size NxN as the input. 
If the matrix B is the mirror image or the water image of the matrix A then the program must print YES as the output. Else the program must print NO as the output. 

Boundary Condition(s): 2 <= N <= 100

Input Format: The first line contains the value of N. 
              The next N lines from the 2nd line each contain N integers of matrix A separated by space(s). 
              The next N lines from the (N+2)th line each contain N integers of matrix B separated by space(s). 
              
Output Format: The first line contains either YES or NO. 

Example Input/Output 1: 

Input:  4 
        1 2 3 4
        5 6 7 8 
        9 10 9 2 
        5 8 9 6 
        4 3 2 1 
        8 7 6 5 
        2 9 10 9 
        6 9 8 5 

Output: YES 

Explanation: The matrix A is 1 2 3 4
                             5 6 7 8 
                             9 10 9 2 
                             5 8 9 6 
                             
             The matrix B is 4 3 2 1
                             8 7 6 5 
                             2 9 10 9
                             6 9 8 5 

             Here the matrix B is the mirror image of matrix A. 
             Hence the output is YES. 

Example Input/Output 2: 

Input:  4 
        1 2 3 4
        5 6 7 8 
        9 10 9 2
        5 8 9 6 
        5 8 9 6 
        9 10 9 2 
        5 6 7 8 
        1 2 3 4 

Output: YES 

Explanation: The matrix A is 1 2 3 4 
                             5 6 7 8 
                             9 10 9 2 
                             5 8 9 6
                             
             The matrix B is 5 8 9 6
                             9 10 9 2 
                             5 6 7 8 
                             1 2 3 4 
                             
             Here the matrix B is the water image of matrix A. 
             Hence the output is YES. 

Example Input/Output 3: 

Input: 4 
       1 2 3 4
       5 6 7 8
       9 10 9 2
       5 8 9 6 
       3 2 1 5 
       9 10 9 2 
       5 6 7 8 
       1 2 3 4 

Output: NO

SOLUTION:
'''

n = int(input())
a = [list(map(int,input().split())) for row in range(n)]
b = [list(map(int,input().split())) for row in range(n)]
c = 0 
for row in range(0,n):
    if a[row] == b[row][::-1]:
        c += 1 
if c == n or a[::-1] == b: print("YES")
else: print("NO")
