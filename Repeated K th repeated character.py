'''
The program must accept a string S and an integer K as the input. The program must remove all the occurrences of Kth repeated (more than one occurrence) 
alphabet in the string S. 
Then the program must print the modified string as the output. 
If there is no Kth repeated alphabet then the program must print the same string as the output.
If all the characters are removed from the string then the program must print -1 as the output. 

Note: The string S always contains only lower case alphabets. 

Boundary Condition(s):  2 <= Length of S <= 1000 
                        1 <= K <= 26 

Input Format:  The first line contains the string S. 
               The second line contains the value of K 

Output Format: The first line contains the modified string S. 

Example Input/Output 1: 

Input:  manipulation 
        2 

Output: manpulaton 

Explanation: 

The first repeated alphabet is a. 
The second repeated alphabet is i. 
The third repeated alphabet is n. 
Here all the occurrences of the second repeated alphabet 'i' are removed from the string "manipulation". 
Hence the output is manpulaton 

Example Input/Output 2: 

Input: aaaaaaa 
       1 

Output: -1

SOLUTION:
'''
