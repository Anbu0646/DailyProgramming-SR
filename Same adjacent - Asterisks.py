'''
The program must accept a string S as the input. The program must print YES if the adjacent characters of each asterisk (*) are same. 
Else the program must print NO as the output. 

Note: The string does not contain any continuous asterisks. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format:  The first line contains the string S. 
Output Format: The first line contains either YES or NO 

Example Input/Output 1: 

Input:  ab*bkt*tz 
Output: YES 

Explanation: 

The adjacent characters of the first * are b and b. Here the adjacent characters are same. 
The adjacent characters of the second * are t and t. Here the adjacent characters are same. \
Hence the output is YES

Example Input/Output 2: 

Input:  cp*pl*l*h 
Output: NO

SOLUTION:
'''

Str  = input().strip()

for i in range(len(Str)):
    if Str[i] == '*':
        if i==0 or i==len(Str)-1:
            continue
        elif Str[i - 1] == Str[i + 1]:
            continue
        else:
            print("NO")
            break
else:
    print("YES")
