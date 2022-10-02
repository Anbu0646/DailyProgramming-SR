'''

The program must accept an integer N as the input. The program must print the pattern as shown in the Example Input/Output sections.

Boundary Condition(s): 5 <= N <= 50 

Input Format:  The first line contains the value of N. 

Output Format: The first N lines contain the desired pattern as shown in the Example Input/Output sections. 

Example Input/Output 1: 

Input:  15

Output: ***************
        **-----------**
        *-*---------*-*
        *--*-------*--*
        *---*-----*---*
        *----*---*----*
        *-----*-*-----*
        *------*------*
        *-----*-*-----*
        *----*---*----*
        *---*-----*---*
        *--*-------*--*
        *-*---------*-*
        **-----------**
        ***************
        
Solution:

'''
# => UNFOUNDERwithJ & Ragav
n=int(input())
for i in range(0, n):
    for j in range(0, n):
        if(i==j or i==0 or j==0 or j==n-1 or i==n-1 or i+j+1==n):print("*", end="")
        else:print("-", end="")
    print()
