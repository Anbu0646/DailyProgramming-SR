'''
the program must accept an integer n as the input. the program must print the first occurring consecutive odd digits if the first digit is odd as the output. else the program must print the first occurring consecutive even digits as the output. 

boundary condition(s): 1 <= n <= 10^8 

input format:  the first line contains the integer n. 
output format: the first line contains the consecutive digits without any space. 

example input/output 1: 

input:  157894 
output: 157 

explanation: the first digit is odd so the first occurring consecutive odd digits 1, 5 and 7 are printed. 

example input/output 2: 

input:  601648 
output: 60

SOLUTION:
'''
S=input().strip()
if S[0] in '13579':
    for ch in S:
        if ch not in '13579':
            break
        print(ch,end='')
else:
    for ch in S:
        if ch not in '24680':
            break
        print(ch,end='')
