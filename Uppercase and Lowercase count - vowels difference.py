'''
The program must accept a string S as the input. 
The program must print the absolute difference between the count of uppercase vowels and the count of lowercase vowels in the string S as the output. 

Note: At least one vowel will be present in the string S. 

Boundary Condition(s): 2 <= Length of S <= 100 

Input Format:  The first line contains the integer S. 
Output Format: The first line contains the absolute difference between the count of uppercase vowels and lowercase vowels in the string S.

Example Input/Output 1:

Input:  takEcare 
Output: 2 

Explanation: The lowercase vowels in the string "takEcare" are a, a and e. So their count is 3. 
             The uppercase vowel in the string "takEcare" is E. So their count is 1. 
             The absolute difference between 3 and 1 is 2. So it is printed.

Example Input/Output 2: 

Input:  cOmmUnicAtIOn 
Output: 4

SOLUTION:
'''

S = input().strip()
vowels = 'aeiouAEIOU'
UpC = len([i for i in S if (i.isupper() and i in vowels)])
LowC = len([i for i in S if (i.islower() and i in vowels)])
print(abs(UpC-LowC))
