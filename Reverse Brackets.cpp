/*
The program must accept a string S as the input. The program must reverse the characters between the brackets '(' and ')' in S. 
Then the program must remove the brackets and print the modified string S as the output.

Note: The string S always contains only one pair of brackets in the order '(' and ')'. 

Boundary Condition(s): 4 <= Length of S <= 1000 

Input Format:  The first line contains S. 

Output Format: The first line contains modified string S. 

Example Input/Output 1: 

Input:  foo(labt)l 

Output: football 

Explanation: 

The characters within the brackets are "labt". 
After reversing those characters, the string becomes football. 
Hence the output is football. 

Example Input/Output 2: 

Input: MO(NSOON) 

Output: MONOOSN

SOLUTION:
*/


/*
PY3:
String = input().strip()
Bracketed_string = String[String.index('(') + 1:String.index(')')][::-1]
print(String[:String.index('(')] + Bracketed_string + String[String.index(')') + 1:])
*/
