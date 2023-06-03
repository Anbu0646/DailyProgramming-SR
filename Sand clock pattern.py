'''
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 100 

Input Format: 

The first line contains the value of N. 

Output Format: 

The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 

3 

Output: 

3*3*3*3*3*3 
--2*2*2*2 
----1*1 
-----* 
----1*1 
--2*2*2*2 
3*3*3*3*3*3 

Example Input/Output 2: 

Input: 

4 

Output: 

4*4*4*4*4*4*4*4 
--3*3*3*3*3*3 
----2*2*2*2 
------1*1 
-------* 
------1*1 
----2*2*2*2 
--3*3*3*3*3*3 
4*4*4*4*4*4*4*4

SOLUTION:
'''

n = int(input())
x = []
k = 0

for i in range(n):
    s = '-' * k + (str(n-i) + '*') * (2 * (n-i))
    s = s[:-1]
    k += 2 
    x.append(s)
    
k -= 1 

for i in x:
    print(i)
print('-' * k + '*')

for i in range(len(x)-1, -1, -1):
    print(x[i])
