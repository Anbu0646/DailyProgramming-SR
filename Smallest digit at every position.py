'''
The program must accept N integers as the input. 
The program must print the integers having the smallest digit at each position of the integer starting from the first digit.
If more than one integer have the smallest digit at a particular position, then the program must print the smallest of those integers. 

Note: The number of integers printed is equal to the maximum number of digits present in any integer among the N integers as for each position of the digit the program 
      must print the smallest value as per the given condition.

Boundary Condition(s): 1 <= N <= 1000, 1 <= Each integer value <= 10^15 

Input Format:  The first line contains N. The second line contains N integers separated by space. 
Output Format: The first line contains integers separated by a space. 

Example Input/Output 1: 

Input:  4 
        12 13 457 817 

Output: 12 817 457 

Explanation: The smallest digit at the first position in all the integers is 1 which is present in 12 and 13. 12 is the smallest integer among them so 12 is printed. 
             The smallest digit at the second position in all the integers is 1 in which is present in 817. 
             The smallest digit at third position is 7 which is in 457 and 817. 457 is the smallest integer among them so 457 is printed. 
             
Example Input/Output 2:

Input:  7
        12 435 123 232 34 344 34123 

Output: 12 12 34123 34123 34123

SOLUTION:
'''
