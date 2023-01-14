'''
The program must accept a string S and an integer X where the length of S is divisible X as the input. 
The program must print every X characters in the string S on each line as the output. 

Boundary Condition(s): 1 <= Length of S, X <= 100

Input Format:  The first line contains the string S. 
               The second line contains the integer X. 

Output Format: The first length of S / X lines contains X characters on each line. 

Example Input/Output 1: 

Input:  orange 
        3 
Output: ora 
        nge 

Example Input/Output 2: 

Input:  compartmentalization 
        4 
Output: comp 
        artm 
        enta 
        liza 
        tion

SOLUTION:
'''

s=input().strip()
n=int(input())
for i in range(0, len(s), n):
    print(s[i:i+n])
