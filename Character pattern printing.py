'''
The program must accept an integer N and a string S as the input. The program must print the pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N, Length of S <= 100 

Input Format:  

The first line contains N and S separated by a space. 

Output Format: 

The first N lines contain the pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 

5 ABCDE 

Output: 

A 
B C 
D E A 
B C D E 
A B C D E 

Example Input/Output 2: 

Input: 

6  @#rU 

Output:

@ 
# r 
U @ # 
r U @ # 
r U @ # r 
U @ # r U @

SOLUTION:
'''

N, String = input().split()
N = int(N)

pattern = []; R = []; C = 0

char = list(String)
Len = len(char)

for i in range(N):
    R = []
    for j in range(i + 1):
        R.append(char[C % Len])
        C += 1
    pattern.append(R)

for j in pattern:
    print(''.join(j))
