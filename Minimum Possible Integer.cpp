/*
The program must accept two integers N and K as the input. 
The program must print the minimum possible integer X which can be obtained by modifying at most K digits in N as the output. 

Note: The number of digits in N and X should be equal without any leading zeros. 

Boundary Condition(s): 

1 <= N <= 10^7 
1 <= K <= 7 

Input Format:  

The first line contains N. 
The second line contains K. 

Output Format: The first line contains X. 

Example Input/Output 1: 

Input:  

51528 
3 

Output: 10028 

Explanation: 

The minimum possible integer is obtained by modifying the first three digits of 51528. 
The first digit of 51528 is changed to 1. 
The second digit of 51528 is changed to 0. 
The third digit of 51528 is changed to 0.
Hence the output is 10028. 

Example Input/Output 2: 

Input:  

10504 
2 

Output: 10000

SOLUTION:
*/


/*
C:

PY3:

N = int(input())
K = int(input())
N_as_String = list(str(N))

for i in range(len(N_as_String)):
    if K == 0:
        break
    if i == 0 and N_as_String[i] != '1':
        N_as_String[i] = '1'
        K -= 1
    elif i > 0 and N_as_String[i] != '0':
        K -= 1
        N_as_String[i] = '0'

print(''.join(N_as_String))
*/
