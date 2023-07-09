/*
The program must accept two string values S1 and S2 and an integer K representing the number of rotations as the input. 
The program must print YES if the string S2 is formed by rotating the string S1 for K times in either clockwise or anti-clockwise direction as the output. 
Else the program must print NO as the output. 

Boundary Condition(s): 

1 <= Length of S1, S2 <= 100 
1 <= K <= 1000 

Input Format: 

The first line contains S1. 
The second line contains S2. 
The third line contains K. 

Output Format: 

The first line contains YES or NO. 

Example Input/Output 1: 

Input: 

skillrack 
lrackskil 
5 

Output: 

YES 

Explanation: 

After rotating the string skillrack for 5 times in clockwise direction, the string becomes lrackskil which is equal to S2. 
So YES is printed. 

Example Input/Output 2: 

Input: 

watermelon 
ermelonwat 
23 

Output: YES 

Example Input/Output 3: 

Input: 

ethernet 
netether 
4 

Output: NO

SOLUTION:
*/
