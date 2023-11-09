'''
The program must accept N integers as the input. 
The program must form a binary representation B by concatenating the last two bits of each integer among the N integers (left to right).
Then the program must print the decimal equivalent of B as the output. 

Boundary Condition(s): 

1 <= N <= 31 
2 <= Each integer value <= 10^5 

Input Format: 

The first line contains N. 
The second line contains N integers separated by a space. 

Output Format: The first line contains the decimal equivalent of B. 

Example Input/Output 1: 

Input: 

4 
7 5 8 2

Output: 210 

Explanation:

The last two bits in the binary representation of 7 is 11. 
The last two bits in the binary representation of 5 is 01. 
The last two bits in the binary representation of 8 is 00. 
The last two bits in the binary representation of 2 is 10. 
So the obtained binary representation B is 11010010. 
The decimal equivalent of 11010010 is 210. 
Hence the output is 210.

Example Input/Output 2: 

Input: 

3 
12 10 32 

Output: 8

SOLUTION:
'''

N = int(input())
Arr = list(map(int, input().split()))
St = ""

for i in Arr:
    D = bin(i)[-2:]
    St += D

print(int(St, 2))
