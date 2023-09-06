/*
The program must accept N unique integers as the input. 
The program must replace each integer by its next bigger integer from its right side. 
If there is no such bigger integer for any integer then keep the integer as it is. 
Finally, the program must print the N modified integers as the output. 

Boundary Condition(s): 

1 <= N <= 1000 
1 <= Each integer value <= 10^5 

Input Format:

The first line contains N. 
The second line contains N integers separated by a space. 

Output Format: The first line contains N modified integers separated by a space. 

Example Input/Output 1: 

Input: 

9 
2 5 9 6 3 4 8 15 12 

Output: 3 6 12 8 4 8 12 15 12 

Explanation: 

The next bigger integer to 2 is 3. So 2 is replaced by 3.
The next bigger integer to 5 is 6. So 5 is replaced by 6.
The next bigger integer to 9 is 12. So 9 is replaced by 12. 
The next bigger integer to 6 is 8. So 6 is replaced by 8. 
The next bigger integer to 3 is 4. So 3 is replaced by 4. 
The next bigger integer to 4 is 8. So 4 is replaced by 8.
The next bigger integer to 8 is 12. So 8 is replaced by 12.
There is no next bigger integer to 15. So 15 is not replaced. 
There is no next bigger integer to 12. So 12 is not replaced. 
Hence the output is 3 6 12 8 4 8 12 15 12.

Example Input/Output 2: 

Input:

4 
4 3 2 1 

Output: 4 3 2 1

SOLUTION:
*/



/*
PY3:
N = int(input())
Arr = list(map(int, input().split()))

for i in range(0, N):
    Arr1 = Arr[i + 1:]
    Arr1.sort()
    for j in range(0, N - 1 - i):
        if Arr1[j] > Arr[i]:
            print(Arr1[j], end=" ")
            break
    else:
        print(Arr[i], end = " ")
*/
