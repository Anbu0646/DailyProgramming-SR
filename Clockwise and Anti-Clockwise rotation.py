'''
The program must accept N integers and two integers X and Y as the input. The program must rotate the N integers for X times in clockwise direction.
Then the program must rotate those N integers for Y times in anti-clockwise direction. 
Finally, the program must print the modified N integers as the output. 

Boundary Condition(s):  1 <= N, X, Y <= 10^4 
                        1 <= Each Integer Value <= 10^7 

Input Format:  The first line contains the integer N. 
The second line contains N integers separated by space(s). 
The third line contains two integers X and Y separated by a space.

Output Format: The first line contains N integers separated by a space. 

Example Input/Output 1:

Input:  5 
        10 20 30 40 50 
        3 2

Output: 50 10 20 30 40 

Explanation: The given integers are 10, 20, 30, 40 and 50. 
After rotating 3 times in the clockwise direction, the integers are 30, 40, 50, 10 and 20. 
After rotating 2 times in the anti-clockwise direction, the integers are 50, 10, 20, 30 and 40.
Hence the output is 50 10 20 30 40 

Example Input/Output 2:

Input: 4
       15 25 45 35
       5 14 

Output: 25 45 35 15

SOLUTION:
'''

from collections import deque
n=int(input())
l=[int(i) for i in input().split()]
x, y = map(int, input().split())
d=deque(l)
d.rotate(x)
d.rotate(-y)
print(*list(d))
