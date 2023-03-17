'''
The program must accept a string S as the input. 
The program must reverse the characters between the first occuring consonant and the last occuring consonant (inclusive of both the consonants) in the string. 
Then the program must print the modified string as the output. 

Note: At least two consonants will be present in the string S. 

Boundary Condition(s):  2 <= Length of S <= 1000 

Input Format:  The first line contains the string S. 
Output Format: The first line contains the modified string S. 

Example Input/Output 1: 

Input:  aroma 
Output: amora 

Explanation:  The first occurring consonant is r.
              The last occurring consonant is m. 
              So "rom" is reversed as "mor". 
              Hence the output is amora 

Example Input/Output 2: 

Input:  aEilkjOpqrstuAe 
Output: aEitsrqpOjkluAe

SOLUTION:
'''

S=input().strip()
vowels = "aeiouAEIOU"
consonants = []

for i in range(len(S)):
    if S[i] not in vowels:
        consonants.append(i)
        
print(S[:consonants[0]] + (S[consonants[0]:(consonants[-1]+1)][::-1]) + S[(consonants[-1]+1):])
