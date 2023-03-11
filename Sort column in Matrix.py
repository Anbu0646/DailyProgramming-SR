'''
The program must accept an RxC matrix as the input. The program must sort the columns in the matrix based on the largest integer of each column in descending order. Then the program must print the sorted matrix as the output. 

Note: If more than one column have the same maximum element, then the same order must be maintained among those columns. 

Boundary Condition(s): 1 <= R, C <= 1000 

Input Format:  The first line contains R and C separated by a space. The next R lines contain C integers each separated by space. 
Output Format: The first R lines contain the sorted matrix. 

Example Input/Output 1: 

Input:  3 4 
        45 18 38 36 
        5  33 33 4 
        40 30 24 42 

Output: 45 36 38 18
        5 4 33 33
        40 42 24 30 

Explanation: There are four columns in the given matrix. The maximum elements in each column are 45 33 38 and 42. The columns are sorted based on these maximum values. 

Example Input/Output 2: 

Input:  5 5 
        61 37 83 61 12 
        77 56 62 16 47 
        31 51 38 22 72 
        71 10 18 32 75 
        53 15 84 47 43 

Output: 83 61 12 61 37
        62 77 47 16 56 
        38 31 72 22 51 
        18 71 75 32 10 
        84 53 43 47 15

SOLUTION:
'''
