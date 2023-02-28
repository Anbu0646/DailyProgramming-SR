'''
The program must accept N integers separated by a comma as the input.
The program must print the positive integers separated by a comma among the N integers as the output. 
If there is no positive integer then the program must print -1 as the output.

Boundary Condition(s):  1 <= N <= 100 
-999 <= Each integer value <= 999 

Input Format:  The first line contains the value of N. 
The second line contains N integers separated by a comma.
Output Format: The first line contains either the positive integers separated by a comma or -1. 

Example Input/Output 1: 

Input:  5 12,-10,78,-5,-9
Output: 12,78 

Explanation: The positive integers are 12 and 78. So they are separated by a comma and printed as the output.

Example Input/Output 2: 

Input:  6 -41,-93,-91,-54,-59,-88 
Output: -1

SOLUTION:
'''

ned=int(input())
flash=list(map(int, input().split(",")))
wonder_whamen=[i for i in flash if i>0]
if (sum(wonder_whamen)==0):
    print(-1)
else: 
    print(*wonder_whamen, sep=',')

'''


n=int(input())
l=list(map(int, input().split(",")))
p=[str(i) for i in l if i>0]
print(-1 if len(p)==0 else ','.join(p))

'''
