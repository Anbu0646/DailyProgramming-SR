'''
The program must accept a string value S as the input. The program must print invalid if the alphabets are repeated continuously for more than two times. 
Else the program must print valid as the output. 

Boundary Condition(s): 3 <= Length of S <= 100 

Input Format:  The first line contains the values of string S. 
Output Format: The first line contains either invalid or valid. 

Example Input/Output 1: 

Input:  dreaaam 
Output: invalid 

Explanation: In dreaaam, a is repeated more than two times continuously. Hence the output is invalid. 

Example Input/Output 2: 

Input:  skillrack 
Output: valid

SOLUTION:
'''

s = input().strip()
flag = True

for i in range(len(s)-2):
    if s[i] == s[i+1] == s[i+2]:
        flag = False
        break

if flag:
    print("valid")
else:
    print("invalid")
