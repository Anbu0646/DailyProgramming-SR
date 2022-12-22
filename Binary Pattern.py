'''
The program must accept an integer N the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 10^7 

Input Format:  The first line contains the value of N. 
Output Format: The list of lines contains the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  8 
Output: 1000 
        0**0 
        0**0 
        0001 

Example Input/Output 2: 

Input:  7 
Output: 111 
        1*1 
        111

SOLUTION:
'''

#WednesdaywithJ&A
number=int(input())
binary=str(bin(number))[2:]
length=len(b)
for i in range(0, length):
    for j in range(0, length):
        if(i==0): print(binary[j], end="")
        elif(j==0): print(binary[i], end="")
        elif(j==length - 1): print(binary[length - i - 1], end="")
        elif(i==length - 1): print(binary[length - j - 1], end="")
        else: print("*", end="")
    print("\r")
