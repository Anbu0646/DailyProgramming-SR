'''

The program must accept a string S and an integer K as the input. The program must reverse the middle K characters in S. Then the program must print the modified string as the output. Note: The length of S and the integer K are always either odd or even. 

Boundary Condition(s): 1 <= Length of S <= 100 
                       1 <= K <= Length of S 

Input Format:  The first line contains the string S. 
               The second line contains the integer K. 

Output Format: The first line contains the modified string. 

Example Input/Output 1: 

Input:  acknowledgement 
        7 
        
Output: acknegdelwoment 

Explanation: The middle 7 characters are 'o', 'w', 'l', 'e', 'd', 'g' and 'e'. 
             After reversing the middle 7 characters, the string becomes acknegdelwoment 
             Hence the output is acknegdelwoment 
             
Example Input/Output 2: 

Input:  bottle 
        4 
        
Output: blttoe

SOLUTION:
'''

#WednesdaywithJ&A
s=input().strip()
n=int(input())
l=len(s)
x=(l-n)//2
for i in range(x): print(s[i], end="")
for j in range(x+n-1, x-1, -1): print(s[j], end="")
for k in range(x+n, l): print(s[k], end="")
