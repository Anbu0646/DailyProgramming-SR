/*
The program must accept two integers N and M as the input. 
The integer M denotes the speed of a ship and N denotes the final speed to be reached by the ship. 
The speed of the ship is increased by 1/4th of the previous speed if a bag of coal is added as fuel. 
The program must print the number of bags needed to reach the speed of N as the output. 

Boundary Condition(s): 

1 <= N <= 1000 
1 <= M <= N 

Input Format: 

The first line contains two integers N and M separated by a space. 

Output Format: 

The first line contains the number of bags needed to reach the speed of N. 

Example Input/Output 1: 

Input: 100 64 

Output: 2 

Explanation: 

The 1st bag of coal will increase the speed by 1/4 that is for 64 it is 16. So the speed is 80(64 + 16). 
The 2nd bag of coal will increase the speed by 1/4 that is for 80 it is 20. So the speed is 100(80 + 20). 
Hence the output is 2 

Example Input/Output 2: 

Input: 20 10 

Output: 4

Example Input/Output 3: 

Input: 500 1

Output: 28

Example Input/Output 4: 

Input: 

347
21

Output: 13

SOLUTION:
*/

input_n = input().split()

if len(input_n) == 2:
    N, M = map(int, input_n)
elif len(input_n) == 1:
    N = int(input_n[0])
    M = int(input())
    
Speed = M; C = 0
while Speed < N:
    temp = Speed/4
    Speed += temp
    C += 1
print(C)
