/*
The program must accept an integer N as the input.
The program must form an integer X by removing exactly one digit from N so that X is divisible by 8. 
The program must print YES if it is possible to form the integer X. 
Else the program must print NO as the output. 

Boundary Condition(s): 10 <= N <= 10^8 

Input Format:  The first line contains N. 

Output Format: The first line contains YES or NO.

Example Input/Output 1: 

Input:  3454 

Output: YES 

Explanation: 

After removing the tenth digit 5, the integer becomes 344. 
Here, the integer 344 is divisible by 8.
So YES is printed as the output.

Example Input/Output 2: 

Input:  79

Output: NO

SOLUTION:
*/


/*
PY3:
N = input().strip()
for i in range(0, len(N)):
    Integer = int(N[:i] + N[i + 1:])
    if Integer % 8 == 0 and Integer != 0:
        print("YES")
        exit()
print("NO")
*/
