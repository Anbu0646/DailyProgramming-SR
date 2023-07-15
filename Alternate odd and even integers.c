/*
The program must accept a list of integers as the input. 
The program must print the minimum number of changes (possibly zero) required in the list to contain odd and even integers alternatively or vice-versa. 
A change in the list represents adding 1 to an integer or subtracting 1 from an integer which is used to convert the integer from odd to even or even to odd. 

Boundary Condition(s): 2 <= Each integer value <= 10^5

Input Format:  The first line contains the list of integers separated by space(s). 

Output Format: The first line contains the integer based on the given conditions. 

Example Input/Output 1: 

Input:  11 7 4 9 13 17 

Output: 2 

Explanation: 

Here minimum 2 changes are required to make the list as list of alternative even and odd integers. 
The first change makes the first integer 11 to an even integer (10 or 12). 
The second change makes the fifth integer 13 to an even integer (12 or 14). 
Hence 2 is printed as the output. 

Example Input/Output 2: 

Input:  11 40 65 7 94 5 57 

Output: 3 

Explanation: 

Here minimum 3 changes are required to make the list as list of alternative odd and even integers. 
The first change makes the fourth integer 7 to an even integer (6 or 8). 
The second change makes the fifth integer 94 to an odd integer (93 or 95). 
The third change makes the sixth integer 5 to an even integer (4 or 6). 
Hence 3 is printed as the output.

SOLUTION:
*/
