'''
The program must accept a character matrix of size NxN and a string S as the input. 
The program must check if the string S is present in the matrix column-wise and print the column number of the columns with the given string in it. 
Else if the string S is not present in any column of the matrix then the program must print -1 as the output. 

Note: The character matrix and the string S contain only lower case alphabets. 

Boundary Condition(s): 

1 <= N <= 100 
1 <= Length of S <= 100 

Input Format: 

The first line contains the value N. 
The next N lines contain N characters each separated by a space. 
The (N+2)th line contains the string S. 

Output Format: 

The first line contains either -1 or the column number values with the given string each separated by a space. 

Example Input/Output 1: 

Input: 

5 
n q w f r 
e r n u o 
p o b r c 
r c g t k 
j k j k n 
rock 

Output: 2 5 

Explanation: 

The string rock is present in the 2nd and 5th column which are highlighted below. 

n q w f r 
e r n u o 
p o b r c 
r c g t k 
j k j k n 

Example Input/Output 2: 

Input: 

3 
o v r 
k b m 
a k t 
to 

Output: -1

SOLUTION:
'''

a = int(input())
l = [list(map(str,input().split())) for i in range(a)]
s = input().strip()
c = 0

for j in range(a):
    q = ''
    for i in range(a):
        q += l[i][j]
    if s in q:
        print(j + 1,end=' ')
        c += 1
if c == 0:
    print("-1")

'''
n = int(input())
l = [input().split() for row in range(n)]
s = input().strip()
a = list(zip(*l))
b = [i + 1 for i in range(n) if s in ''.join(a[i])]
if b: print(*b)
else: print(-1)
'''

