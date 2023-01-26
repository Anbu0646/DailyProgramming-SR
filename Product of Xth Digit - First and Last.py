'''
The program must accept two integers N and X as the input. 
The program must print the product of the Xth digit from the first and the Xth digit from the last in the integer N as the output. 

Boundary Condition(s): 1 <= N <= 10^18 
                       1 <= X <= Number of digits in N 

Input Format:  The first line contains two integers N and X separated by a space. 
Output Format: The first line contains the product of the Xth digit from the first and the Xth digit from the last in the integer N. 

Example Input/Output 1: 

Input:  34586 2 
Output: 32 

Explanation:  The 2nd digit from the first in 34586 is 4. 
              The 2nd digit from the last in 34586 is 8.
              So their product is 32 (4 * 8). 
              Hence the output is 32

Example Input/Output 2: 

Input:  16840 5 
Output: 0

SOLUTION:
'''

#AliceinBorderLandwithonly0
n, x =input().split()
n1=int(n[int(x)-1])
n2=int(n[-int(x)])
print(n1*n2)
