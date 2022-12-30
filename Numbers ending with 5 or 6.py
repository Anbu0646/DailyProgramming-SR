'''
The program must accept N integers and an integer X as the input. For each integer, the program must square the value of the integer and then add X to it. Then the program must print all the integers except the integers which are ending with 5 or 6. If the modified values of all the N integers are ending with 5 or 6 then the program must print -1 as the output. 

Boundary Condition(s): 1 <= N, X <= 100 
                       1 <= Each integer value <= 10^8 
                       
Input Format:  The first line contains the values of N and X separated by a space. 
               The second line contains N integers separated by space(s). 
Output Format: The first line contains either -1 or the list of integers which do not end with 5 or 6 separated by a space. 

Example Input/Output 1: 

Input:  4 10 
        3 1 4 7 
Output: 19 11 59 

Explanation: The modified value of the first integer is 19 (3^2 + 10). 
             The modified value of the second integer is 11 (1^2 + 10). 
             The modified value of the third integer is 26 (4^2 + 10). 
             The modified value of the fourth integer is 59 (7^2 + 10). 
             The modified values which do not end with 5 or 6 are 19, 11 and 59. 
             Hence the output is 19 11 59 
             
Example Input/Output 2: 

Input:   4 2 
         2 18 22 8 
Output: -1

SOLUTION:
'''

#1899withonlyO
n, x = map(int, input().split())
l=list(map(int, input().split()))
f=0
for i in range(n):
    c=l[i]**2
    if((c+x)%10)==5 or ((c+x)%10)==6: continue
    else:
        print(c+x, end=" ")
        f=1
if(f==0): print("-1")
