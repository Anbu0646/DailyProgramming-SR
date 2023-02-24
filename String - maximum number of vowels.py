'''
The program must accept two string values S1 and S2 containing only alphabets as the input. The program must print the string which has a maximum number of vowels. 
If both S1 and S2 contain the same number of vowels then the program must print S1 as the output. 
If both S1 and S2 contain only consonants then the program must print -1 as the output. 

Boundary Condition(s):  1 <= Length of S1, S2 <= 100

Input Format:  The first line contains S1. 
               The second line contains S2. 
Output Format: The first line contains S1 or S2 or -1. 

Example Input/Output 1: 

Input:  Day 
        Good 

Output: Good 

Explanation:  In the string Day, the number of vowel is 1. 
              In the string Good, the number of vowels is 2.
              So the maximum number of vowels is 2. 
              Hence the output is Good

Example Input/Output 2: 

Input:  hello 
        world 
        
Output: hello 

Example Input/Output 3: 

Input:  fly
        cry 
        
Output: -1

SOLUTION:
'''

s1 = input().strip(); s2=input().strip()
vow="aeiouAEIOU"

c1, c2 = 0, 0

for i in s1:
    if i in vow:
        c1+=1
for j in s2:
    if j in vow:
        c2+=1
        
if(c1>c2):
    print(s1)
elif(c1==c2 and c1!=0 and c2!=0):
    print(s1)
elif(c1+c2==0):
    print(-1)
else:
    print(s2)
