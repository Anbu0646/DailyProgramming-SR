'''
The program must accept a string S as the input. The program must replace all the special characters by . (dot) and , (comma) such that the next ocurring special 
character of . (dot) must be a , (comma) and also the next ocurring special character of , comma must . (dot). 
Finally, the program must print the modified string as the ouput. 

Note: The first ocurring special character must be . (dot) in the output. 

Boundary Condition(s): 1 <= Length of S <= 1000 

Input Format:  The first line contains S. 
Output Format: The first line contains the modified string. 

Example Input/Output 1: 

Input:  yum.as;io/d'p 
Output: yum.as,io.d,p 

Explanation: There are four special characters which are replaced by . and , alternatively. 

Example Input/Output 2: 

Input:    \s.s/qw'sd?fe2'3r 
Output: .s,s.qw,sd.fe2,3r

SOLUTION:
'''

String = input().strip()
String_of_Spec_Charac = True
String_Replaced = ""

for i in String:
    if not i.isalnum():    
        if String_of_Spec_Charac:
            String_Replaced += "."
        else:
            String_Replaced += ","
            
        String_of_Spec_Charac = not String_of_Spec_Charac
    else:
        String_Replaced += i
    
print(String_Replaced)
