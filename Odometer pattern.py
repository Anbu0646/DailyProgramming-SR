'''
The program must accept an integer N as the input. The program must print the odometer pattern for N as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 10^9 

Input Format:  The first line contains the integer N. 

Output Format: The lines contain the odometer pattern for N as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  529 

Output: 

000 
100 
200 
300 
400 
500
510 
520 
521 
522 
523 
524 
525 
526 
527 
528 
529 

Example Input/Output 2: 

Input:  31002 

Output: 

00000 
10000 
20000 
30000 
31000 
31001 
31002

SOLUTION:
'''

x=int(input())
y=str(x)
k=len(y)

for i in range(len(y)):
    for j in range(int(y[i])):
        print(y[:i] + str(j) + '0'*(k-1))
    k-=1    
    
print(x) 
