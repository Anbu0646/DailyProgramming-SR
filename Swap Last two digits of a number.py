'''
The program must accept an integer N as the input. The program must swap the last two digits of N if N is an odd integer.Else the program must remove the last two digits. 
Finally, the program must print the modified N as the output. 

Boundary Condition(s): 100 <= N <= 10^8 

Input Format:  The first line contains N. 
Output Format: The first line contains the modified N.

Example Input/Output 1:

Input:  1245
Output: 1254 

Explanation: 1245 is an odd integer so the last two digits are swapped and the output 1254 is printed.

Example Input/Output 2: 

Input:  63532 
Output: 635

SOLUTION:
'''

n=input().strip()
l=len(n)
if(int(n[-1])%2==0):
    print(n[:l - 2])
else:
    print(n[:l - 2] + n[-1] + n[-2])
