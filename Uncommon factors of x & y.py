'''
The program must accept two integers X and Y as the input. The program must print the uncommon factors of X and Y in ascending order as the output. 
If there is no uncommon factor of X and Y then the program must print -1 as the output. 

Boundary Condition(s): 1 <= X, Y <= 1000 

Input Format:  The first line contains the value of X and Y separated by a space. 
Output Format: The first line contains either the uncommon factors of X and Y or -1. 

Example Input/Output 1: 

Input:  24 100 
Output: 3 5 6 8 10 12 20 24 25 50 100 

Explanation: The factors of 24 are 1, 2, 3, 4, 6, 8, 12 and 24. 
             The factors of 100 are 1, 2, 4, 5, 10, 20, 25, 50 and 100. 
             So the uncommon factors are 3, 5, 6, 8, 10, 12, 20, 24, 25, 50 and 100.
             Hence the output is 3 5 6 8 10 12 20 24 25 50 100 

Example Input/Output 2: 

Input:  36 36 
Output: -1

SOLUTION:
'''

#Michael
def fact(n):
    return {i for i in range(1, n+1) if n%i==0}
n, x = map(int, input().split())
y=fact(n) 
z=fact(x)
a=y.difference(z)
b=z.difference(y)
c=a.union(b)
d=list(c)
d.sort()
if(sum(d)==0):
    print(-1)
else:
    print(*d)
