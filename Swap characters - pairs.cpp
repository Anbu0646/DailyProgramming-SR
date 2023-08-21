/*
The program accept a string S and N pairs as the input. 
Each pair contains two integers P1 and P2 representing the position of two characters in the string S. 
For each pair, the program must swap the characters in P1 and P2. 
Finally, the program must print the modified string S as the output. 

Note: The values of P1 and P2 are always not equal. 

Boundary Condition(s): 

2 <= Length of S <= 1000 
1 <= N <= 1000 1 <= P1, P2 <= Length of S 

Input Format: 

The first line contains S. 
The second line contains N. 
The next N lines each contain two integers representing P1 and P2 separated by a space. 

Output Format: 

The first line contains the modified string S. 

Example Input/Output 1: 

Input:  

Cyclone 
2 
1 3 
7 5 

Output:  cyCleno 

Explanation: 

For the first pair, the characters in the positions 1 and 3 are swapped. 
Now the string becomes "cyClone". For the second pair, the characters in the positions 7 and 5 are swapped. 
Now the string becomes "cyCleno". 
Hence the output is cyCleno. 

Example Input/Output 2: 

Input: 

SkillRack 
7 
1 6 
2 7 
3 8 
9 4 
6 5 
7 6 
7 8 

Output: RackSkill

SOLUTION:
*/



/*
PY3:
String = input()
Ord = []

for i in range(0, len(String)):
    Ord.append(ord(String[i]))

Len = int(input())

for i in range(0, Len):
    pair_1, pair_2 = map(int, input().split())
    Ord[pair_1 - 1], Ord[pair_2 - 1] = Ord[pair_2 - 1], Ord[pair_1 - 1]

for i in range(0, len(Ord)):
    print(chr(Ord[i]), end="")

*/
