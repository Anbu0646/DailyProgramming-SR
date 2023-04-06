/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 0 <= N <= 10^8 

Input Format:  The first line contains N. 
Output Format: The first N lines contain integers as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  74381

Output: 7 
        44444444 
        333 
        8888 
        1111111 
        
Example Input/Output 2:

Input:  5019 
Output: 555555555 
        0 
        - 
        99999

SOLUTION:
*/

import java.util.*;
public class Hello
{

    public static void main(String[] args) 
    {

      Scanner in=new Scanner(System.in);
      String s=in.next();
      
      for(int i=0;i<s.length();i++)
      {
          int e=s.charAt(s.length()-i-1)-'0';
          if(e==0)
          {
              System.out.print("-");
          }
          
          while(e-->0)
          {
              System.out.print(s.charAt(i));
          }
      
      System.out.println(); 
      }
	}
  
}
