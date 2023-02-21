'''
The program must accept a string S as the input. The program must print the sequence number for the string S as the output. 
The sequence numbers are 1 (a), 2 (b), 3 (c), 4 (d), .... 26 (z), 27 (aa), 28 (ab), 29 (ac), ... and so on. 

Note: All the alphabets in S are only in lower case. 

Boundary Condition(s): 1 <= Length of S <= 12 

Input Format:  The first line contains the string S. 

Output Format: The first line contains the sequence number for the string S.

Example Input/Output 1: 

Input:  ac
Output: 29 

Example Input/Output 2: 

Input:  all 
Output: 1000

SOLUTION:
'''

s = input().strip()
b = ord('a') - 1
c = 0

for i in s:
    c = (c * 26) + (ord(i) - b)

print(c)
