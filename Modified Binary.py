'''
The program must accept an integer N as the input. The program must find the binary representation of N. 
Then the program must replace all the 1's by numbering them from 1 (left to right). 
Then the program must replace all the 0's by numbering them from 1 (right to left). 
Finally, the program must print the modified binary representation of N as the output. 

Boundary Condition(s): 1 <= N <= 10^8 

Input Format:  The first line contains the value of N. 

Output Format: The first line contains the modified binary representation of N. 

Example Input/Output 1: 

Input:  34 

Output: 143221 

Explanation: 

The binary representation of 34 is 100010. 
After replacing all the 1's by numbering them from 1 (left to right), the binary representation becomes 100020. 
After replacing all the 0's by numbering them from 1 (right to left), the binary representation becomes 143221. 

Example Input/Output 2: 

Input:  90402 

Output: 1112310987465543261

Example Input/Output 3:

Input:  99999999 

Output: 1823456776891011543211213141516171819

SOLUTION:
'''

n = int(input())
b = list(bin(n)[2:])
ctr = 1
for i in range(len(b)):
    if b[i] == '1':
        b[i] = str(ctr)
        ctr += 1
ctr = 1
for i in range(len(b) - 1, -1, -1):
    if b[i] == '0':
        b[i] = str(ctr)
        ctr += 1
print(''.join(b))
