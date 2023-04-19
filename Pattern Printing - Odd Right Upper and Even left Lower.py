'''
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 1000 

Input Format:  The first line contains the value of N. 
Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 4 

Output: 0 1 3 7 
        2 0 5 9 
        4 8 0 11
        6 10 12 0 
        
Example Input/Output 2: 

Input: 7

Output:  0 1 3 7 13 21 31
         2 0 5 9 15 23 33
         4 14 0 11 17 25 35
         6 16 24 0 19 27 37
         8 18 26 32 0 29 39
         10 20 28 34 38 0 41 
         12 22 30 36 40 42 0

SOLUTION:
'''

n = int(input())
m = [list (0 for col in range(n)) for row in range(n)]

odd, even = 1, 2

for col in range(n):
    for row in range(n):
        if(row == col):
            continue
        elif(row < col):
            m[row][col] = odd
            odd += 2
        else:
            m[row][col] = even
            even += 2
                
for row in m:
    print(*row)
