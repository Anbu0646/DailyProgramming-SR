'''
The program must accept N integers as the input. 
For each integer among the N integers, the program must print the value which is obtained by subtracting the integer from the minimum value of it's ajdacents as the 
output. (The first and last integers have only one integer adjacent to them. So consider only the single adjacent integer for them). 

Boundary Condition(s):  2 <= N <= 100
				                1 <= Each integer value <= 10^7                                                                                                                                                                                                

Input Format:  The first line contains the values of N. The second line contains N integers separated by space(s).
Output Format: The first line contains N integers separated by a space. 

Example Input/Output 1: 

Input:   4 
         9 4 7 8 
Output: -5 3 -3 -1 

Explanation: The adjacent value of the first integer is 4. Here 9 is subtracted from 4. So -5 is printed. 
             The adjacent values of the second integer are 9 and 7. The minimum adjacent value is 7. Here 4 is subtracted from 7. So 3 is printed. 
             The adjacent values of the third integer are 4 and 8. The minimum adjacent value is 4. Here 7 is subtracted from 4. So -3 is printed. 
             The adjacent value of the fourth integer is 7. Here 8 is subtracted from 7. So -1 is printed. 

Example Input/Output 2:

Input:  7
        9 10 6 2 5 1 4 
Output: 1 -4 -4 3 -4 3 -3


'''

n = int(input())
l = list(map(int, input().split()))

r1 = [l[1] - l[0]]
r2=[]
r3 = [l[n-2] - l[n - 1]]

for i in range(1, n-1):
    r2.append(min(l[i-1], l[i+1]) - l[i])

print(*(r1+r2+r3))
