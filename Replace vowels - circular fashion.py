'''
The program must accept a string S as the input. The program must replace all the vowels in S by the vowels a, e, i, o and u in a circular manner. 
Finally, the program must print the modified string as the output. 

Note: All the alphabets in S are only in lower case. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format:  The first line contains the string value S. 
Output Format: The first line contains the modified string value of S. 

Example Input/Output 1:

Input:  kingkong 
Output: kangkeng 

Explanation: The vowels in the string kingkong are i and o. So they are replaced by a and e. Hence the output is kangkeng 

Example Input/Output 2: 

Input:  icecreamchocolate 
Output: acecriomchucaleti

SOLUTION:
'''

word = input().strip()
vowels = "aeiou"
updated_word = ''
vowel_update_count = 0

for i in range(len(word)):
    if word[i] in vowels:
        updated_word += vowels[vowel_update_count]
        vowel_update_count = (vowel_update_count + 1) % 5
    else:
        updated_word += word[i]
        
print(updated_word)


'''
Aliter:

word=input()
vowels=["a","e","i","o","u"]
count=0
for i in word:
    if i in vowels:
        print(vowels[count], end="")
        count+=1
        if count==5:
            k=0
    else:
        print(i, end="")
        
 '''
