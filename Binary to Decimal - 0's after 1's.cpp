/*
The program must accept N integers containing only 0s and 1s as the input. 
The program must form a binary representation B by concatenating all the 1s followed by all the 0s. 
Finally, the program must print the decimal equivalent of B as the output. 

Boundary Condition(s): 2 <= N <= 63 

Input Format: 

The first line contains N. 
The second line contains N integers separated by a space. 

Output Format: The first line contains the decimal equivalent of B.

Example Input/Output 1: 

Input: 

4 
1 0 0 1 

Output: 12 

Explanation: 

The binary representation B is 1100 formed by concatenating two 1s followed by two 0s.
The decimal equivalent of 1100 is 12. 
Hence the output is 12.

Example Input/Output 2: 

Input:

6 
0 0 1 1 1 1

Output: 60

SOLUTION:
*/



/*
PY3:
N = int(input())
Arr = list(map(str, input().split()))
Ones = ""
Zeros = ""
Sum = ""
for i in Arr:
    if i == '1':
        Ones += i
    else:
        Zeros += i
Sum = Ones + Zeros
print(int(Sum, 2))
*/
