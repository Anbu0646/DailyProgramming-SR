'''
The program must accept a floating point value N as the input. 
The program must reverse integer part and fraction part and print the modified floating point value with the precision up to two decimal places. 

Boundary Condition(s): 1.00000 <= N <= 99999.99999 

Input Format:  The first line contains N. 

Output Format: The first line contains reversed value with the precision upto two decimal places of N. 

Example Input/Output 1: 

Input:  140.105 

Output: 41.50 

Explanation: 

After the reverse of the integer part the value 140 becomes 041 and for the fraction part the value 105 becomes 501 and with the precion upto 2 decimal places. 
Hence the output is 41.50 

Example Input/Output 2: 

Input:  10005.200 

Output: 50001.00

SOLUTION:
'''

N = input().strip()
Int_part, Frac_part = N.split('.')
Int_part = Int_part[::-1]
Frac_part = Frac_part[::-1]
Reversed_N = float(Int_part + '.' + Frac_part)
print("%.2f"%Reversed_N)
