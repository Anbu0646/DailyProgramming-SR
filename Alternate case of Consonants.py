'''
The program accepts a string S containing only lower case alphabets as the input. 
For each vowel in S, the program must toggle the case of next consonant in S. Finally, the program must print the modified string S as the output. 

Boundary Condition(s): 2 <= Length of S <= 10000 

Input Format:  The first line contains S. 

Output Format: The first line contains the modified string S. 

Example Input/Output 1: 

Input:  about 

Output: aBout 

Explanation:

The 1st vowel in the string "about" is 'a' and the next consonant of 'a' is 'b'. So the case of 'b' is toggled. Now the string becomes "aBout". 
The 2nd vowel in the string "aBout" is 'o' and the next consonant of 'o' is 't'. So the case of 't' is toggled. Now the string becomes "aBouT". 
The 3rd vowel in the string "aBouT" is 'u' and the next consonant of 'u' is 'T'. So the case of 'T' is toggled. Now the string becomes "aBout". 
Hence the output is aBout. 

Example Input/Output 2: 

Input:  adoc 

Output: aDoC 

Example Input/Output 3: 

Input:  aeibco

Output: aeiBco

SOLUTION:
'''
