'''
The program must accept an integer N as the input. The program must print YES if the octal representation of N is a palindrome. Else the program must print NO as the output.

Boundary Condition(s): 1 <= N <= 10^9 

Input Format:  The first line contains the value of N. 
Output Format: The first line contains either YES or NO.

Example Input/Output 1: 

Input:  657 
Output: YES 

Explanation: The octal representation of 657 is 1221. Here 1221 is a palindrome. Hence the output is YES 

Example Input/Output 2:

Input:  699 
Output: NO

Explanation: The octal representation of 1699 is 3243. Here 3243 is not a palindrome. Hence the output is NO

SOLUTION:
'''

N = int(input())
Oct_rep = oct(N)[2:]

print("YES" if(Oct_rep==Oct_rep[::-1]) else "NO")
