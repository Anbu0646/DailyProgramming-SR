/*
The program must accept a string value S representing an expression as the input. The expression will contain integers as well as plus and minus operators. The program must switch the operators plus and minus and then evaluate the expression and print the expression value as the output. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format:  The first line contains S. 

Output Format: The first line contains the value of the expression. 

Example Input/Output 1: 

Input: 5+10-20 

Output: 15 

Explanation: 

Here the expression is 5+10-20. 
The '+' operator is replaced by '-' and the '-' operator is replaced by '+'. 
Hence the result is 5-10+20 = 15. 

Example Input/Output 2: 

Input:  100-20+40-1 

Output: 81

SOLUTION:
*/

Equation = input().strip()
Equation = Equation.replace('+', 'a')
Equation = Equation.replace('-', '+')
Equation = Equation.replace('a', '-')
Result = eval(Equation)
print(Result)
