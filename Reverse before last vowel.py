'''
The program must accept a string S as the input. The program must reverse all the characters present before the last vowel and print the modified string as the output.

Note: The string S contains at least one vowel. 

Boundary Condition(s): 1 <= Length of String S <= 1000 

Input Format:  The first line contains the string S.
Output Format: The first line contains the modified string.

Example Input/Output 1: 

Input:  ethernet 
Output: nrehteet 

Explanation: The last vowel is e so all the alphabets before e are reversed. 

Example Input/Output 2:

Input:  umbrella 
Output: llerbmua

SOLUTION:
'''

#Michael:
s=input().strip()
v='aeiouAEIOU'
for i in range(len(s) - 1, 0, -1):
    if s[i] in v:
        print(s[:i][::-1]+s[i:])
        break
