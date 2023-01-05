'''
The program must accept N integers and two integers X, Y as the input. 
The program must print YES if the number of occurrences of X is greater than or equal to the number of occurrences of Y. 
Else the program must print NO as the output. 

Boundary Condition(s): 1 <= N <= 1000 
                       1 <= X, Y, Each integer value <= 10^8 

Input Format:  The first line contains the value of N. The second line contains N integers separated by space(s). The third line contains the values of X and Y separated by a space. 
Output Format: The first line contains either YES or NO. 

Example Input/Output 1: 

Input:  5  
        8 8 3 8 3 
        8 3 
Output: YES 
Explanation: The number of occurrences of 8 is 3. The number of occurrences of 3 is 2. So 8 occurs more than 3. Hence the output is YES

Example Input/Output 2: 

Input:  7 
        17 12 13 12 13 14 13 
        12 13 
Output: NO

SOLUTION:
'''

#1899withonly0
n=int(input())
l=list(map(int, input().split()))
x, y = map(int, input().split())
print("YES" if (l.count(x)>=l.count(y)) else "NO")
