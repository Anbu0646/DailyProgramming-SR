'''
The program must accept two integers X and Y as the input. The program must print the product of X and Y after swapping their unit digits as the output. 

Boundary Condition(s):  1 <= X, Y <= 10^9 

Input Format:  The first line contains the value of X and Y separated by a space. 
Output Format: The first line contains the product of X and Y after swapping their unit digits. 

Example Input/Output 1:

Input:  984 51
Output: 52974

Explanation: After swapping the unit digits of 984 and 51, their values become 981 and 54.
             So the product of 981 and 54 is 52974. 
             Hence the output is 52974

Example Input/Output 2: 

Input:  3988477 48754884
Output: 194457599172438

SOLUTION:
'''

x, y = map(str, input().split())
print( (int(x[:len(x)-1]+y[-1])) * (int(y[:len(y)-1]+x[-1])) )
