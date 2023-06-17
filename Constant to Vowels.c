/*
The program must accept a string S as the input. 
The program must replace every consonant by the next nearest vowel. If there is no vowel after a consonant then it must be removed from the string. If there is no vowel in S, then print -1 as the output. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format:  The first line contains the values of S. 

Output Format: The first line contains the string as per the condition or -1. 

Example Input/Output 1:

Input:   request 

Output:  eeuue 

Explanation: 

In the string request, the first vowel after r is e. So the string becomes eequest. 
In the string eequest, the first vowel after q is u.  So the string becomes eeuuest. 
There is no vowel after s and t so they are removed. 
The string becomes eeuue. Hence the output is eeuue 

Example Input/Output 2:

Input:   cry 

Output:  -1

SOLUTION:
*/
