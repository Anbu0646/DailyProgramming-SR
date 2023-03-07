'''
The program must accept an integer N as the input. The program must split the integer N into two integers in all possible ways and the print their product as the output. 
The integer N must be split from left to right direction. 

Boundary Condition(s): 10 <= N <= 10^8 

Input Format: The first line contains the value of N. 
Output Format: The first line contains the list integers each separated by a space based on the given conditions. 

Example Input/Output 1: 

Input:  134 
Output: 34 52 

Explanation: In the 1st split, the formed integers are 1 and 34. So their product 34 is printed as the output. 
             In the 2nd split, the formed integers are 13 and 4. 
             So their product 52 is printed as the output. 

Example Input/Output 2: 

Input:  2408 
Output: 816 192 1920

SOLUTION:
'''

N=input().strip()
for i in range(1, len(N)):
    print((int(str(N[:i])))*(int(str(N[i:]))), end=" ")
