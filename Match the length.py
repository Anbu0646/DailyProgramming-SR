'''
The program must accept N pairs as the input. 
Each pair contains a string value S followed by an integer L. 
The integer in each pair represents the length of a string among N string values. 
The program must print all the string values with the position of their length value among the given pairs as the output. 

Note: The length values of N string values are unique. 

Boundary Condition(s):  1 <= N <= 100 
                        1 <= Length of S in each pair, L <= 1000

Input Format:   The first line contains the value of N.
                The next N lines each contain the value S and L separated by a space. 

Output Format:  The first N lines each contain the string value and an integer separated by a space based on the above conditions.

Example Input/Output 1: 

Input:  4 
        watch 3 
        bottle 5 
        car 4 
        lion 6 

Output: watch 2 
        bottle 4 
        car 1 
        lion 3 

Explanation:  The length of the string watch is 5 which is present in the 2nd pair. So 2 printed.
              The length of the string bottle is 6 which is present in the 4th pair. So 4 printed.
              The length of the string car is 3 which is present in the 1st pair. So 1 printed. 
              The length of the string lion is 4 which is present in the 3rd pair. So 3 printed. 

Example Input/Output 2: 

Input:  7 
        PoelzPnF 5
        WOXPgh 2 
        IcmU 7
        Lm 9
        PUQfE 6 
        SKIuonm 8
        srYIvwtxZ 4

Output: PoelzPnF 6 
        WOXPgh 5
        IcmU 7
        Lm 2
        PUQfE 1 
        SKIuonm 3
        srYIvwtxZ 4

SOLUTION:
'''

n=int(input())
l, p = [], []

for i in range(n):
    a, b = map(str,input().split())
    l.append(a); p.append(int(b))

for i in l:
    k=p.index(len(i))
    print(i, k+1)
