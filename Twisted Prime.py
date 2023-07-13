'''
The program must accept an integer N as the input.
The program must print YES if N is a Twisted prime, else print NO.
A number is said to be Twisted prime if a number is prime number and its reverse also a prime number.

Boundary Conditions: 1 <= N <= 10^16

Input: 97

Output: YES

Input: 34

Output: NO

SOLUTION:
'''
import math

def ispalin(n):
    n = int(n)
    if n <= 1:
        return 0
    for i in range(2, int(math.sqrt(n))):
        if n % i == 0:
            return 0
    return 1
    
N = int(input())
N1 = int(str(N)[::-1])

if ispalin(N) and ispalin(N1): print("YES")
else: print("NO")

