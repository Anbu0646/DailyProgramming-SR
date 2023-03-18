'''
The program must accept N integers as the input. For each integer X among the N integers, the program must increment the unit digit of the integer X if the X is even.
Else the program must increment the tenth digit of the integer X. Finally, the program must print the modified values as the output. 

Note: If the digit to be incremented is 9 then it must become by 0. 

Boundary Condition(s): 1 <= N <= 1000 10 <= Each integer value <= 10^7 

Input Format:  The first line contains N. The second line contains N integers separated by space. 
Output Format: The first line contains N modified integers based on the above conditions. 

Example Input/Output 1: 

Input:  4 
        124 25 66887 499 
Output: 125 35 66897 409 

Explanation:  The first integer is 124 which is an even integer. So the unit digit is incremented as 125.
              The second integer is 25 which is an odd integer. So the tenth digit is incremented as 35. 
              The third integer is 66887 which is an odd integer. So the tenth digit is incremented as 66897. 
              The fourth integer is 499 which is an odd integer. Here the digit to be incremented is 9 so it is replaced by 0. So the integer becomes 409. 

Example Input/Output 2: 

Input:  5 
        248 102 301 567 11 
Output: 249 103 311 577 21

SOLUTION:
'''
