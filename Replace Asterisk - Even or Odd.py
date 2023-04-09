'''
The program must accept an integer matrix of size RxC as the input. The program must replace the elements of the matrix based on the following conditions. 

-If the count of even integers is greater than or equal to the count of odd integers in the matrix then the program must replace all the even integers by asterisk *.
-If the count of odd integers is greater than the count of even integers in the matrix then the program must replace all the odd integers by asterisk *. 
 Then the program must remove the row(s) and column(s) having all the elements as asterisk *. 
 
 Finally, the program must print the modified matrix as the output. 
 
 If all the rows and columns are removed from the matrix then the program must print -1 as the output. 
 
 Boundary Condition(s): 2 <= R, C <= 50 
                        1 <= Matrix element value <= 10^7 
                        
Input Format:  The first line contains R and C separated by space. The next R lines each contain C integers separated by space(s). 
Output Format: The list of lines containing the elements of the modified matrix or the first line contains -1. 

Example Input/Output 1:

Input:  4 3
        11 20 19
        12 15 10 
        18 20 12 
        14 17 10
        
Output: 11 * 19
        * 15 * 
        * 17 * 
        
Explanation: There are 8 even integers and 4 odd integers in the matrix. Here the count of even integers is greater than the count of odd integers. 
             So all the even integers are replaced by the asterisk (*). 
             Now the matrix becomes 
             
             11 * 19 
             * 15 *             
             * * * 
             * 17 * 
             
             After replacing all the even integers by asterisks in the matrix, all the elements in the third row are asterisks. 
             So the third column is removed from the matrix.
             
             Hence the output is 
             
             11 * 19 
             * 15 * 
             * 17 *
             
Example Input/Output 2: 

Input:  2 2 
        5 7 
        3 9 
        
Output: -1

SOLUTION:
'''
