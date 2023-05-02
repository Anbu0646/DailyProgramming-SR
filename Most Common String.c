/*
The program must accept a string S and N string values as the input. 
The program must print the string among the N string values containing the most number of characters which also appear in the string S 
(i.e most number of common characters) as the output. 

Note: If more than one string has the most number of common characters then print the first occurring string. 

Boundary Condition(s):  1 <= N <= 1000 
                        1 <= Length of each string <= 100 

Input Format:   The first line contains the string S.
                The second line contains the value of N. 
                The next N lines contain a string value on each line. 

Output Format:  The first line contains the string as per the given condition. 

Example Input/Output 1: 

Input: 

abccce 
4 
rat 
artuio 
cce 
abty 

Output: cce 

Explanation:  The first string rat contains only one common character. 
              The second string artuio contains only one common character. 
              The third string cce contains three common characters. 
              The fourth string abty contains two common characters. 
              Hence cce is printed. 

Example Input/Output 2: 

Input: 

train 
3 
main 
rain 
nail 

Output: rain

SOLUTION:
*/
