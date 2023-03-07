'''
The program must accept N integers and an integer X as the input. The integer X represents the position of a digit as mentioned below. 
- If X = 1 then it represents the unit digit. 
- If X = 2 then it represents the tenth digit. 
- If X = 3 then it represents the hundredth digit. 
- If X = 4 then it represents the thousandth digit and so on. 
The program must print the integer which has the maximum digit in the position X as the output.
If more than integer has the same maximum digit in the position X then print the first occurring integer as the output. 

Note: At least one integer with the Xth position must be present in the N integers. 

Boundary Condition(s): 1 <= N <= 100 
                       1 <= Each integer value <= 10^18 
                       1 <= X <= 19 

Input Format:  The first line contains the value of N. 
The second line contains N integers separated by space(s). 
The third line contains the value of X. 
Output Format: The first line contains the integer based on the given conditions. 

Example Input/Output 1:

Input:  5 
        435 234137 5098 1988 2039 
        3 
Output: 1988

Explanation: Here X = 3, so it represents the hundredth digit. The integer with the maximum digit in the position of the hundredth digit is 1988.

Example Input/Output 2: 

Input:  4 
        164 21875 210 685 
        1 
Output: 21875

SOLUTION:
'''

N=int(input())
liz=list(map(int, input().split()))
X=int(input())

max_N=-1 
Result=-1

for i in liz:
    current_value=int(str(i)[-X])
    if current_value > max_N:
        max_N=current_value
        Result=i
    
print(Result)
