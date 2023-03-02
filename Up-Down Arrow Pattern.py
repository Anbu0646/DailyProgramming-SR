'''
The program must accept an integer N and a character CH as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s):  2 <= N <= 100 

Input Format:  The first line contains the values of N and CH separated by a space. 
Output Format: The first 3xN lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 * 

Output: ---* 
        --*** 
        -*-*-* 
        *--*--* 
        ---* 
        ---* 
        ---* 
        ---*
        *--*--*
        -*-*-* 
        --***
        ---* 
        
Example Input/Output 2:

Input:  5 # 

Output: ----#
        ---### 
        --#-#-#
        -#--#--#
        #---#---# 
        ----# 
        ----#
        ----#
        ----# 
        ----#
        #---#---#
        -#--#--#
        --#-#-#
        ---### 
        ----#

SOLUTION:
'''

a, b = input().split()
a = int(a)
l = []
p = 0
l.append(("-" * (a-1)) + b)

for i in range(a-2, -1, -1):
    l.append( ("-"*i) + b + ("-"*p) + b + ("-"*p) + b)
    p+=1

print(*l, sep="\n")
l = l[::-1]
for i in range(a):
    print( ("-"*(a-1) ) + b)

print(*l, sep="\n")


'''

Aliter:

n,ch=map(str,input().split())
n = int(n)
top=[]
for i in range(n):
    s=""
    for j in range(n+i):
        if j==n-1:
            s+=ch
        elif j==n+i-1:
            s+=ch
        elif j==n-i-1:
            s+=ch
        else:
            s+="-"
    top.append(s)
for i in top:
    print(i)
for i in range(n):
    print((n-1)*"-",ch,sep="")
for i in top[::-1]:
    print(i)

'''
