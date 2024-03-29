'''
The program must accept two string values S1 and S2 as the input. 
The program must print the longest substring from S1 which does not contain S2. 
If more than one longest substring is found from S1 then the program must print the first occurring substring in the given order as the output. 
If there is no such substring then the program must print -1 as the output. 

Boundary Condition(s):  1 <= length of S1, S2 <= 1000 

Input Format: 

The first line contains the value of S1. 
The second line contains the value of S2. 

Output Format: 

The first line contains the longest substring as per the given condition or -1. 

Example Input/Output 1: 

Input: 

HisthisisTemple 
is 

Output:  Temple 

Explanation: 

The substring values without the string "is" are "H", "th" and "Temple". 
Here the longest substring is "Temple". 
Hence the output is "Temple" 

Example Input/Output 2: 

Input: 

hiworld 
hiworld 

Output: -1

SOLUTION:
'''

n = input().strip()
x = input().strip()
y = max(n.split(x), key = len)
print(y if y != '' else -1)
