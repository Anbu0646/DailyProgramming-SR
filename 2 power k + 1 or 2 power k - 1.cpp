/*
Given a positive integer N as an input, the program must check if N can be expressed as 2^K+1 or 2^K-1 (where K is a positive integer) and print K as the output. 
If N cannot be expressed as 2^K+1 or 2^K-1, the program must print No as the output. 

Boundary Condition(s): 3 <= N <= 10^8 

Input Format:  The first line contains N. 

Output Format: The first line contains the value of K or No. 

Example Input/Output 1: 

Input:  17 

Output: 4 

Explanation: 

17 = 2^4 + 1, here K=4 which is printed as the output. 

Example Input/Output 2: 

Input:  19 

Output: No 

Example Input/Output 3: 

Input:  31

Output: 3

SOLUTION:
*/



/*
PY3:

def K_plus(N):
    k = 0
    while (1 << k) - 1 <= N:
        if ((1 << k) - 1) == N:
            return k
        k += 1
    return -1

def K_minus(N):
    k = 0
    while (1 << k) + 1 <= N:
        if ((1 << k) + 1) == N:
            return k
        k += 1
    return -1

N = int(input())

KPlus = K_plus(N)
KMinus = K_minus(N)

if(KPlus != -1):
    print(KPlus)
elif(KMinus != -1):
    print(KMinus)
else:
    print("No")
*/
