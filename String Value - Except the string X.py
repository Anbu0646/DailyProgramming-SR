'''
The program must accept N string values and an integer X as the input. The program must print all the string values except the string values with the length X. 
If all the N string values are of the same length as X then the program must print -1 as the output. 

Boundary Condition(s):  1 <= N <= 100 
                        1 <= X, Length of each string <= 1000 

Input Format:  The first line contains the values of N and X separated by a space. 
               The next N lines each contain a string.

Output Format: The list of lines each contains a string or the first line contains -1.

Example Input/Output 1: 

Input:  4 6
        football 
        player 
        cricket 
        coder 

Output: football 
        cricket 
        coder

Explanation: Only the string "player" has the length 6. So it is not printed in the output. 

Example Input/Output 2: 

Input:  4 3 
        all 
        age 
        and 
        are 

Output: -1

SOLUTION:
'''

#Thalaivan Irukiraan Thayangaadhey
n, x = map(int, input().split())
f=0
for i in range(n):
    s=input().strip()
    if(len(s)==x):  continue
    else:   
        print(s)
        f=1
if(f==0):   print("-1")
