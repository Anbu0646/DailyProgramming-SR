'''
The program must accept N string values as the input. The program must print the string having maximum number of consonants among the N string values as the output. 
If more than one string values have the maximum number of consonants then the program must print the first occurring string. 

Note: At least one string will always contain one consonant. 

Boundary Condition(s): 1 <= N <= 100 
                       1 <= Length of each string <= 100 
                       
Input Format:  The first line contains N. The next N lines, each contains a string.
Output Format: The first line contains the string having maximum number of consonants based on the above conditions.

Example Input/Output 1: 

Input:  3 
        burger 
        sandwich 
        pizza 
        
Output: sandwich 

Explanation: The string "burger" has 4 consonants. 
             The string "sandwich" has 6 consonants. 
             The string "pizza" has 3 consonants. 
             Here the string "sandwich" has the maximum number of consonants among the other string values. 
             Hence the output is sandwich 
             
Example Input/Output 2: 

Input:  5
        CALCIUM 
        SULPHATE 
        SODIUM 
        POTASSIUM 
        CATS 
        
Output: SULPHATE

SOLUTION:
'''

def count_consonants(string):
    vowels = 'aeiouAEIOU'
    consonants = 0
    for char in string:
        if char.isalpha() and char not in vowels:
            consonants += 1
    return consonants

n = int(input())
max_consonants = 0
max_consonant_string = ""

for i in range(n):
    string = input().strip()
    consonants = count_consonants(string)
    if consonants > max_consonants:
        max_consonants = consonants
        max_consonant_string = string

print(max_consonant_string)

'''
Aliter:

N = int(input())

max_consonants = 0
res = ""

for i in range(N):
    Str = input().strip()
    consonants = sum(1 for i in Str if i.isalpha() and i.lower() not in "aeiou")
    if consonants > max_consonants:
        max_consonants = consonants
        res = Str

print(res)
'''
