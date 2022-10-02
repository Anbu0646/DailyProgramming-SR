'''
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output sections. 

Boundary Condition(s): 1 <= N <= 20 

Input Format:  The first line contains the integer N. 
Output Format: The list of lines contain the desired pattern. 

Example Input/Output 1: 

Input:  5 

Output: 0 
        505 
        45054 
        3450543 
        234505432 
        12345054321 
        
Example Input/Output 2: 

Input:  4 
Output: 0 
        404 
        34043 
        2340432 
        123404321
        
Solution:
'''
# => UNFOUNDERwithJ & Ragav
n=int(input())
s='0'
print(s)
for i in range(n, 0, -1):
    s=str(i) + s + str(i)
    print(s)
