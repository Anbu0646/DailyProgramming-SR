'''
The program must accept two positive integers X and N. 
Then the program must accept N-1 values which are multiples of X in sequence with just one multiple M missing in the sequence. 
The program must then print the missing multiple M. 

Note: The first multiple (among these N multiples) will always be present. 

Boundary Condition(s):  1 <= X <= 10^5 
1 <= N <= 100 

Input Format:  The first line contains X and N separated by a space.
The second line contains N-1 positive integer values. 
Output Format: The first line contains the missing multiple M. 

Example Input/Output 1: 

Input:  2 10 
12 14 16 20 22 24 26 28 30 
Output: 18 

Explanation: Here X=2 and N=10. So the 10 multiples of 2 starting from 12 must be 12 14 16 18 20 22 24 26 28 30. As 18 is missing, it is printed as the output.

SOLUTION:
'''

x, n = map(int, input().split())
l=list(map(int, input().split()))

for i in range(l[0], l[0]*n, x):
    if i not in l:
        print(i)
        break
