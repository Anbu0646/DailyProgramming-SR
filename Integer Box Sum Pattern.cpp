/*
The program must accept two integers X and Y as the input. 
The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s): 1 <= X < Y <= 1000

Input Format:  The first line contains X and Y separated by a space.

Output Format: The lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1:

Input:  1 5 

Output: 

+--+
|01| 
|02| 
|03| 
|04|
|05| 
+--+ 
|15|
+--+ 

Example Input/Output 2: 

Input:  110 113 

Output: 

+---+
|110| 
|111| 
|112| 
|113|
+---+
|446|
+---+

SOLUTION:
*/



/*
PY3:
X, Y = map(int, input().split())
Sum = 0

for i in range(X, Y + 1):
    Sum += i

Len = len(str(Sum))

Pattern = '+' + '-' * Len + '+'

print(Pattern)

for i in range(X, Y + 1):
    Length = len(str(i))
    print('|' + '0' * (Len - Length) + str(i) + '|')

print(Pattern)
print('|' + str(Sum) + '|')
print(Pattern)
*/
