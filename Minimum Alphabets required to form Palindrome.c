/*
The program must accept a string S containing only alphabets as the input. The program must print the minimum number of alphabets to be appended to the string S to form a palindrome. 

Boundary Condition(s): 1 <= Length of S <= 1000 

Input Format:  The first line contains the string S. 

Output Format: The first line contains the minimum number of alphabets to be appended to the string S to form a palindrome. 

Example Input/Output 1: 

Input:  abcdd 

Output: 3 

Explanation: 

The alphabets to be appended are 'c', 'b', 'a' to form a palindrome. 
Here minimum 3 alphabets are needed to form a palindrome. 
Hence the output is 3. 

Example Input/Output 2: 

Input:  malayalam 

Output: 0

SOLUTION:
*/

/*
String = input().strip()
Len = len(String)

if String == String[::-1]:
    print(0)
else:
    for i in range(Len):
        if String[i:] == String[i:][::-1]:
            print(i)
            break
    else:
        print(N - 1)
*/
