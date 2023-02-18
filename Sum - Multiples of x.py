'''
The program must accept N integers and an integer S as the input. 
The program must calculate the value of X such that the sum of integers at the positions of multiple of X is equal to S.
Then the program must print the value of X. If more than one such value exists, then the program must print the smallest value of X as the output.

Boundary Condition(s): 1 <= N <= 100
                       1 <= S <= 10^18
                       1 <= Value of each integer <= 10^9 

Input Format:  The first line contains the values of N and S separated by a space. 
               The second line contains N integers separated by space(s).
Output Format: The first line contains the value of X. 

Example Input/Output 1:

Input:  5 11
        4 5 3 6 7 
Output: 2 

Explanation: The integers which are present at the positions of mutiple of 2 are 5 and 6. So their sum is 11 which is equal to S. Hence the output is 2

Example Input/Output 2: 

Input:  8 34 
        11 14 18 20 12 34 19 14 
Output: 4

SOLUTION:
'''

#A&TW:Q
n, s = map(int, input().split())
l=list(map(int, input().split()))

for i in range(1, n+1):
    for j in range(1, n+1): 
        if j%i==0:
            c=sum(l[j - 1])
    if(c==s):
        print(i)
        break
