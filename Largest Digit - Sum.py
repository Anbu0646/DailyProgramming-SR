'''
The program must accept N integers as the input. The program must print the sum of the largest digit of each integer in the N integers as the output. 

Boundary Condition(s): 1 <= N <= 100
                       0 <= Each integer value <= 10^18 
                       
Input Format:  The first line contains the integer N. The second line contains N integers separated by space(s). 
Output Format: The first line contains the sum of the largest digit of each integer in the N integers. 

Example Input/Output 1: 

Input:  5 
        83 610 829 9008 111 
        
Output: 33 

Explanation: The largest digit in 83 is 8. 
             The largest digit in 610 is 6. 
             The largest digit in 829 is 9. 
             The largest digit in 9008 is 9. 
             The largest digit in 111 is 1. 
             So their sum is 33 (8 + 6 + 9 + 9 + 1). 
             Hence the output is 33 

Example Input/Output 2:

Input:  4
        6097 9674 2313 4407 
        
Output: 28

SOLUTION:
'''

def Largest_digit(Num):
    Max_Digit = 0
    while Num > 0:
        Digit = Num % 10
        if Digit > Max_Digit:
            Max_Digit = Digit
        Num //= 10
    return Max_Digit

N = int(input())
Arr = list(map(int, input().split()))
Largest_Digit = 0

for i in Arr:
    Largest_Digit += Largest_digit(i)

print(Largest_Digit)
