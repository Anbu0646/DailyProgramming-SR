'''
The program must accept a string S as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Note: All the alphabets in S are only in lower case. 

Boundary Condition(s):  1 <= Length of S <= 1000 

Input Format:  The first line contains the string S. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1 

Input:  abcdacg 
Output: a 
        bb 
        ccc 
        dddd
        a 
        ccc 
        ggggggg

Example Input/Output 2: 

Input:  skillrack 
Output: sssssssssssssssssss
        kkkkkkkkkkk 
        iiiiiiiii
        llllllllllll
        llllllllllll
        rrrrrrrrrrrrrrrrrr 
        a 
        ccc
        kkkkkkkkkkk

SOLUTION:
'''

s=input().strip()
n=len(s)

for i in range(0, n):
    l=ord(s[i])-ord('a')+1
    for j in range(1, l+1):
        print(s[i], end="")
    print()
