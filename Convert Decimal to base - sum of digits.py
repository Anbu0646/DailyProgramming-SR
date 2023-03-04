'''
The program must accept four integers as N1, N2, B1 and B2 as the input. N1 and N2 represent the decimal numbers and B1 and B2 represent the base values.
The program must convert N1 from decimal to the base B1 as X and the program must convert N2 from the decimal to the base B2 as Y.
Then the program must print the sum of all the digits in X and Y as the output. 

Boundary Condition(s): 1 <= N1, N2 <= 10^7
                       2 <= B1, B2 <= 10 

Input Format:  The first line contains two integers N1 and B1 separated by a space. 
The second line contains two integers N2 and B2 separated by a space.
Output Format: The first line contains the sum of all the digits in X and Y. 

Example Input/Output 1: 

Input:  12 8 
        10 5 
Output: 7

Explanation:  (12)10 is converted to the base 8. So X = (14)8. 
              (10)10 is converted to the base 5. So Y = (20)5. 
              The sum of all the digits in 14 and 20 is 7 (1 + 4 + 2 + 0).
              Hence the output is 7 

Example Input/Output 2:

Input:  5 2
        15 7 
Output: 5

SOLUTION:
'''

def base(n, b):
    s=0
    
    while(n>0):
        s+=(n%b)
        n//=b
        
    return s

n1, b1 = map(int, input().split()) 
n2, b2 = map(int, input().split())
print(base(n1, b1)+base(n2, b2))
