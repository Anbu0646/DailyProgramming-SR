'''
The program must accept a character matrix of size RxC containing only the alphabets 'W' and 'B' as the input. 
The alphabet 'W' represents the white color and the alphabet 'B' represents the black color.
The matrix always contains only one black square submatrix of size NxN, where N is always odd. 
The program must print the center position of the black square submatrix as the output. 

Boundary Condition(s): 2 <= R, C <= 50

Input Format:  The first line contains R and C separated by a space.
               The next R lines each contain C alphabets separated by a space. 
Output Format: The first line contains the center position of the black square submatrix separated by a space. 

Example Input/Output 1: 

Input:  5 6
        W W B B B W 
        W W B B B W 
        W W B B B W
        W W W W W W
        W W W W W W 

Output: 2 4

Explanation: In the 5x6 matrix, the black square submatrix is highlighted below. 
             W W B B B W
             W W B B B W
             W W B B B W 
             W W W W W W 
             W W W W W W 

            The center position of the black square submatrix is (2, 4). 
            Hence the output is 2 4 

Example Input/Output 2: 

Input:  4 4 
        W W W W
        W W W W 
        W W B W
        W W W W 

Output: 3 3
'''

a,b=map(int,input().split())
l=[list(map(str,input().split())) for i in range(a)]
p=[];k=[]

for i in range(a):
    for j in range(b):
        if l[i][j]=='B':
            if i not in p:
                p.append(i)
            if j not in k:    
                k.append(j)
print(p[len(p)//2]+1, k[len(k)//2]+1)
