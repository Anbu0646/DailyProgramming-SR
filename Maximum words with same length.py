'''
The program must accept a string with space as the input. The program must find the maximum number of words with same length and print them as the output. 

Note: If there are same number of maximum words with different length exist, then print all of them in the same order as given in the input. 

Boundary Condition(s): 1 <= Length of S <= 1000 

Input Format:  The first line contains S.
Output Format: The first line contains the modified string.

Example Input/Output 1: 

Input:  pass on the plate to him 
Output: on the to him 

Explanation:  The words with length 2 are on and to 
              The words with length 3 are the and him 
              The words with length 2 and 3 have the maximum number of words so they are printed.

Example Input/Output 2: 

Input:  he said to get back tomorrow soon 
Output: said back soon

SOLUTION:
'''

from collections import Counter

s = input().split()
f = Counter(len(i) for i in s)

mx = max(f.values())

r = [i for i in s if len(i) in f and f[len(i)] == mx]

print(' '.join(r))
