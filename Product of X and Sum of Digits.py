'''
The program must accept two integers N and X as the input. The program must print the product of X and the sum of digits in N as the output. 

Boundary Condition(s): 1 <= N, X <= 10^9 

Input Format:  The first line contains the value of N. 
               The second line contains the value of X. 
Output Format: The first line contains the product of X and the sum of digits in N. 

Example Input/Output 1: 

Input:  2345 
        4 
Output: 56 

Explanation: The sum of digits in 2345 is 14. 
             The product of 4 and 14 is 56. 
             Hence the output is 56 
             
Example Input/Output 2: 

Input:  1000 
        99999 
Output: 99999

SOLUTION:
'''

#1899withonlyO
s, x = int(input()), int(input())
l=[int(i) for i in str(s)]
print(sum(l)*x)
