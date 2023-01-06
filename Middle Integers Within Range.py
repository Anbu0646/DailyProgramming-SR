'''
N integers are passed as input to the program. 
The program must print YES if all the N-2 integers between first and last integers are greater than the first integer and lesser than the last (Nth) integer. 
Else the program must print NO as the output. 

Boundary Condition(s): 1 <= N <= 100 

Input Format:  The first line contains the value of N. The second line contains N integers separated by a space. 
Output Format: The first line contains either YES or NO 

Example Input/Output 1: 

Input:  5 
        10 20 12 18 90 
Output: YES 

Explanation: 20 12 18 - all three are greater than 10 and lesser than 90. Hence YES is printed. 

Example Input/Output 2: 

Input:  5 
        10 20 12 18 19 
Output: NO 

Explanation: 20 is not lesser than 19. Hence NO is printed

SOLUTION:
'''

#1899withonly0
n=int(input())
l=list(map(int, input().split()))
f=l[0]; l1=l[- 1]
b, c=0, 0
l.pop(0)
l.pop(-1)
for i in range(len(l)):
    if(l[i]>f and l[i]<l1): c=1
    else: b=1
print("YES" if (c==1 and b==0) else "NO")
