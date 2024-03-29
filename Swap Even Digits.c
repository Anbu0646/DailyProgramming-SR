/*
The program must accept an integer N as the input. The program must swap every two even digits in N and print the modifed N as the output. 
If there are odd number of even digits then the last digit cannot be swapped so the last digit must be printed as it is. 

Boundary Condition(s): 

1 <= T <= 10^5 
1 <= N <= 10^17 

Input Format: 

The first line contains T which represents the number of testcases. 
The next T lines contain an integer (N value) in each line. 

Output Format: 

The first T lines contain the modifed N values. 

Example Input/Output 1: 

Input: 

2 
173037463 
802389 

Output: 

173437063 
88329 

Explanation: 

The integer 173037463 has 3 even digits the first two digits 0 and 4 are swapped. 
The last even digit cannot be swapped. 
Hence 173437063 is printed. 
The integer 802389 has 4 even digits. 
The first two even digits 8 and 0 are swapped as 082389 = 82389. 
The second two even digits are 2 and 8 which are swapped as 88329. 
Hence 88329 is printed. 

Example Input/Output 2: 

Input: 

3 
3247234 
2468026 
812374324 

Output: 

3427432 
4286206 
218372344

SOLUTION:
*/
