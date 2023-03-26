/*
The program must accept an odd integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= N <= 99 

Input Format:  The first line contains the value of N.
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  5 

Output: -********* 
        ***-----*** 
        --**---** 
        ----*-* 
        
Example Input/Output 2: 

Input:  7 
Output: -************* 
        ****-------**** 
        --***-----*** 
        ----**---** 
        ------*-*

SOLTUION:
*/

import java.util.*;
public class Hello 
{

    public static void main(String[] args) 
    {
		    int n = new Scanner(System.in).nextInt();
		    System.out.println("-" + "*".repeat(n*2-1));
		    int temp = n-n/2, ant = 0, t = n;
		    
        for(int i=0; i<n-n/2; i++) 
        {
		        System.out.println("-".repeat(ant) + "*".repeat(temp) + "-".repeat(t) + "*".repeat(temp));
		        temp--;
		        ant += 2;
		        t -= 2;
		    } 
	  }
}
