'''
The program must accept N integers and an integer X as the input. The program must print YES if X occurs exactly X times. 
Else the program must print NO as the output. 

Boundary Condition(s): 1 <= N, X <= 1000 
                       1 <= Each integer value <= 10^8 

Input Format:  The first line contains the value of N. The second line contains N integers separated by space(s). The third line contains the value of X. 
Output Format: The first line contains either YES or NO. 

Example Input/Output 1: 

Input:  5 
        2 1 5 2 4 
        2 
Output: YES 

Explanation: Here 2 occurs exactly 2 times. Hence the output is YES 

Example Input/Output 2: 

Input:  8 
        5 7 5 6 5 8 10 5 
        5
Output: NO

SOLUTION:
'''

#1899withonly0
n=int(input())
l=list(map(int, input().split()))
x=int(input())
print("YES" if l.count(x)==x else "NO")
