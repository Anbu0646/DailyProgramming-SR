'''
The program must accept N integers as the input. 
The program must print yes if the integers are sorted in descending order as the output. 
Else the program must print no as the output. 

Boundary Condition(s): 1 <= N <= 1000 

Input Format:  The first line contains the value of N. 
               The second line contains N integers separated by space(s). 
Output Format: The first line contains either yes or no. 

Example Input/Output 1: 

Input:  6 
        8 4 4 2 2 2 
Output: yes 

Explanation:  All the 6 integers are arranged in descending order so the output is yes. 

Example Input/Output 2: 

Input:  8 
        10 10 6 8 8 6 6 4 
Output: no

SOLUTION:
'''

#AYAPaKoshi
n=int(input())
l=list(map(int, input().split()))
l1=l[:]
l1.sort(reverse=True)
print("yes" if l==l1 else "no")
