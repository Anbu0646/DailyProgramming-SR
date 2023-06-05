/*
The program must accept an integer N as the input. If the number of digits in N is even then the program must print product of every two digits in N as the output. 
If the number of the digits in N is odd then the program must print the product of every two digits in N then it must print the remaining digit (last digit) as it is as the output. 

Boundary Condition(s): 1 <= N <= 10^15 

Input Format: 

The first line contains the integer N. 

Output Format: 

The first line contains the integers separated by space as per the given condition. 

Example Input/Output 1: 

Input: 

1234 

Output: 

2 12 

Explanation: 

The number of digits in 1234 is 4 which is even. 
The product of the first two digits is 2 (1 * 2). 
The product of the next two digits is 12 (3 * 4). 
Hence the output is 2 12. 

Example Input/Output 2: 

Input: 

19849 

Output: 

9 32 9

SOLUTION:
*/

N = input().strip()
if len(N) % 2 == 0:
    for i in range(0, len(N), 2):
        print(int(N[i])*int(N[i + 1]), end = " ")
else:
    for i in range(0, len(N) - 1, 2):
        print(int(N[i])*int(N[i + 1]), end = " ")
    print(N[-1])
