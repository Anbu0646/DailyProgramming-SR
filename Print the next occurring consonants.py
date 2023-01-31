'''
The program must accept a character ch as the input. The program must print the next occurring consonant as the output. 

Note: The output character must be of same case as the input character. 

Input Format:  The first line contains the character ch. 
Output Format: The first line contains the character as per the given condition. 

Example Input/Output 1: 

Input:  T 
Output: V 

Explanation: The next consonant after T is V hence V is printed as the output. 

Example Input/Output 2: 

Input:  F 
Output: G

SOLUTION:
'''

#Michael
c=input()
d=chr(ord(c)+1)
e=chr(ord(d)+1)
if c not in 'aeiouAEIOU':
    if d in 'aeiouAEIOU':
        print(e)
    else:
        print(d)
else:
    print(d)
