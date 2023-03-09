'''
The program must accept N integers as the input. The program must print the largest integer for each set of integers having the same number of digits as the output. 
The largest integers must be printed in the order starting from the integers having the least number of digits to integers having the most number of digits.

Boundary Condition(s):  1 <= N <= 1000 
                        1 <= Each integer value <= 10^9

Input Format:  The first line contains N. The second line contain N integers separated by space.
Output Format: The first line contains largest integer as given in the condition above. 

Example Input/Output 1: 

Input:  7 
        32 458 98 12 805 8 2 

Output: 8 98 805 

Explanation:  The largest one digit integer among 8 and 2 is 8. 
              The largest two digit integer among 32 98 and 12 is 98. 
              The largest three digit integer among 458 and 805 is 805. 
              
Example Input/Output 2:

Input:  8 
        750 52 9066 330 275447 47 59 225 

Output: 59 750 9066 275447

SOLUTION:
'''
N=int(input())
List=list(map(int, input().split()))
List.sort()

for i in range(N - 1):
    if len(str(List[i + 1]))>len(str(List[i])):
        print(List[i], end=" ")
        
print(List[-1])
