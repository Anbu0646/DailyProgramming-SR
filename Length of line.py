'''
A paper is represented as a character matrix of size RxC where # represents blank space, * represents a dot and more than one * appearing continuously in a row or column
represents a line. There is exactly one line drawn on the paper and there can be more than one dot. The program must accept the matrix as the input and print the length 
of the line on the paper as the output. The length is calculated by counting the number of * in the line. 

Boundary Condition(s): 1 <= R, C <= 100 

Input Format:  The first line contains R and C separated by a space. The next R lines contain C characters each.
Output Format: The first line contains the length of the line.

Example Input/Output 1: 

Input:  4 5
        ####* 
        #*#*#
        ###*# 
        ###*# 
        
Output: 3 

Explanation: The line is in the 4th column and in the rows 2 3 4. 
             Hence its length 3 is printed. 
             
Example Input/Output 2: 

Input:  6 5 
        ##*## 
        #*#*# 
        ####* 
        *##*# 
        ####* 
        ****# 
        
Output: 4

SOLUTION:
'''

r, c = map(int,input().split())
l = [input().strip() for _ in range(r)]
maxi = 0

for i in l:
    for j in range(1, c + 1):
        if '*'*j in i:
            maxi = max(maxi, j)
        
for i in zip(*l):
    for j in range(1, c + 1):
        if '*'*j in ''.join(i):
            maxi = max(maxi,j)
print(maxi)

'''

Aliter:

r, c = map(int,input().split())
l = [input() for i in range(r)]
c = 0

for i in l:
    x = 1
    for j in range(len(i) - 1):
        if i[j]=='*' and i[j+1]=='*':
            x += 1
    if x > c:
        c = x
        
l = list(zip(*l))
for i in l:
    x = 1
    for j in range(len(i) - 1):
        if i[j]=='*' and i[j+1]=='*':
            x += 1
    if x > c:
        c = x
        
print(c)

'''
