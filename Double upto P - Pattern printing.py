'''
The program must accept two integers N and P where P <= N as input. 
The program must print the pattern as shown in the Example Input/Output section.

Boundary Condition(s): 1 <= N <= 10 
                       1 <= P <= N 
                                            
Input Format:  The first line contains the value of N and P separated by a space. 
Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  5 3 
Output: 1 1 
        2 2 2 2 
        3 3 3 3 3 3
        4 4 4 4
        5 5 5 5 5 
        
Example Input/Output 2: 

Input:  6 2
Output: 1 1
        2 2 2 2
        3 3 3 
        4 4 4 4 
        5 5 5 5 5 
        6 6 6 6 6 6

SOLUTION:
'''

N, P = map(int, input().split())

for i in range(1, N+1):
    k = i
    if(k<=P): k=i*2
    for j in range(1, k+1):
        print(i, end=" ")
    print()
