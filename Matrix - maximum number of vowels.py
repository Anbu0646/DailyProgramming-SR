'''
The program must accept two character matrices A and B are of same size NxN as the input. 
The program must print the matrix which has the maximum number of vowels as the output. 
If both matrices have the same number of vowels then the program must print the matrix A as the output. 

Note: At least one vowel must be present in both the matrices. 

Boundary Condition(s): 2 <= N <= 50 

Input Format: 

The first line contains the integer N. 
The next N lines contain N characters (matrix A) each separated by a space(s). 
The remaining N lines contain N characters (matrix B) each separated by a space(s). 

Output Format: 

The first N lines contain N characters separated by space(s). 

Example Input/Output 1: 

Input: 

3 
Q  K  e 
v  B  a 
U  I  T 
i  Y  u 
t  z  o 
w  a  E 

Output: 

i  Y  u 
t  z  o
w  a  E 

Explanation: 

The matrix A has 4 vowels ( e, a, U and I). 
The matrix B has 5 vowels ( i, u, o, a and E ). 
The matrix B has more vowels than matrix A. 
Hence the output is 

i  Y  u 
t  z  o 
w  a  E 

Example Input/Output 2: 

Input: 

4 

a  s  d  g  
q  w  e  t  
i  h  j  k 
x  c  v  u 
o  f  g  f
u  r  t  y 
l  k  j  i 
f  d  s  a 

Output: 

a  s  d  g 
q  w  e  t 
i  h  j  k 
x  c  v  u

SOLUTION:
'''

N = int(input())

Mat = [list(map(str, input().split())) for i in range(N)]
Mat_1 = [list(map(str, input().split())) for i in range(N)]

Vow = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']

Count = 0
Count_1 = 0

for i in Mat:
    for j in i:
        if j in Vow:
            Count += 1
            
for i in Mat_1:
    for j in i:
        if j in Vow:
            Count_1 += 1
            
if Count >= Count_1:
    for i in range(N):
        for j in range(N):
            print(Mat[i][j], end=" ")
        print()
else:
    for i in range(N):
        for j in range(N):
            print(Mat_1[i][j], end=" ")
        print()
