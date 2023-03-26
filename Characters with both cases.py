'''
The program must accept a string S as the input. The program must print the alphabets in S which have both uppercase and lowercase alphabets in S as the output. 
The alphabets must be printed in the same order as given in the input. 

Note: There will be at least one alphabet with both uppercase and lowercase letters in S. 

Boundary Condition(s):  1 <= Length of S <= 100 

Input Format:  The first line contains S. 
Output Format: The first line contains alphabets as per the condition. 

Example Input/Output 1: 

Input:  aeroRadeOnoWe 
Output: roROo 

Explanation: The alphabets r and o are present in both uppercase and lowercase so they are printed. 

Example Input/Output 2: 

Input:  ImpeccAbleCitrus 
Output: IccCi

SOLUTION:
'''

String = input().strip()
String_Uppercase = set(); String_Lowercase = set()
String_with_both_Uppercase_and_Lowercase = ""

for character in String:
    if character.isupper():
        String_Uppercase.add(character)
    else:
        String_Lowercase.add(character)

for character in String:
    if character.upper() in String_Uppercase and character.lower() in String_Lowercase:
        String_with_both_Uppercase_and_Lowercase += character
    
print(String_with_both_Uppercase_and_Lowercase)
