/*
The program must accept a string N as the input. The program must print the output based on the following conditions.

 - If N is a valid binary representation then print "Binary" as the output. 
- Else if N is a valid octal representation then print "Octal" as the output. 
- Else if N is a valid decimal representation then print "Decimal" as the output.
 - Else if N is a valid hexadecimal representation then print "Hexadecimal" as the output.
 - Else the program must print "Invalid" as the output. 

Note: The alphabets in N are only in upper case. 

Boundary Condition(s): 1 <= Length of N <= 100 

Input Format: 

The first line contains the string N. 

Output Format: 

The first line contains the string value based on the conditions mentioned above. 

Example Input/Output 1: 

Input: 110 

Output: Binary 

Explanation: 

110 is the valid binary, octal, decimal and hexadecimal representations. 
But in the mentioned order, Binary comes first. 
Hence the output is Binary 

Example Input/Output 2: 

Input: 62067 

Output: Octal 

Explanation: 

62067 is the valid octal, decimal and hexadecimal representations. 
But in the mentioned order, Octal comes first. 
Hence the output is Octal 

Example Input/Output 3: 

Input: 10G 

Output: Invalid

SOLUTION:
*/

N = input().strip()

if all(i in ['0', '1'] for i in N): print("Binary")
elif all(i.isdigit() and int(i) < 8 for i in N): print("Octal")
elif N.isdigit(): print("Decimal")
elif all(i.isdigit() or i in ['A', 'B', 'C', 'D', 'E', 'F'] for i in N): print("Hexadecimal")
else: print("Invalid")
