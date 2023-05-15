'''
The program must accept N queries as the input. Each query contains a character CH and an integer X. The program must form a list based on the queries. 
The program must print the output by executing the queries one by one based on following the conditions. 

-If CH is + then the program must insert the value of X at the end of the list. 
-If CH is - then the program must remove the first occurrence of X from the list. 
-If CH is ? then the query value X can be either 1 or 0. 

If X is 1 then the program must print all the odd integers from the list in the order of insertion. 
Else if X is 0 then the program must print all the even integers from the list in the order of insertion. 

Note:  If there is no odd integer or even integer to print from the list, the program must print -1. 

Boundary Condition(s): 

1 <= N <= 100 
0 <= X <= 10^9 

Input Format: 

The first line contains the value of N. 
The next N lines contain the query (CH and X separated by a space). 

Output Format: 

The list of lines containing a list of integers separated by a space as per the given conditions.

Example Input/Output 1: 

Input: 

12 
+ 245 
+ 91 
? 1 
+ 743 
- 245 
? 0 
+ 1009 
? 1 
- 1009 
? 1 
+ 100 
? 0 

Output: 

245 91 
-1 
91 743 1009 
91 743
100 

Explanation: 

After the 1st query, 245 is inserted into the list. Now the list contains 245. 
After the 2nd query, 91 is inserted into the list. Now the list contains 245 91. 
After the 3rd query, all the odd integers in the list are printed. Hence 245 91 are printed. 
After the 4th query, 743 is inserted into the list. Now the list contains 245 91 743. 
After the 5th query, 245 is removed from the list. Now the list contains 91 743. 
After the 6th query, there is no even integer in the list. Hence -1 is printed. 
After the 7th query, 1009 is inserted into the list. Now the list contains 91 743 1009. 
After the 8th query, all the odd integers in the list are printed. Hence 91 743 1009 are printed. 
After the 9th query, 1009 is removed from the list. Now the list contains 91 743. 
After the 10th query, all the odd integers in the list are printed. Hence 91 743 are printed. 
After the 11th query, 100 is inserted into the list. Now the list contains 91 743 100. 
After the 12th query, all the even integers in the list are printed. Hence 100 is printed. 

Example Input/Output 2: 

Input: 

5 
+ 147 
+ 147 
? 1 
- 147 
? 1 

Output: 

147 147 
14

SOLUTION:
'''

n = int(input())
l = []
l1, l2 = [], []

for i in range(n):
    m, x = map(str, input().split())
    if(m == '+'):
        l.append(int(x))
    elif(m == '-'):
        l.remove(int(x))
    else:
        if(m == '?' and x == '1'):
            l1 = [i for i in l if i%2!=0]
            if(len(l1) != 0):
                print(*l1)
            else:
                print(-1)
        else:
            l2 = [i for i in l if i%2 == 0]
            if(len(l2) != 0):
                print(*l2)
            else:
                print(-1)
          
        k = 0
