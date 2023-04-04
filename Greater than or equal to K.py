'''
The program must accept N integers and an integer K as the input. The program must print yes if all the integers are greater than or equal to K as the output. 
Else the program must print no as the output. 

Boundary Condition(s): 1 <= N <= 1000 
                       1 <= Each integer value, K <= 10^6 
                       
Input Format:  The first line contains N. 
               The second line contains N integers separated by space. 
               The third line contains K. 
Output Format: The first line contains yes or no. 

Example Input/Output 1: 

Input:  6 
        654 78 12 45 23 98 
        12 
        
Output: yes 

Explanation: All the integers are greater than or equal to 12. Hence yes is printed. 

Example Input/Output 2: 

Input:  7 
        95 78 26 59 780 65 44 
        32

Output: no

SOLUTION:
'''

N = int(input())
Arr = list(map(int, input().split()))
K = int(input())
Arr1 = [i for i in Arr if i>=K]
print("yes" if len(Arr1) == len(Arr) else "no")
