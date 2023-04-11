'''
The program must accept a lowercase alphabet ch and an integer K as the input. The program must print K alphabets from ch in reverse order. 

Note: If K alphabets are not available from ch then print only available alphabets in reverse order. 

Boundary Condition(s): 1 <= K <= 26 

Input Format:  The first line contains ch and K separated by a space. 
Output Format: The first line contains alphabets as per the given condition. 

Example Input/Output 1: 

Input:  a 4 
Output: dcba 

Example Input/Output 2: 

Input:  x 5 
Output: zyx 

Explanation: There are only three alphabets available from x (including x). Hence those three alphabets are printed in reverse order.

SOLUTION:
'''

Str, K = map(str, input().split()); K = int(K)
alpha = []

for i in range(ord(Str), ord(Str) + K):
    if i <= 122:
        alpha.append(chr(i))

for i in range(len(alpha) - 1, -1, -1):
    print(alpha[i], end="")
