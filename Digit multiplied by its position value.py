'''
The program must accept an integer N as the input. The program must print a value for each digit as the digit multiplied by its position value. 

Boundary Condition(s): 1 <= N <= 10^8 

Input Format:  The first line contains an integer N.
Output Format: The first line contains values separated by a space. 

Example Input/Output 1: 

Input:  12354 
Output: 10000 2000 300 50 4

Explanation:  In 12354, the digit at 10000th position is 1. 1 multiplied by 10000 is 10000. 
              The digit at 1000th position is 2 and 2 multiplied by 1000 is 2000.
              The digit at 100th position is 3 and 3 multiplied by 100 is 300. 
              The digit at 10th position is 5 and 5 multiplied by 10 is 50. 
              The digit at unit position is 4 and 4 multiplied by 1 is 4.
              Hence the output is 10000 2000 300 50 4 

Example Input/Output 2:

Input:  5001 
Output: 5000 0 0 1

SOLUTION:
'''

number = input()
for digits in range(len(number)):
    digit = int(number[digits])
    position = 10**(len(number) - digits - 1)
    print(digit * position, end=" ")
