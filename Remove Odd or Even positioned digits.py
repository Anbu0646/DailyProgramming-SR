'''
INPUT 1: 2345678

OUTPUT 1: 2468

INPUT 2:  1009

OUTPUT 2: 9

SOLUTION:
'''

n=int(input())
if(n%2==0):
    t=str(n)
    print(t[::2], end=" ")
else:
    t=str(n)
    print(int(t[1::2]), end=" ")
