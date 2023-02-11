'''
The program must accept an integer matrix of size RxC which contains only 0's and 1's as the input.
For the odd rows, the program must bring all the 0's to the left side of the matrix. 
For the even rows, the program must bring all the 1's to the right side of the matrix.
Finally, the program must print the modified matrix as the output.

Boundary Condition(s): 1 <= R, C <= 50 

Input Format:  The first line contains the values of R and C separated by a space. 
               The next R lines each contain C integers separated by space(s).
Output Format: The first R lines each contain C integers of the modified matrix separated by a space. 

Example Input/Output 1: 

Input:  4 4 
        0 1 1 0 
        1 1 0 1 
        0 0 1 0
        1 0 0 1 

Output: 0 0 1 1
        1 1 1 0
        0 0 0 1 
        1 1 0 0 

Explanation: All the 0's in the odd rows (1st and 3rd) are moved to the left side. 
             All the 0's in the even rows (2nd and 4th) are moved to the right side. 
             Hence the output is 0 0 1 1
                                 1 1 1 0 
                                 0 0 0 1
                                 1 1 0 0 

Example Input/Output 2: 

Input:  7 5 
        0 1 0 1 1
        1 1 0 0 1
        1 1 0 1 1
        0 1 0 1 0
        0 1 1 0 0
        0 1 0 1 1
        1 1 0 1 1 

Output: 0 0 1 1 1
        1 1 1 0 0
        0 1 1 1 1
        1 1 0 0 0 
        0 0 0 1 1
        1 1 1 0 0 
        0 1 1 1 1

SOLUTION:
'''

r, c = map(int, input().split())
m=[list(map(int, input().split())) for i in range(r)]
for i in range(r):
    if(i%2!=0):
        m[i].sort(reverse=True)
    else:
        m[i].sort()
for i in range(r):
    print(*m[i])
