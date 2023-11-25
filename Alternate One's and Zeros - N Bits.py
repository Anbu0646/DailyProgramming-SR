'''
The program must accept an integer N as the input. 
The program must form a binary representation B of length N (i.e., B has N bits) by concatenating 1s and 0s alternatively.
Then the program must print the decimal equivalent of B as the output.

Boundary Condition(s): 1 <= N <= 63

Input Format: The first line contains N. 

Output Format: The first line contains the decimal equivalent of B. 

Example Input/Output 1: 

Input:  5

Output: 21 

Explanation: 

Here N=5, so the binary representation B is 10101 (alternate 1s and 0s of length 5). 
The decimal equivalent of 10101 is 21.
Hence the output is 21. 

Example Input/Output 2: 

Input:  8

Output: 170

Explanation:

Here N=8, so the binary representation B is 10101010 (alternate 1s and 0s of length 8). 
The decimal equivalent of 10101010 is 170. 
Hence the output is 170.

SOLUTION:
'''

N = int(input())
BR = "10"

if N % 2 == 1:
    K = (N - 1) // 2
else:
    K = N // 2

if N % 2 == 1:
    BV = BR * K + '1'
else:
    BV = BR * K
    
print(int(BV, 2))

'''


'''
