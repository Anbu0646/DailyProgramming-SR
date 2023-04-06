'''
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 50 

Input Format:  The first line contains the value of N. 
Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1: 

Input:  3
Output: 1 * 2 * 3 
        - 5 * 4
        - - 6 
        
Example Input/Output 2: 

Input:  4 
Output: 1 * 2 * 3 * 4
        - 7 * 6 * 5 
        - - 8 * 9 
        - - - 10

SOLUTION:
'''

N = int(input())
Ctr = 1

for i in range(1, N + 1):
    for j in range(1, i):
        print("- ", end="")
    
    temp = Ctr
    
    for j in range(1, N - i + 2):
        if i%2 == 0:
            print(temp + N - i + 1 - j, end="")
        else:
            print(Ctr, end="")
        
        Ctr += 1
        
        if j != N - i + 1:
            print(" * ", end="")
    print()
