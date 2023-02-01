'''
The program must accept two alphabets ch1 and ch2 as the input. 
The program must print the count of consonants between the given alphabets (including ch1 and ch2) as the output.

Input Format:  The first line contains ch1 and ch2 separated by a space. 
Output Format: The first line contains the count of consonants between ch1 and ch2. 

Example Input/Output 1: 

Input:  d j 
Output: 5 

Example Input/Output 2: 

Input:  s u 
Output: 2

SOLUTION:
'''

#Michael:
c1, c2 = map(str, input().split())
s='abcdefghijklmnopqrstuvwxyz'
s1=s[s.index(c1):s.index(c2)+1]
s2=0
for i in s1:
    if i not in 'aeiou':
        s2+=1
print(s2)
