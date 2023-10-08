/*
The program must accept two prime numbers X and Y as the input.
The program must print YES if Y is the next immediate prime number of X. 
Else the program must print NO as the output. 

Boundary Condition(s):  2 <= X < Y <= 10^6

Input Format:  The first line contains X and Y separated by a space. 

Output Format: The first line contains YES or NO. 

Example Input/Output 1:

Input:  2 3 

Output: YES 

Example Input/Output 2: 

Input:  7 11

Output: YES 

Example Input/Output 3: 

Input:  13 19 

Output: NO

SOLUTION:
*/


/*
PY3:
X, Y = map(int, input().split())
Index = 0
for i in range(X + 1, X*100):
    Count = 0
    for j in range(1, i):
        if i % j == 0:
            Count += 1
    if Count == 1:
        Index = i
        break
print( "YES" if Index == Y else "NO")
*/
