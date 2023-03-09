'''
The program must accept an integer N as the input. The program must print the output based on the following conditions. 
-If the sum of even digits is greater than or equal to the sum of odd digits in N then the program must reverse the integer N and print it as the output.
-If the sum of even digits in less than the sum of odd digits in N then the program must remove the even digits in N and print the modified value of N as the output.

Boundary Condition(s):  1 <= N <= 10^9

Input Format:  The first line contains the value of N. 
Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1: 

Input:  612103 
Output: 301216 

Explanation:  The sum of even digits in 612103 is 8 (6 + 2 + 0). 
              The sum of odd digits in 612103 is 5 (1 + 1 + 3). Here the sum of even digits is greater than the sum of odd digits. 
              So the integer 612103 is reversed as 301216. 
              Hence the output is 301216 

Example Input/Output 2: 

Input:  94147 
Output: 917 

Explanation:  The sum of even digits in 94147 is 8 (4 + 4). 
              The sum of odd digits in 94147 is 17 (9 + 1 + 7). 
              Here the sum of even digits is less than the sum of odd digits. 
              So the even digits in the integer 94147 are removed. 
              After removing, the integer becomes 917. 
              Hence the output is 917


SOLUTION:
'''

N=input().strip()
Even_Sum=sum([int(i) for i in N if int(i)%2==0])
Odd_Sum=sum([int(j) for j in N if int(j)%2==1])

if(Even_Sum>=Odd_Sum):
    print(int(N[::-1]))
elif(Even_Sum<Odd_Sum):
    for i in N:
        if int(i)%2==0:
            continue
        else:
            print(i, end=" ")
