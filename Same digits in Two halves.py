'''
The program must accept an integer N as the input. 
The program must print yes if the digits in the first half of N can be rearranged to get the second half of N as the output. 
Else the program must print no as the output. 

Note: Number of digits in N is always even. 

Boundary Condition(s): 1 <= N <= 10^8 

Input Format:  The first line contains N. 
Output Format: The first line contains yes or no based on the above condition. 

Example Input/Output 1: 

Input:  54211425 
Output: yes 

Explanation: The digits in the first half of N 5421 can be rearranged as 1425 which is the second half of N. Hence yes is printed as the output. 

Example Input/Output 2: 

Input:  112122 
Output: no

SOLUTION:
'''

N = input().strip()
first, second = list(N[:len(N)//2]), list(N[len(N)//2:])
print("yes" if sorted(first) == sorted(second) else "no")

'''
Aliter:

from collections import Counter
s = input()
print("yes" if Counter(s[:len(s)//2])==Counter(s[len(s)//2:]) else "no")
'''
