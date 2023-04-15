'''
The program must accept N integers as the input. The program must print the second most repeated integer among the N integers as the output. 
If there is more than one second most repeated integer then print the first occurring integer among those integers as the output. 
If there is no such integer then the program must print -1 as the output. 

Boundary Condition(s): 2 <= N <= 1000 
                       1 <= Each integer value <= 10^5
                       
Input Format:  The first line contains the value of N. The second line contains N integers separated by space(s).
Output Format: The first line contains either the second most repeated integer or -1. 

Example Input/Output 1: 

Input:  6 
        10 10 19 11 10 19
       
Output: 19 

Explanation: 10 is the most repeated integer because it is repeated for 3 times. 
             So 19 is the second most repeated integer because it is repeated for 2 times which is less than 3. 
             Hence the output is 19 
             
Example Input/Output 2: 

Input:  12 
        45 49 49 47 46 42 42 44 49 44 40 47 
        
Output: 47

SOLUTION:
'''
