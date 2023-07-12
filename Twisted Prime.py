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

def ispalin(n):
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False
    return True
    
N = int(input())
N1 = int(str(N)[::-1])

if ispalin(N):
    if ispalin(N1): print("YES")
    else: print("NO")
else: print("NO")
