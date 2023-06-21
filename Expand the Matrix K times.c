/*
The program must accept an integer matrix of size RxC and an integer K as the input. The program must print the desired pattern as shown in the Example Input/Output sections. 

Boundary Condition(s): 

1 <= R, C, K <= 100 

Input Format: 

The first line contains the values of R, C and K separated by space(s). 
The next R lines contain C elements separated by space(s). 

Output Format: 

The first R*K lines contain the desired pattern as shown in the Example Input/Output sections. 

Example Input/Output 1: 

Input: 

2 4 3 
1 2 5 4 
6 5 8 7 

Output: 

1 1 1 2 2 2 5 5 5 4 4 4 
1 1 1 2 2 2 5 5 5 4 4 4
1 1 1 2 2 2 5 5 5 4 4 4 
6 6 6 5 5 5 8 8 8 7 7 7 
6 6 6 5 5 5 8 8 8 7 7 7 
6 6 6 5 5 5 8 8 8 7 7 7 

Example Input/Output 2: 

Input: 

2 3 2 
7 9 3 
4 5 6 

Output: 

7 7 9 9 3 3 
7 7 9 9 3 3 
4 4 5 5 6 6 
4 4 5 5 6 6

SOLUTION:
*/

R, C, K = map(int, input().split())
Mat = [list(map(int, input().split())) for i in range(R)]
#print(R, C, K)
for i in Mat:
    for k in range(K):
        for j in i:
            for m in range(K):
                print(j, end=" ")
        print()
