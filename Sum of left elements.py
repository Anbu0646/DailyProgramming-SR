'''
An array of N integers is passed as the input to the program. The program must print the sum of all the elements present to the left of each element as the output.

Solution:
'''

n=int(input())
a=list(map(int,input().split()))
for i in range(n):
    print(sum(a[i-1::-1]), end=" ") if(i>0) else print(0, end=" ")
