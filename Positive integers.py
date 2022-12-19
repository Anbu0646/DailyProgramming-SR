'''
The program must accept an integer N as the input. The program must print the sum of the first N terms in the series given below. The order of the series must be 1, -2, 3, -4, 5, -6 and so on (All the odd terms in the series formed from the positive odd numbers and all the even terms in the series formed from the negative even numbers). 

Boundary Condition(s): 1 <= N <= 10^4 

Input Format:  The first line contains the integer N. 
Output Format: The first line contains the sum of the first N terms in the above mentioned series. 

Example Input/Output 1: 

Input:  5 
Output: 3 

Explanation: The first 5 terms are 1, -2, 3, -4 and 5 and their sum is 3 (1 - 2 + 3 - 4 + 5). 
             Hence the output is 3 
             
Example Input/Output 2: 

Input:   8 
Output: -4

SOLUTION:
'''

N=int(input())
total=0
even=0
for vi in range(1, N+1):
    if(vi%2==0):
        even+=vi*-1
    else:
        total=vi
print(total+even)
