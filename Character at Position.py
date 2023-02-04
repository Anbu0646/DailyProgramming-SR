'''
The program must accept N integers as the input. Each integer denotes the position of the alphabet (starting from A). 
The program must print the string value formed by these integers as the output. 

Note:  All the alphabets are in lowercase. 

Boundary Condition(s):  1 <= N <= 1000 
                        1 <= Each integer value <= 26 

Input Format:  The first line contains N. The second line contains N integers separated by a space.
Output Format: The first line contains the string formed by N integers. 

Example Input/Output 1: 

Input:  9
        19 11 9 12 12 18 1 3 11 
Output: skillrack

Explanation:  The alphabet at 19th position is s 
              The alphabet at 11th position is k 
              The alphabet at 9th position is i 
              The alphabet at 12th position is l 
              The alphabet at 12th position is l 
              The alphabet at 18th position is r
              The alphabet at 1st position is a 
              The alphabet at 3rd position is c 
              The alphabet at 11th position is k 

Example Input/Output 2:

Input:  6 
20 15 25 15 20 1 
Output: toyota

SOLUTION:
'''
#Michael
n=int(input())
s='abcdefghijklmnopqrstuvwxyz'
l=list(map(int, input().split()))
for i in l:
    i=i-1
    print(s[i], end="")
