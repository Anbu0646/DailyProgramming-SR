'''
The program must accept two integer matrices of size R*R as the input.
The program must interchange the lower left quadrant of the two matrices and upper right quadrant of the two matrices. 
Then the program must print the modified matrices as the output. 

Note: The value of R is always even. 

Boundary Condition(s): 2 <= R <= 50 

Input Format:  

The first line contains R. 
Next 2R lines each contain R integer values representing the two matrices. 

Output Format: 

The first R lines contain the modified first matrix. 
The R+1 to R lines contain the modified second matrix. 

Example Input/Output 1: 

Input: 

4 
67 31 85 53 
27 33 79 77 
93 73 12 14 
29 83 77 45 
79 65 68 89 
83 87 40 20 
29 97 98 20 
25 34 31 34 

Output: 

67 31 68 89 
27 33 40 20 
29 97 12 14 
25 34 77 45 
79 65 85 53 
83 87 79 77 
93 73 98 20 
29 83 31 34 

Explanation: 

The lower left quadrant and upper right quadrant of the first matrix are highlighted below. 

67 31 85 53 
27 33 79 77 
93 73 12 14 
29 83 77 45 

The lower left quadrant and upper right quadrant of the second matrix are highlighted below. 

79 65 68 89
83 87 40 20 
29 97 98 20 
25 34 31 34 

After interchanging the lower left quadrant of the two matrices and the upper right quadrant of the two matrices, the modified matrices become 

67 31 68 89 
27 33 40 20 
29 97 12 14 
25 34 77 45 
79 65 85 53 
83 87 79 77 
93 73 98 20 
29 83 31 34 

Example Input/Output 2: 

Input: 

2 
1 2 
3 4 
5 6 
7 8 

Output: 

1 6 
7 4 
5 2 
3 8

SOLUTION:
'''

N = int(input())
Mat_1 = [list(map(int, input().split())) for i in range(N)]
Mat_2 = [list(map(int, input().split())) for i in range(N)]

for i in range(N//2, N):
    for j in range(N//2):
        Mat_1[i][j], Mat_2[i][j] = Mat_2[i][j], Mat_1[i][j]

for i in range(N//2):
    for j in range(N//2, N):
        Mat_1[i][j], Mat_2[i][j] = Mat_2[i][j], Mat_1[i][j]

for i in range(N):
    for j in range(N)::
        print(Mat_1[i][j], end=" ")
    print()

for i in range(N):
    for j in range(N):
        print(Mat_2[i][j], end=" ")
    print()
