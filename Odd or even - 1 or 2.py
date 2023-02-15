'''
The program must accept an integer N as the input. The program must replace all the even digits in N by 1 and replace all the odd digits in N by 2. 
Then the program must print the modified value of N as the output. 

Boundary Condition(s): 1 <= N <= 10^9 

Input Format:  The first line contains the value of N. 
Output Format: The first line contains the modified value of N. 

Example Input/Output 1: 

Input:  465189 
Output: 112212 

Explanation: All the even digits in 465189 are replaced by 1. 
	           All the odd digits in 465189 are replaced by 2. 
	           Hence the output is 112212 

Example Input/Output 2: 

Input:  212112 
Output: 121221

SOLUTION:
'''

#Michael:
n=input().strip()
n1=""
for i in range(len(n)):
    if int(n[i])%2==0:
        n1+='1'
    else:
        n1+='2'
print(n1)
