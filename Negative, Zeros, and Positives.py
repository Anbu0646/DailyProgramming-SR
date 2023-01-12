'''
N integers are passed as the input to the program.
The program must print the negative integers, followed by zeroes and finally the positive numbers in the reverse order of their occurrence. 

Boundary Condition(s):  1 <= N <= 100 

Input Format:  The first line contains the value of N. 
               The second line contains the N integers separated by a space. 
Output Format: The first line contains N integers separated by a space. 

Example Input/Output 1: 

Input:   7 
         10 -90 66 0 22 0 -14 
Output: -14 -90 0 0 22 66 10 

Explanation: The negative integers from the end are -14 -90. 
There are two zeroes. 
The positive integers from the end are 22 66 10. 

Example Input/Output 2: 

Input:    5 
          10 20 -88 98 -90 
Output:  -90 -88 98 20 10

SOLUTION:
'''

#ChinnasiruchinnasiruRagasiyamey
n=int(input())
l=list(map(int, input().split()))
for i in range(n-1, -1, -1):
    if(l[i]<0):
        print(l[i], end=' ')
for j in range(n-1, -1, -1):
    if(l[j]==0):
        print(l[j], end=' ')
for k in range(n-1, -1, -1):
    if(l[k]>0):
        print(l[k], end=' ')
