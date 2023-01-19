'''
The program must accept two float values X and Y as the input. The program must print the values from X to Y where the values must be incremented by 0.1. 

Boundary Conditions:  0.0 <= X, Y <= 100.0

Input Format:  The first line contains X and Y separated by a space.
Output Format: The first line contains the values separated by a space. 

Example Input/Output 1: 

Input:  3.2 3.8 
Output: 3.2 3.3 3.4 3.5 3.6 3.7 3.8 

Example Input/Output 2: 

Input:  9.4 10.2 
Output: 9.4 9.5 9.6 9.7 9.8 9.9 10.0 10.1 10.2

SOLUTION:
'''
#AliceinBORwith0
x, y = map(float, input().split())
while(x<=(y+0.01)):
    print(("%.1f"%x), end=" ")
    x+=0.1
