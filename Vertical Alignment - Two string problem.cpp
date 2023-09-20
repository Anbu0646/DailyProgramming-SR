/*
The program must accept two string values S1 and S2 with spaces as the input. 
The program must align the characters in the vertically down side and then print them as shown in the Example Input/Output section. 

Note: After aligning both string values, all the white space characters must be replaced by hyphens. 

Boundary Condition(s): 2 <= Length of S1, S2 <= 1000 

Input Format: 

The first line contains S1. 
The second line contains S2. 

Output Format: 

The first line contains the modified S1. 
The second line contains the modified S2. 

Example Input/Output 1: 

Input:  

hello world 
i am very happy 

Output: 

h-ll--wor-d---- 
ieamoverylhappy 

Example Input/Output 2: 

Input: 

this is long text 
its not long 

Output: 

thi--is-long----- 
itssnot-long-text

SOLUTION:
*/


/*
PY3:
S1 = input().strip()
S2 = input().strip()
Res1 = ""
Res2 = ""
i = 0
Max = max(len(S1), len(S2))

while i < Max:
    if i < len(S1):
        if i < len(S2):
            if S1[i].isalpha() and S2[i].isalpha():
                Res1 += S1[i]
                Res2 += S2[i]
            elif S1[i].isalpha() and S2[i] == ' ':
                Res1 += '-'
                Res2 += S1[i]
            elif S1[i] == ' ' and S2[i].isalpha():
                Res1 += '-'
                Res2 += S2[i]
            elif S1[i] == ' ' and S2[i] == ' ':
                Res1 += '-'
                Res2 += '-'
        else:
            if S1[i] == ' ':
                Res2 += '-'
                Res1 += '-'
            else:
                Res1 += '-'
                Res2 += S1[i]
    else:
        Res1 += '-'
        if i < len(S2):
            if S2[i] == ' ':
                Res2 += '-'
            else:
                Res2 += S2[i]
    i += 1

print(Res1)
print(Res2)
*/
