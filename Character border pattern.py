'''
The program must accept an odd integer N and a character CH as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 99 

Input Format:  The first line contains the values of N and CH separated by a space. 
Output Format: The lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 5 #

Output:

# # # # # # # # # 
- # 5 4 3 2 1 # 
- - # 5 4 3 #
- - - # 2 # 
- - - - # 

Example Input/Output 2: 

Input:  7 @ 

Output: 
@ @ @ @ @ @ @ @ @ @ @
- @ 7 6 5 4 3 2 1 @ 
- - @ 7 6 5 4 3 @
- - - @ 2 1 7 @
- - - - @ 6 @ 
- - - - - @

SOLUTION:
'''

n, c = input().split()
n = int(n)
m, o, p = n, n, 1

print(" ".join(c * (n + 4)))

for i in range((n + 1)//2):
    print('- ' * p + c, end=' ')
    for j in range(m):
        print(o, end=' ')
        o -= 1
        if o == 0:
            o = n
    m -= 2
    p += 1
    print(c)
print('- ' * p + c)
