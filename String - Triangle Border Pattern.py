'''
The program must accept a string S as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Note: Length of S is always a multiple of 3. 

Boundary Condition(s): 3 <= Length of S <= 99 

Input Format:  The first line contains the string S. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  abcdef
Output: --a 
        -f-b
        e-d-c 

Example Input/Output 2: 

Input:  skillrack 
Output: ---s 
        --k-k 
        -c---i 
        a-r-l-l

SOLUTION:
'''

r  = list(input().strip())
h  = len(r)//3
n  = len(r)
h2 = 1

while h!=0:
    if h == n//3:
        print('-'*h+r[0])
        r = r[1:]
    else:
        print('-'*h+r[-1]+'-'*h2+r[0])
        r = r[1:-1]
        h2 += 2
    h -= 1

print('-'.join(r[::-1]))
