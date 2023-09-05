/*
The program must accept N integers and an integer K as the input.
The program must print the smallest integer among all the K-digit integers in the given N integers as the output.
If there is no K-digit integer then the program must print -1 as the output. 

Boundary Condition(s): 

1 <= N <= 100
1 <= Each integer value <= 10^8
1 <= K <= 9

Input Format:  

The first line contains N and K separated by a space. 
The second line contains N integers separated by a space. 

Output Format: 

The first line contains the smallest K-digit integer among the N integers or -1. 

Example Input/Output 1: 

Input: 

7 2 
32 458 98 12 805 8 2 

Output: 12 

Explanation: 

The 2-digit integers among the 7 integers are 32 98 and 12. 
Here 12 is the smallest 2-digit integer. So 12 is printed as the output. 

Example Input/Output 2: 

Input: 

5 3 
15 1011 74 7 99 

Output: -1

SOLUTION:
*/


/*
PY3:
N, K = map(int, input().split())
Arr = list(map(str, input().split()))
Arr_1 = []

for i in Arr:
    if len(i) == K:
        Arr_1.append(int(i))

print(min(Arr_1) if len(Arr_1) > 0 else -1)
*/
