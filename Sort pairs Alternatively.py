'''
The program must accept N pairs of integers as the input. The program must sort the pairs based on the position of each pair in the given input in ascending order. If the pair is at odd position then consider the first integer in it to sort. If the pair is in even position then consider the second integer to sort. Then the program must print the sorted pairs as the output. 

Note:  If two integers are same, then they must appear in same order as in the given input. 

Boundary Condition(s):  1 <= N <= 10^5 
                        1 <= Each integer value <= 10^9 

Input Format:  The first line contains N. 
               The next N lines contain 2 integers each separated by a space. 

Output Format: 

The first N lines contain sorted integers as per the given conditions. 

Example Input/Output 1: 

Input: 

5 

5 4
1 4 
3 2 
7 5 
2 6 

Output: 

2 6 
3 2 
1 4 
5 4 
7 5 

Explanation:

The pairs are sorted based on their positions. 
The values by which each pair is sorted are given below. 

5 4 - 5 
1 4 - 4 
3 2 - 3 
7 5 - 5 
2 6 - 2 

The values are sorted as below. 

2 6 - 2 
3 2 - 3
1 4 - 4 
5 4 - 5 
7 5 - 5 

Example Input/Output 2: 

Input: 

8 
13 14 
9  8 
6  28
24 28 
23 13 
19 25 
5  7 
18 30 

Output: 

5  7 
6  28 
9  8 
13 14 
23 13 
19 25 
24 28 
18 30

SOLUTION:
'''

a = int(input())
l = []
m = []

for i in range(a):
    x,y = map(int,input().split())
    if i%2==0:
        l.append([x,x,y])
    else:
        l.append([y,x,y])
        
l.sort(key = lambda x:x[0])

for i in l:
    print(*i[1:])
