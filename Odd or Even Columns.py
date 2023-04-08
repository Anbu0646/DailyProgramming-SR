'''
The program must accept an integer matrix of size RxC as the input. The program must print the columns having all the integers as odd or even in the matrix. 
If there is no such column in the matrix then the program must print -1 as the output. 

Boundary Condition(s): 2 <= R, C <= 50 
                       1 <= Matrix element value <= 10^7 

Input Format:  The first line contains the values of R and C separated by a space. The next R lines contain C integers each separated by space(s). 
Output Format: The first R lines the integers separated by a space based on the above conditions. 

Example Input/Output 1: 

Input:  4 5 
        8 5 6 7 5 
        9 1 8 2 7 
        1 3 2 7 9 
        9 7 4 8 7 
        
Output: 5 6 5 
        1 8 7
        3 2 9 
        7 4 7 
        
Explanation: The first column has 3 odd integers and 1 even integer. So it is not printed. 
             The second column has 4 odd integers. Here all the integers are odd. So it is printed. 
             The third column has 4 even integers. Here all the integers are even. So it is printed.
             The fourth column has 2 odd integers and 2 even integers. So it is not printed. 
             The fifth column has 4 odd integers. Here all the integers are odd. So it is printed.
             
Example Input/Output 2: 

Input:  5 4 
        3 3 1 4 
        3 3 9 5 
        9 5 6 9
        2 1 6 1 
        1 6 7 5 
        
Output: -1

SOLUTION:
'''

r, c = map(int,input().split())
mat = [list(map(int,input().split())) for i in range(r)]
cols = []

for i in range(c):
    odd,even = 0,0
    for j in range(r):
        if mat[j][i]%2:
            odd += 1 
        else:
            even += 1 
    if not odd or not even:
        cols.append(i)
        
if cols:
    for i in range(r):
        for j in range(c):
            if j in cols:
                print(mat[i][j],end=" ")
        print()
else:
    print(-1)
    
    
'''

Aliter:
R, C = map(int, input().split())
Mat = [list(map(int, input().split())) for i in range(R)]

Mat_col = []

for col in range(C):
    
    Even_count = 0
    Odd_count = 0
    
    for row in range(R):
        if Mat[row][col]%2 == 0:
            Even_count += 1
        else:
            Odd_count += 1
        
    if Even_count == R or Odd_count == R:
        Mat_col.append([Mat[row][col] for row in range(R)])
    
if len(Mat_col) > 0:
    for i in range(R):
        for j in range(C):
          if j in Mat_col:
            print(Mat[i][j], end=" ")
        print()
        
else:
    print(-1)
'''
