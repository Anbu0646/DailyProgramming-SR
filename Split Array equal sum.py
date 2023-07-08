'''
The program must accept an integer array of size N as the input. 
The program must print YES if it is possible to split the array into two sides so that the sum of the integers on one side is equal to the sum of the integers on the other side. 
Else the program must print NO as the output. 

Boundary Condition(s): 

2 <= N <= 100 
1 <= Each integer value <= 10^5 

Input Format: 

The first line contains the value of N. 
The second line contains N integers separated by a space. 

Output Format: 

The first line contains either YES or NO. 

Example Input/Output 1: 

Input: 

5 
5  4  7  1  1 

Output: YES 

Explanation: 

The array can be split as "5 4" and "7 1 1".
The sum of the integers on one side is 9 (5 + 4). 
The sum of the integers on the other side is 9 (7 + 1 + 1). 
Here the sum of the integers on one side is equal to the sum of the integers on the other side. Hence the output is YES. 

Example Input/Output 2: 

Input: 

6 
2  6  8  3  4  1 

Output: NO

SOLUTION:
'''

N = int(input())
Arr = list(map(int, input().split()))

Sum = sum(Arr)
Each_value = 0

for i in range(N):
    Each_value += Arr[i]
    if Each_value == (Sum - Each_value):
        print("YES")
        exit()
        
print("NO")
