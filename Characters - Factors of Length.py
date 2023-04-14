'''
The program must accept a string S as the input. The program must calculate the length of string S as L. 
Then the program must print the characters which are present at the positions of the factors of L in ascending order as the output. 

Boundary Condition(s): 1 <= Length of S <= 100

Input Format:  The first line contains the string S. 
Output Format: The first line contains the characters based on the above conditions. 

Example Input/Output 1: 

Input:  skillrack 
Output: sik 

Explanation: The length of the string "skillrack" is 9. The factors of 9 are 1, 3 and 9. 
             So the characters present at the positions 1, 3 and 9 are printed. 
             Hence the output is sik 
             
Example Input/Output 2:

Input:  google 
Output: gooe

SOLUTION:
'''

Str = input().strip()
Len = len(Str)

for i in range(1, Len + 1):
    if Len%i == 0:
            print(Str[i - 1], end="")
