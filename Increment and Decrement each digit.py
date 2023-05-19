'''
The program must accept an integer N as the input. 
The program must increment all the even digits of N by 1 and decrement all the odd digits of N by 1. 
Then the program must print the modified N as the output. 

Boundary Condition(s): 

1 <= N <= 10^8 

Input Format: 

The first line contains N. 

Output Format: 

The first line contains modified N. 

Example Input/Output 1: 

Input:  12389 

Output: 3298 

Explanation: 

1 is odd so it is decremented as 0 the number becomes 02389. The leading zero for integer is removed as 2389. 
2 is even so it is incremented by 1 the number becomes 3389. 
3 is odd so it is decremented by 1 the number becomes 3289. 
8 is even so it is incremented by 1 the number becomes 3299. 
9 is odd so it is decremented by 1 the number becomes 3298. 

Example Input/Output 2: 

Input:  41571 

Output: 50460

SOLUTION:
'''

N = int(input())

N1 = 0
Mult = 1

while N > 0:
    dig = N % 10
    if dig % 2 == 0:
        N1 += (dig + 1) * Mult
    else:
        N1 += (dig - 1) * Mult
    
    N //= 10
    Mult *= 10

print(N1)
