'''
The program accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 100 

Input Format:  The first line contains the value of N. 
Output Format: The first 2*N lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 
Output: 1 * * * 4 3 2 1 
	2 1 * * 3 2 1 * 
	3 2 1 * 2 1 * * 
	4 3 2 1 1 * * * 
	* * * 1 4 3 2 1 
	* * 2 1 * 3 2 1 
	* 3 2 1 * * 2 1
	4 3 2 1 * * * 1 

Example Input/Output 2: 

Input:  7 
Output: 1 * * * * * * 7 6 5 4 3 2 1 
	2 1 * * * * * 6 5 4 3 2 1 *
	3 2 1 * * * * 5 4 3 2 1 * * 
	4 3 2 1 * * * 4 3 2 1 * * * 
	5 4 3 2 1 * * 3 2 1 * * * * 
	6 5 4 3 2 1 * 2 1 * * * * * 
	7 6 5 4 3 2 1 1 * * * * * * 
	* * * * * * 1 7 6 5 4 3 2 1
	* * * * * 2 1 * 6 5 4 3 2 1 
	* * * * 3 2 1 * * 5 4 3 2 1 
	* * * 4 3 2 1 * * * 4 3 2 1 
	* * 5 4 3 2 1 * * * * 3 2 1 
	* 6 5 4 3 2 1 * * * * * 2 1
	7 6 5 4 3 2 1 * * * * * * 1

SOLUTION:
'''

n=int(input())

for i in range(n):
    for j in range(i+1, 0, -1):
        print(j, end=" ")
	
    print((n-i-1) * '* ', end="")

    for j in range(n-i, 0, -1):
        print(j,end=" ")
	
    print('* ' * i)

for i in range(n):
    print((n-i-1) * '* ', end="")

    for j in range(i+1, 0, -1):
        print(j,end=" ")
	
    print('* ' * i, end="")
    for j in range(n-i, 0, -1):
        print(j, end=" ")
    print()
    
