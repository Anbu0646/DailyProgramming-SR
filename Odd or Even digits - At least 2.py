'''
The program must accept two integers X and Y as the input. The program must print the integers from X to Y (inclusive of X and Y) having at least two odd digits and at 
least two even digits as the output. If there is no such integer from X to Y then the program must print -1 as the output.

Boundary Condition(s): 1000 <= X, Y <= 10^8 

Input Format:  The first line contains the values of X and Y separated by a space(s). 
Output Format: The first line contains the N integers separated by a space.

Example Input/Output 1: 

Input:  3040 3061 
Output: 3041 3043 3045 3047 3049 3050 3052 3054 3056 3058 3061 

Explanation: Only 3041, 3043, 3045, 3047, 3049, 3050, 3052, 3054, 3056, 3058 and 3061 are having at least two odd digits and at least two even digits in the range from 
             3040 to 3061. So they are printed as the output. 
             
Example Input/Output 2: 

Input:  1130 1139 
Output: -1

SOLUTION:
'''

X, Y = map(int,input().split())
flag = False

for num in range(X, Y+1):
    odd, even = 0, 0
    for digit in str(num):
        if int(digit) % 2:
            odd += 1
        else:
            even += 1
    if odd>1 and even>1:
        print(num, end=" ")
        flag = True
        
if not flag:
    print(-1)
