/*
The program must accept an integer N representing the octal representation of an integer X as the input. 
The program must print the binary representation of X as the output.

Note: N is always a valid octal representation.

Boundary Condition(s): 1 <= N <= 10^6

Input Format:  The first line contains N. 

Output Format: The first line contains the binary representation of X. 

Example Input/Output 1: 

Input:  14 

Output: 1100 

Explanation: 

14 is the octal representation of 12. 
So the binary representation of 12 is 1100. 
Hence the output is 1100.

Example Input/Output 2:

Input:  11

Output: 1001

SOLUTION:
*/



/*
PY3:
N = input()
N = int(N, 8)
print(bin(N)[2:])
*/
