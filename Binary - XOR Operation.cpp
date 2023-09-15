/*
The program must accept the binary representation of two integers X and Y as the input.
The program must print the result of the bitwise XOR operation of the two binary representations (X ^ Y) as the output. 

Note: The number of bits in the binary representation of X and Y are always equal. 

Boundary Condition(s): 1 <= Length of each binary representation <= 63 

Input Format: 

The first line contains the binary representation of X. 
The second line contains the binary representation of Y. 

Output Format: The first line contains the binary representation of X ^ Y. 

Example Input/Output 1: 

Input: 

1010100 
0100101 

Output: 1110001 

Example Input/Output 2: 

Input:  

1110 
1010 

Output: 0100

SOLUTION:
*/



/*
PY3:
X = input().strip()
Y = input().strip()
XOR = ""
for i in range(len(X)):
    if X[i] == Y[i]:
        XOR += "0"
    else:
        XOR += "1"
print(XOR)
*/
