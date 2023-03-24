'''
The program must accept the durations of N videos. A duration contains two integers HH representing the hours and MM representing the minutes separated by a colon. 
The program must print the total hours and the total minutes for N videos as the output. 

Boundary Condition(s):  1 <= N <= 100
                        0 <= HH <= 23 
                        0 <= MM <= 59 

Input Format: The first line contains the value of N.
              The second line contains the duration of N videos each separated by space(s). 

Output Format: The first line contains the total hours and the total minutes for N videos separated by a space.

Example Input/Output 1: 

Input: 4 
03:26 02:38 01:05 22:59 

Output: 30 8

Explanation:  Total hours = 28 (3 + 2 + 1 + 22).
              Total minutes = 128 (26 + 38 + 5 + 59). 
              128 minutes is nothing but 2 hours and 8 minutes. 
              So the total hours is 30 (28 + 2) and the total minutes is 8.
              Hence the output is 30 8

Example Input/Output 2: 

Input:  2 
        23:05 23:55 

Output: 47 0

SOLUTION:
'''

N = int(input())
Hours_sum = 0
Minutes_sum = 0

for i in range(N):
    Hours, Minutes = map(int, input().split(":"))
    Hours_sum += int(Hours)
    Minutes_sum += int(Minutes)

print((Hours_sum+(Minutes_sum//60)), (Minutes_sum%60))
