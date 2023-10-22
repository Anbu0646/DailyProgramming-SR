/*
The program must accept an integer N as the input. 
The program must remove the last occurring consecutive odd digits of N if the last digit of N is odd. Else the program must remove the last occurring consecutive even digits of N. 
Finally, the program must print the modified integer N as the output. 

Note: At least one odd digit and one even digit are always present in the integer N. 

Boundary Condition(s):  100 <= N <= 10^8 

Input Format:  The first line contains N. 

Output Format: The first line contains the modified N. 

Example Input/Output 1: 

Input:  2315642 

Output: 2315 

Explanation: 

Here N=2315642. 
The last digit of 2315642 is even. 
After removing the last occurring consecutive even digits of 2315642.
Now the integer becomes 2315. 
Hence the output is 2315.

Example Input/Output 2: 

Input:  92423 

Output: 9242

SOLUTION:
*/



/*
PY3:
N = int(input())
Unit_Digit = N % 10
Is_Odd = Unit_Digit % 2 == 1
Value = N
Count = 0
while Value:
    Value_Now = Value % 10
    if Value_Now % 2 == Is_Odd:
        Count += 1
    else:
        break
    Value //= 10
print(N//10**(Count))
*/
