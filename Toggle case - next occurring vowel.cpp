/*
The program must accept a string S containing only alphabets as the input. 
For each consonant in S, the program must toggle the case of the next occurring vowel. 
If there is no vowel occurring after the consonant, then the case of the consonant must be toggled. 
Finally, the program must print the modified string S as the output. 

Boundary Condition(s): 1 <= Length of S <= 10^5 

Input Format: The first line contains S.

Output Format: The first line contains the modified string value. 

Example Input/Output 1: 

Input:  WATER 

Output: WaTer 

Explanation: 

The 1st consonant in the string "WATER" is 'W' and the next vowel of 'W' is 'A'. 
So the case of 'A' is toggled. Now the string becomes "WaTER".
The 2nd consonant in the string "WATER" is 'T' and the next vowel of 'T' is 'E'. 
So the case of 'E' is toggled. 
Now the string becomes "WaTeR" The 3rd consonant in the string "WATER" is 'R' and there is no vowel after 'R'. 
So the case of 'R' is toggled. 
Now the string becomes "WaTer" 
Hence the output is WaTer. 

Example Input/Output 2: 

Input: apple 

Output: applE

SOLUTION:
*/



/*
PY3:

c:

*/
