'''
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 
 
 Boundary Condition(s): 1 <= N <= 100 
 
 Input Format:  The first line contains the value of N. 
 Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section. 
 
 Example Input/Output 1: 
 
 Input:  5 
 Output: 1 2 3 4 5 
         * * * 4
         * * 3 
         * 2
         1 2 3 4 5 
 
 Example Input/Output 2: 
 
 Input:  8 
 Output: 1 2 3 4 5 6 7 8 
         * * * * * * 7 
         * * * * * 6 
         * * * * 5
         * * * 4
         * * 3
         * 2 
         1 2 3 4 5 6 7 8
         
SOLUTION:
'''

n = int(input())
for i in range(1, n+1):
    print(i,'->',end =' ')
    if(i == 1 or i == n):
        for j in range(1,n+1):
            print(j, end=" ")
        print(end='\n')
    else:
        upto = n - i + 1
        for j in range(1, upto + 1):
            if( j == upto):
                print(j,end='\n')
            else:
                print('*', end =" ")
