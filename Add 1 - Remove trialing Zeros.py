'''
The program must accept an integer N as the input. The program must add 1 to the integer N. 
Then the program must remove the trailing zeros in the modified value of N and print it as the output. 

Note: The value of N is always a non-zero value.

Boundary Condition(s): -10^18 <= N <= 10^18 

Input Format:  The first line contains the value of N. 
Output Format: The first line contains the modified value of N. 

Example Input/Output 1: 

Input:  10199 
Output: 102 

Explanation: Add 1 to N. 10199 + 1 = 10200 After removing the trailing zeros in 10200, the integer becomes 102. Hence the output is 102 

Example Input/Output 2: 

Input:  -501 
Output: -5

SOLUTION:
'''

N = int(input());   N += 1
while N % 10 == 0:
    N//=10
print(N)
