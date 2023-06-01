/*
The program must accept N integers and an integer K as the input. 
The program must print the first K integers, the last K integers, the second K integers, the last but second K integers and so on. 

Note: The value of N is always is divisible by K. 

Boundary Condition(s): 

1 <= N <= 1000 
1 <= K <= N 1 <= Each integer value <= 10^8 

Input Format: 

The first line contains the values of N and K separated by a space. 
The second line contains N integers separated by space(s). 

Output Format: 

The first line contains the N integers separated by a space based on the given conditions. 

Example Input/Output 1: 

Input: 

9 3 
1 2 3 4 5 6 7 8 9 

Output: 

1 2 3 7 8 9 4 5 6 

Explanation: 

Here k = 3, so the first set of 3 integers 1 2 3 are printed. 
Then the last set of 3 integers 7 8 9 are printed. 
Then the second set of 3 integers 4 5 6 are printed. 

Example Input/Output 2: 

Input: 

12 2 
94 90 88 50 49 46 41 35 19 15 11 10 

Output: 

94 90 11 10 88 50 19 15 49 46 41 35

SOLUTION:
*/
