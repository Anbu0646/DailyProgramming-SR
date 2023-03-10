'''
The program must accept a string S and an integer X where X is divisible by the length of S as the input.
The program must print every X characters for X times in S as the output. 

Boundary Condition(s): 1 <= Length of S <= 300 
                       1 <= X <= Length of S 

Input format:  The first line contains the string S. The second line contains the integer X. 
Output Format: The first line contains the modified string. 

Example Input/Output 1: 

Input:  terminal 
        2 
Output: tetermrmininalal 

Explanation: X = 2, The first two characters in terminal are te. So te is printed as two times. Hence tete is printed. 
                    The next two characters in terminal are rm. So rm is printed as two times. Hence rmrm is printed. 
                    The next two characters in terminal are in. So in is printed as two times. Hence inin is printed. 
                    The next two characters in terminal are al. So al is printed as two times. Hence alal is printed. 

Example Input/Output 2: 

Input:  orange  
	      3 
Output: oraoraorangengenge

SOLUTION:
'''

s = input().strip()
x = int(input())
n = len(s)

for i in range(0, n, x):
    print(s[i:i+x]*x, end='')
    
