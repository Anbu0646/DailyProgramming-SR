'''
The program must accept N integers as the input. The program must print only the integers which are ending with the value 10 as the output. 
If no integer ends with 10 then the program must print -1 as the output. 

Boundary Condition(s):  1 <= N <= 1000 
                        10 <= Each integer value <= 10^8 

Input Format:  The first line contains N. The second line contains N integers separated by a space. 
Output Format: The first line contains integers separated by a space. 

Example Input/Output 1: 

Input:  5 
        25 10 45 5410 27 
Output: 10 5410 

Explanation: The integers which are ending with 10 are 10 and 5410. Hence they are printed as the output. 

Example Input/Output 2: 

Input:  6 
        113 32 425 233 43 11 
Output: -1

SOLUTION:
'''

n=int(input())
l=list(map(int, input().split()))
f=0
for i in l:
  if((i%100)==10):
    print(i, end=" ")
    f=1
if(f==0): print(-1)
