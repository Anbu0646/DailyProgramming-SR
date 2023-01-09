'''
The program must accept a string S and a character CH as the input. The program must prepend CH to the string S if the first character is not equal to CH. 
Then the program must append CH to the string S if the last character is not equal to CH. Finally, the program must print the modified string as the output.

Note: The string S always contains lower case alphabets.

Boundary Condition(s):  1 <= Length of S <= 100 

Input Format:  The first line contains the string S. 
               The second line contains the character CH. 
Output Format: The first line contains the modified string. 

Example Input/Output 1: 

Input:  park 
        s 
Output: sparks 

Explanation:  Prepend 's' to the string "park" -> "spark" 
              Append 's' to the string "spark" -> "sparks" 
              Hence the output is sparks

Example Input/Output 2: 

Input:  jungle 
        j
Output: junglej

SOLUTION:
'''

#1899withonly0
s  = input().lower().strip()
s1 = input()
if(s[0]!=s1 and s[-1]==s1): s=s1+s
elif(s[0]==s1 and s[-1]!=s1): s=s+s1
elif(s[0]!=s1 and s[-1]!=s1):   s=s1+s+s1
print(s)
