/*
The program must accept N integers as the input. 
The program must print the integers having both the adjacent elements as two or three digit integers. 
If no such integer matches the given condition, then the program must print -1 as the output.

Note: The first and the last integers have only one adjacent integer and it must be checked.

Boundary Condition(s): 2 <= N <= 100

Input Format:  The first line contains the value of N.
 		           The second line contains N integers separated by space(s). 
Output Format: The first line contains the integers with two or three digit integers as their adjacent elements separated by space. 

Example Input/Output 1: 

Input:  6 
	      12 421 98 2 23 9348 
Output: 12 421 2 9348 

Explanation:  The adjacent integer of 12 is 421. Here 421 is a three digit integer. So 12 is printed. 
              The adjacent integers of 421 are 12 and 98. Here both 12 and 98 are two digit integers. so 421 is printed. 
              The adjacent integers of 98 are 421 and 2. Here 2 is not a two or three digit integer. 
              The adjacent integers of 2 are 98 and 23. Here both 98 and 23 are two digit integers. so 2 is printed.
              The adjacent integers of 23 are 2 and 9348. Here both 2 and 9348 are not a two or three digit integer. 
              The adjacent integer of 9348 is 23. Here 23 is a two digit integer. so 9348 is printed. 

Example Input/Output 2: 

Input:  8 
	      1 123 83 4 5 17 646 73 
Output: 1 646 73

SOLUTION:
*/

import java.util.*;
public class Hello 
{

    public static void main(String[] args) 
    {
		    Scanner sc = new Scanner(System.in);
		
		    int n = sc.nextInt();
		    String[] arr = new String[n];
		    int k=0;
		    for(int i=0;i<n;i++)
        {
		        String s= sc.next();
		    
		        arr[i]=s;
		    }
		    if(arr[1].length()==2 || arr[1].length()==3) 
        {
		        System.out.print(arr[0]+" ");
		        k=1;
		    }
		    for(int i=1;i<n-1;i++) 
        {
		        if((arr[i-1].length()==2 || arr[i-1].length()==3) && (arr[i+1].length()==2 || arr[i+1].length()==3)) 
            {
		            System.out.print(arr[i]+" ");
		            k=1;
		        }
		    }
		    if(arr[n-2].length()==2 || arr[n-2].length()==3)
        {
            System.out.print(arr[n-1]);
		        k=1;
		    }
		    if(k==0) 
        {
		        System.out.print("-1");
		    }
	  }
}
