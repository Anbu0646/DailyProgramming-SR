'''
The program must accept a space separated string S as the input. The program must print the first character of each word in the string as the output. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format:  The first line contains the string S. 
Output Format: The first line contains a list of character(s). 

Example Input/Output 1: 

Input:  hello dude 
Output: hd 

Example Input/Output 2: 

Input:  she is my friend. 
Output: simf

SOLUTION:
'''

#ThuRaangshaarbatohka
print(*[i[0] for i in input().split()], sep='')
