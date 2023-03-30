'''
The program must accept N integers and an integer X (where N is always divisible by X) as the input.The program must print the minimum of every X integers among the 
N integers as the output. 

Boundary Condition(s): 2 <= N <= 100, 2 <= X <= N, 1 <= Each integer value <= 10^8 

Input Format:  The first line contains N and X separated by a space. The second line contains N integers each separated by space(s). 
Output Format: The first line contains the minimum of every X integers among the N integers each separated by a space. 

Example Input/Output 1: 

Input:  6 3 
        3 2 1 4 5 6 

Output: 1 4 

Explanation: The first three integers are 3, 2 and 1. So the minimum among these 3 integers is 1. 
             The last three integers are 4, 5 and 6. So the minimum among these 3 integers is 4. 
             Hence the output is 1 4 

Example Input/Output 2:

Input:  8 2 
        45 32 67 18 39 14 27 34 

Output: 32 18 14 27

SOLUTION:
'''

N, X = map(int, input().split())
Arr = list(map(int, input().split()))

for i in range(0, N, X):
    print(min(Arr[i:i+X]), end=" ")
