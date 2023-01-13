'''
The program must accept two integers X and Y as the input. The program must print all the common factors of X and Y in ascending order as the output. 

Boundary Condition(s): 1 <= X, Y <= 10^5 

Input Format:  The first line contains two integers X and Y separated by a space. 
Output Format: The first line contains all the common factors of X and Y in ascending order separated by a space. 

Example Input/Output 1: 

Input:  24 96 
Output: 1 2 3 4 6 8 12 24 

Explanation:  The factors of 24 are 1, 2, 3, 4, 6, 8, 12 and 24. 
              The factors of 96 are 1, 2, 3, 4, 6, 8, 12, 16, 24, 32, 48 and 96. 
              The common factors in both 24 and 96 are 1, 2, 3, 4, 6, 8, 12 and 24. 
              Hence the output is 1 2 3 4 6 8 12 24 

Example Input/Output 2: 

Input:  13 19 
Output: 1

SOLUTION:
'''

#c'mmonbabylet'zgoonthebullet'u'
x, y = map(int, input().split())
x1, y1 = [], []
for i in range(1, x+1):
    if(x%i==0): x1.append(i)
for j in range(1, y+1):
    if(y%j==0): y1.append(j)
z1=list(set(x1).intersection(y1))
z1.sort()
print(*z1)
