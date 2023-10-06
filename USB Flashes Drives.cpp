/*
Mr. ABC has X megabytes of documents. 
He also has N USB flash drives with different capacities to store his documents. 
The capacity (in megabytes) of each USB flash drive is passed as the input to the program. 
The value of X is also passed as the input to the program.
The program must print the minimum number of USB flash drives that he needs to store his X megabytes of documents. 
If all the N USB flash drives are not enough to store X megabytes, the program must print -1 as the output. 

Note: The size of each document is always 1 megabyte. 

Boundary Condition(s):

1 <= N <= 1000 
1 <= Capacity of each USB flash drive, X <= 10^5 

Input Format:

The first line contains N. 
The second line contains N integers separated by a space.
The third line contains X. 

Output Format: 

The first line contains the minimum number of USB flash drives that he needs to store his X megabytes of documents.

Example Input/Output 1: 

Input: 

5 
3 4 8 1 6 
18 

Output: 3 

Explanation: 

He needs at least 3 USB flash drives to store 18 megabytes of documents. 
So 3 is printed as the output. 
The one possible way of choosing the 3 USB flash drives is 4 8 and 6. 

Example Input/Output 2: 

Input: 

2 
5 10 
11 

Output: 2 

Example Input/Output 3: 

Input: 

4 
512 1024 64 8
2048 

Output: -1

SOLUTION:
*/
