'''
The program must accept an integer N as the input. 
The program must find the factors of N and sort them in ascending order.
Then the program must print the factors of all the factors of N in ascending order as the output. 

Boundary Condition(s):  1 <= N <= 10^9 

Input Format:  The first line contains the value of N. 
Output Format: The lines each contain the integers separated by a space. 

Example Input/Output 1:

Input:  24 
Output: 1
        1 2 
        1 3
        1 2 4 
        1 2 3 6 
        1 2 4 8
        1 2 3 4 6 12 
        1 2 3 4 6 8 12 24

Explanation:  The factors of 24 are 1, 2, 3, 4, 6, 8, 12 and 24. 
So the factors of all the factors of 24 are printed as the output. 

Example Input/Output 2: 

Input:  87 
Output: 1
        1 3 
        1 29
        1 3 29 87

SOLUTION:
'''

n=int(input())
l=[]
for i in range(1, n+1):
    if(n%i==0):
        l.append(i)
for i in range(len(l)):
    for j in range(1, l[i]+1):
        if(l[i]%j==0):
            print(j, end=" ")
    print()
