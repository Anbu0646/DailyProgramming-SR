/*
The program must accept a string S containing only alphabets as the input. 
The program must reverse the string S, keeping the vowels in the same position. 
Then the program must print the modified string S as the output. 

Boundary Condition(s): 1 <= Length of S <= 1000

Input Format:  The first line contains S. 

Output Format: The first line contains the modified string S. 

Example Input/Output 1: 

Input:  bulk 

Output: kulb 

Explanation: 

There is only one vowel u in bulk.
So the string is reversed except u.
Hence the output is kulb.

Example Input/Output 2: 

Input:  Apple 

Output: Alppe

SOLUTION:
*/



/*
PY3:
S = input().strip()
Vowels = 'aeiouAEIOU'
Mod = ""

for i in range(0, len(S)):
    if S[i] not in Vowels:
        Mod += S[i]

Len = len(Mod) - 1

for i in range(0, len(S)):
    if S[i] in Vowels:
        print(S[i], end="")
    else:
        print(Mod[Len], end="")
        Len -= 1
*/
