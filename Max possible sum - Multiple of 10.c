/*
The program must accept N integers as the input. 
The program must print the integer X from the given N integers so that the maximum possible sum of remaining integers (except the integer X) is a multiple of 10. 
If there is no such integer to print, the program must print -1 as the output. 

Boundary Condition(s): 

1 <= N <= 100
1 <= Each integer value <= 10^5 

Input Format: 

The first line contains N. 
The second line contains N integers separated by space(s). 

Output Format: The first line contains the integer based on the given conditions. 

Example Input/Output 1: 

Input: 

5 
30  47  7  80  3 

Output: 7 

Explanation: 

The sum of the given 5 integers is 167. 
The maximum possible sum is 160 which is obtained by the sum of all the integers except 7. 
Hence 7 is printed as output. 

Example Input/Output 2: 

Input: 

8 
23  43  2  54  4  47  72  5 

Output: -1

SOLUTION:
*/
