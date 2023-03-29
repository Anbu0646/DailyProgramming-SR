'''
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= N <= 100 

Input Format:  The first line contains the value of N. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 

Output: 
        |||* * * * 
        ||* * - * * 
        |* - * * - * 
        * * * * * * * 
        |* - * * - * 
        ||* * - * * 
        |||* * * * 

Example Input/Output 2: 

Input:  5 

Output: 
        ||||* * * * * 
        |||* * --- * * 
        ||* - * - * - * 
        |* --- * * --- * 
        * * * * * * * * * 
        |* --- * * --- * 
        ||* - * - * - * 
        |||* * --- * * 
        ||||* * * * * 

Example Input/Output 3: 

Input:  6 
Output: 
        |||||* * * * * * 
        ||||* * ----- * * 
        |||* - * --- * - * 
        ||* --- * - * --- * 
        |* ----- * * ----- * 
        * * * * * * * * * * * 
        |* ----- * * ----- * 
        ||* --- * - * --- * 
        |||* - * --- * - * 
        ||||* * ----- * * 
        |||||* * * * * *

SOLUTION:
'''

x=int(input())
a=[]

for i in range(x-1): 
    t='|'*(x-1-i) 
    if i==0: 
        t=t+('* '*x) 
    else: 
        c=('-'*(((i-1)*2)-1)) 
        k='* '+c
        if len(c)>0: 
            k=k+' '
        k=k+'* ' 
        l=(x-i-3) 
        c=('-'*((l*2)+1)) 
        if len(c)>0: 
            c=c+' '
        t=t+k+c+k
    a.append(t)

for i in a: 
    print(i) 

print('* '*((x*2)-1)) 

for i in a[::-1]: 
    print(i)
