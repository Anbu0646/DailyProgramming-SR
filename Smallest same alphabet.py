'''
The program must accept a string with space as the input. 
The program must replace each word W by another word containing the same alphabets with the smallest length. 
Then the program must print the modified string as the output. 

Note: If there are more than one replacement word exist then replace the word by the first occurring word having the same alphabet with the smallest length. 
      Each word is separated by exactly one space. The words contain only lowercase alphabets.

Boundary Condition(s):  1 <= Length of S <= 1000 

Input Format:  The first line contains S. 
Output Format: The first line contains the modified S. 

Example Input/Output 1: 

Input:  aba ba aab rar arr attr rat 

Output: ba ba ba rar rar rat rat 

Explanation: 

The words aba, ba and aab have the same two alphabets and the smallest of them is ba.
The words rar and arr have the same two alphabets and their lengths are equal. So the first occurring word rar is used as the replacement word. 
The words attr and rat have the same three alphabets and the smallest of them is rat. 

Example Input/Output 2: 

Input:  aaston nova noah tonas hooana

Output: tonas nova noah tonas noah

SOLUTION:
'''

S = input().split()

for word in S:
    k = word+'1'
    for sub in S:
        if sorted(set(word)) == sorted(set(sub)) and len(sub) < len(k) :
            k = sub
    print(k, end=' ')
