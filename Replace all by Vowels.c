/*
The program must accept a string S and an alphabet CH as the input. 
The program must replace all the occurrences of the alphabet CH by the next occurring vowel in the string S. 
Then the program must print the modified string as the output. 

Note: If there is no vowel after the alphabet CH then CH must be printed as it is. 

Boundary Condition(s): 1 <= Length of the string <= 1000 

Input Format:  The first line contains the string S and an alphabet CH separated by a space. 

Output Format: The first line contains the modified string. 

Example Input/Output 1:

Input:  teleportation  t 

Output: eeleporaaiion 

Example Input/Output 2: 

Input:  accuracy  c 

Output: auuuracy

SOLUTION:
*/

String, Character = map(str, input().split())

Vowels = "aeiou"

for i in range(len(String)):
    if String[i] == Character:
        Flag = 0
        for j in range(i + 1, len(String)):
            if String[j] in Vowels:
                print(String[j], end="")
                Flag = 1
                break
    
        if Flag == 0:
            print(String[i], end="")
    else:
        print(String[i], end="")
