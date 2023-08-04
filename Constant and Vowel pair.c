/*
The program must accept a string S as the input. 
The program must print all the pairs having a consonant followed by a vowel in the string S (in the order of occurrence) as the output.

Note: The string S always contains at least one pair having a consonant followed by a vowel. 

Boundary Condition(s):  2 <= Length of S <= 100 

Input Format:  The first line contains the string S. 

Output Format: The first line contains all the pairs having a consonant followed by a vowel separated by a space. 

Example Input/Output 1: 

Input:  volcano 

Output: vo ca no 

Explanation: 

The string "volcano" contain three pairs having a consonant followed by a vowel. 
So the pairs vo ca and no are printed as the output. 

Example Input/Output 2: 

Input:  TELEVISION 

Output: TE LE VI SI

SOLUTION:
*/



/*
PY3:

String = input().strip()
Vowels = "aeiouAEIOU"

for i in range(0, len(String) - 1):
    if String[i] not in Vowels and String[i + 1] in Vowels:
        print(String[i], end="")
        print(String[i + 1], end=" ")
*/
