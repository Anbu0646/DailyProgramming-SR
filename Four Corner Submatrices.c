/*
The program must accept a character matrix of size MxM and an integer N as the input. 
The program must replace all the characters by the asterisks (*) except the characters in the four submatrices having size as NxN which are present in the four corners
of the matrix. 

Boundary Condition(s): 2 <= M <= 50 
                       1 <= N <= M/2 
                       
Input Format:  The first line contains the values of M and N separated by a space. 
               The next M lines contain M characters separated by a space. 
               
Output Format: The first M lines contain M characters of the modified matrix separated by a space. 

Example Input/Output 1: 

Input:  6 2 
        w u f j p e 
        g p z x d k
        g n x a z f 
        y d j q v n 
        k r w b a u
        d k i u e m 
        
Output: w u * * p e
        g p * * d k 
        * * * * * *
        * * * * * * 
        k r * * a u
        d k * * e m 
        
Explanation: The four corner submatrices having the size 2x2 is highlighted in the below matrix. 

             w u f j p e
             g p z x d k 
             g n x a z f
             y d j q v n 
             k r w b a u 
             d k i u e m
             
             Other than the highlighted characters are replaced by asterisk *. 
             
             Hence the output is 
             
             w u * * p e 
             g p * * d k 
             * * * * * *
             * * * * * * 
             k r * * a u
             d k * * e m 
             
Example Input/Output 2:

Input:  7 3 
        k s w l y l p
        z p o y a p i 
        g m l p m d h 
        t g c y p b e 
        k s n w x v g 
        l j e x t k i 
        q o p n v w e 
        
Output: k s w * y l p
        z p o * a p i
        g m l * m d h
        * * * * * * * 
        k s n * x v g 
        l j e * t k i
        q o p * v w e

Solution:
*/
