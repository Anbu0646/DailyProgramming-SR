'''
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 10^15 

Input Format:  The first line contains the integer N. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  43785 
Output: 4 
        33 
        777 
        8888 
        55555 

Example Input/Output 2: 

Input:  10001 
Output: 1 
        00 
        000 
        0000 
        11111
        
SOLUTION:
'''

#WednesdaywithJ&A
n=input().strip()
for j in range(0, len(n)):
    for k in range(0, j+1):
        print(n[j], end="")
    print("\r")
