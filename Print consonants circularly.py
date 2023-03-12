'''
The program must accept an alphabet CH as the input. The program must print all the consonants from CH circularly as the output. 

Note: CH is always in lowercase.

Boundary Condition(s): 'a' <= CH <= 'z' 

Input Format:  The first line contains CH. 
Output Format: The first line contains all the consonants in lowercase from CH circularly. 

Example Input/Output 1: 

Input:  w 
Output: wxyzbcdfghjklmnpqrstv 

Explanation: All the lowercase consonants are printed circularly starting from the given alphabet w 

Example Input/Output 2:

Input:  e 
Output: fghjklmnpqrstvwxyzbcd

SOLUTION:
'''

Character = input().strip()
Vowels = 'aeiou'
Consonants_pack = ""

for i in range(ord(Character), ord('z') + 1):
    if chr(i) not in Vowels:
        Consonants_pack += chr(i)
        
for j in range(ord('a'), ord(Character)):
    if chr(j) not in Vowels:
        Consonants_pack += chr(j)

print(Consonants_pack)
