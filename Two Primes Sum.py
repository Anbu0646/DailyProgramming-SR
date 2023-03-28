'''
Given an integer N as input, the program must print two prime numbers whose sum will be equal to given integer. 
If there are several combinations possible, print only first such pair. Otherwise print -1 as output. 

Boundary Condition(s): 2 <= N <= 999999 

Input Format:  The first line contains the value of N. 
Output Format: The first line contains two prime numbers whose sum is equal to given integer N otherwise -1. 

Example Input/Output 1: 

Input:  34 
Output: 3 31 

Example Input/Output 2: 

Input:  1024 
Output: 3 1021

SOLUTION:
'''

def prime(N):
    if N==2:
        return True
    if N%2==0 or N==1:
        return False
    for i in range(3, (int(N**(0.5))) + 1, 2):
        if N%i==0:
            return False
    return True

N=int(input())
Flag = False

for i in range(2, N+1):
    if prime(i) and prime(N-i):
        print(i, N-i)
        Flag = True
        break

if not Flag:   print(-1)
