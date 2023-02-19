'''
The program must accept N string values and an integer K as the input.
The program must print the count of string values having at most K non repeated alphabets as the output.

Note: All the alphabets in each string are in lowercase. 

Boundary Condition(s):  1 <= N <= 1000 
                        1 <= Length of each string <= 100
                        1 <= K <= 26 

Input Format:   The first line contains the values of N and K separated by a space. 
                The next N lines each contain a string value. 
Output Format:  The first line contains the count of string values having at most K non repeated alphabets. 

Example Input/Output 1:

Input:  4 3 
        onion
        radish
        cabbage 
        yam 

Output: 3

Explanation:  The string "onion" has only one non repeated alphabet. 
              The string "radish" has 6 non repeated alphabets. 
              The string "cabbage" has 3 non repeated alphabets.
              The string "yam" has 3 non repeated alphabets.
              So only 3 string values ("onion", "cabbage" and "yam") have at most 3 non repeated alphabets.
              Hence the output is 3 

Example Input/Output 2:

Input:  6 2 
        dengue 
        fever 
        malaria 
        cholera 
        headache 
        diarrhea 
Output: 1

SOLUTION:
'''
