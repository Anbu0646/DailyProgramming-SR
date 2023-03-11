'''
The program must accept N integers (where N is always divisible by 3) as the input. 
The program must find the minimum of every three integers among the N integers. 
Then the program must print the maximum integer among the obtained minimum integers as the output. 

Boundary Condition(s): 3 <= N <= 99 
                       1 <= Each integer value <= 10^7 

Input Format:  The first line contains the value of N. 
               The second line contains N integers separated by space(s).
Output Format: The first line contains the integer based on the given conditions. 

Example Input/Output 1: 

Input:  6 
        3 2 5 1 8 6 
        
Output: 2 

Explanation:  The minimum of the first three integers is 2. 
              The minimum of the last three integers is 1. 
              Here 2 is the maximum among 2 and 1. 
              So 2 is printed. 

Example Input/Output 2:
 
Input:  9 
        51 13 11 87 86 84 81 66 58
        
Output: 84

SOLUTION:
'''

N = int(input())
Array = list(map(int, input().split()))
Minimum_Values_of_Array = []

for i in range(0, N, 3):
    Minimum_Values_of_Array.append(min(Array[i : i + 3]))
    
print(max(Minimum_Values_of_Array))
