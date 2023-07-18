'''
The program must accept a string S as the input. 
The program must print the length of the longest palindrome that can be formed with the consonants in the string S as the output. 

Note: 

At least one consonant must be present in the string S. 
The string S contains only lower case alphabets. 

Boundary Condition(s): 1 <= Length of S <= 10^4 

Input Format:  The first line contains the string S. 

Output Format: The first line contains the length of the longest palindrome in the string S. 

Example Input/Output 1: 

Input:  abcdeedb 

Output: 5 

Explanation: The longest palindrome can be formed with bbddc (The order can be any but the length is 5). 

Example Input/Output 2: 

Input:  racecar 

Output: 4


SOLUTION:
'''
String = input().strip()
Vowels = "aeiou"

Substring = [i for i in String if i not in Vowels]

if len(Substring) == 0: print(0)

Characters = {}
Palindrome_Length = 0

for j in Substring:
    Characters[j] = Characters.get(j, 0) + 1
    
Count = 0

for k in Characters.values():
    if k % 2 != 0:
        Count += 1
    Palindrome_Length += k // 2 * 2
    
if Count > 0: Palindrome_Length += 1

print(Palindrome_Length)
'''
String = input().strip()
Substring = {}
Vowels = "aeiou"

for i in String:
    if i not in Vowels:
        if i in Substring:
            Substring[i] += 1
        else:
            Substring[i] = 1

Flag = False
Longest = 0

for j in Substring.values():
    Longest += j // 2 * 2
    if Longest % 2 == 0:
        Flag = True
if Flag: Longest += 1

print(Longest)
'''
