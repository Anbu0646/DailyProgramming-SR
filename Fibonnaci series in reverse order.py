'''
The program must accept an integer N as the input. The program must print the fibonacci series in the reverse order as the output. 

Boundary Condition(s): 5 <= N <= 85 

Input Format:  The first line contains the value of N. 
Output Format: The first line contains the fibonacci series separated by a space. 

Example Input/Output 1: 

Input:  5 
Output: 3 2 1 1 0 

Example Input/Output 2: 
Input:  12 
Output: 89 55 34 21 13 8 5 3 2 1 1 0 

SOLUTION:

'''
# => UNFOUNDERwithJ & Ragav:
n=int(input())
l=[0]*n
l[0], l[1] = 0, 1
for i in range(2, n):
        l[i]=l[i - 1]+l[i - 2]
print(*l[::-1])
