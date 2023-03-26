'''
The program must accept an odd integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= N <= 99 

Input Format:  The first line contains the value of N.
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  5 

Output: -********* 
        ***-----*** 
        --**---** 
        ----*-* 
        
Example Input/Output 2: 

Input:  7 
Output: -************* 
        ****-------**** 
        --***-----*** 
        ----**---** 
        ------*-*

SOLTUION:
'''

N=int(input())
print("-" + "*" * (2*N-1))
hyphen = 0
midHyphen = N 

for ctr in range(N//2+1, 0, -1):
    print("-" * hyphen + "*" * ctr + "-" * midHyphen + "*" * ctr)
    midHyphen -= 2
    hyphen += 2
