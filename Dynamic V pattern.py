'''
The program must accept two integers (X, Y) and a character CH as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= X, Y <= 1000 

Input Format:  The first line contains the values of X, CH and Y separated by a space. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  3 # 5 

Output: ------#
        -----#
        #---#
        -#-# 
        --# 

Example Input/Output 2:

Input:  7 @ 7 

Output: @-----------@ 
        -@---------@ 
        --@-------@ 
        ---@-----@
        ----@---@ 
        -----@-@
        ------@

Example Input/Output 3: 

Input:  10 * 4 

Output: *
        -*
        --* 
        ---* 
        ----* 
        -----* 
        ------*-----*
        -------*---*
        --------*-* 
        ---------*

SOLUTION:
'''

x, c, y = input().split()
x = int(x)
y = int(y)
m = []

for i in range(1, y + 1):
    if(y-x>=i or i==y):
        m.append('-' * (y+x-1-i)+c)
    else:
        m.append('-' * (i-(y-x)-1)+c + '-' * (2*(y-i)-1)+c)
        
for i in range(0, x-y):
    print('-' * (i)+c)

print(*m, sep='\n')
