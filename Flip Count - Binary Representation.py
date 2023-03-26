'''
The program must accept an integer N as the input. The program must find the binary representation of N as X. Then the program must shift all 1's to the right as Y. 
Finally, the program must print the minimum number of flips required to form Y from X as the output. 

Boundary Condition(s): 1 <= N <= 10^8 

Input Format: The first line contains the values of N. 
Output Format: The first line contains the minimum number of flips required to form Y from X based on the given conditions. 

Example Input/Output 1: 

Input:  73
Output: 4 

Explanation: The binary representation of 73 is 1001001. So X = 1001001. After shifting all the binary 1's to the right, the binary representation of 73 becomes 0000111. 
So Y = 0000111. X=1001001 Y=0000111 Here 4 flips are required to form Y from X. Hence 4 is printed as the output. 

Example Input/Output 2: 

Input:  15 
Output: 0

SOLUTION:
'''

N = int(input())
X = bin(N)[2:]
Y = '0'*len(X); Len = len(X) - 1
count = 0

for i in range(len(X) - 1, -1, -1):
    if X[i]=='1':
        Y = Y[:Len] + '1' + Y[Len+1:]
        Len -= 1

for j in range(len(X)):
    if X[j] != Y[j]:
        count += 1

print(count)
