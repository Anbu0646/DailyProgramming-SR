'''
The program must accept N integers as the input. 
The program must traverse the given integers and if the integer 5 is encountered then the following integers must be added till the integer 10 occurs. 
Finally, the program must print the total sum as the output. 

Boundary Condition(s): 1 <= N <= 1000 

Input Format:  The first line contains N. 
               The second line contains N integers separated by space(s). 
Output Format: The first line contains the sum as per the given conditions. 

Example Input/Output 1: 

Input:  9
        2 5 3 2 10 3 10 5 4 
Output: 9

Explanation:  The integer 5 occurs at position 2 and the immediate next integer value 10 occurs at position 5. 
              There are two integers (3 and 2) between them which are added to 5. 
              The next integer value 5 occurs at position 8 the integers after 5 is 4 which is also added to the result. 
              Hence the output is 9

Example Input/Output 2:

Input:  8 
        1 5 5 12 10 5 6 10 
Output: 23

SOLUTION:
'''

#Michael
n=int(input())
l=list(map(int, input().split()))
s, i = 0, 0
while i<n:
    if(l[i]==5):
        j=i+1
        while (j < n and (l[j]!=10)):
                s+=l[j]
                j+=1
        if(j<n and l[j]==10):
            i=j+1
        else:
            break
    else:
        i+=1
print(s)
