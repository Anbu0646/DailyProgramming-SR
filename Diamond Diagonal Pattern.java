/*
The program must accept an integer N and a character CH as the input.
The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s): 4 <= N <= 50 

Input Format:  The first line contains N and CH separated by a space. 

Output Format: The lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1: 

Input:  5 *

Output: ----*
        ---***
        --*-*-* 
        -*--*--*
        *********
        -*--*--* 
        --*-*-*
        ---*** 
        ----* 

Example Input/Output 2:

Input:  6 # 

Output: -----#
        ----###
        ---#-#-#
        --#--#--#
        -#---#---# 
        ########### 
        -#---#---# 
        --#--#--# 
        ---#-#-#
        ----###
        -----#

SOLUTION:
*/

import java.util.*;
public class Hello 
{

    public static void main(String[] args) 
        {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		String c = sc.next();
		for(int i = 0; i < a - 1; i++) 
                {
		    for(int j = 0; j < a + i; j++) 
                    {
		        if(j == a - 1 || j == a - i - 1 || j == a + i - 1) System.out.print(c);
		        else System.out.print("-");
		    }
		    System.out.println();
		}
		System.out.println(c.repeat(a * 2 - 1));
		for(int i = 0; i < a - 1; i++) 
                {
		    for(int j = 0; j < (a * 2 - 2) - i; j++) 
                    {
		        if(j == a - 1 || j == (a * 2 - 3) - i || j == i + 1) System.out.print(c);
		        else System.out.print("-");
		    }
		    System.out.println();
		}
	}
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, c;
    char b; 
    scanf("%d %c", &a, &b);  
    for(int i = 0; i < a; i++)
    { 
        for(int j = 1; j <= a + i; j++)
        {   
            if(i == a - 1)
            {
                printf("%c", b);
            }
            else if(i != a - 1 && j == a || j == a - i || j == a + i)
            { 
                printf("%c", b); 
                c = a + i;
            } 
            else 
            { 
                printf("-");
            }
        }
        printf("\n");
    }  
    int x = 1, y = c - a;  
    for(int i = 0; i < a - 1; i++)
    { 
        for(int j = 1; j <= 2 * a - 1 - x; j++)
        { 
            if(j == a - y || j == a + y || j == a)
            { 
                printf("%c", b);
            }
            else 
            {
                printf("-");
            }
        } 
        y--;
        x++;
        printf("\n");
    }
}


CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
        int n; char ch;

        cin>>n>>ch;

        int row = 2 * n - 1, hyp = n - 1, add = -1;

        for(int i = 1; i <= row; i++)
        {
             for(int j = 1; j <= hyp; j++)
             {
                     cout<<"-";
             }
        }
          
        for(int j = 1; j <= (i <= n ? 2 * i - 1 : 2 * (2 * n - i) - 1); j++)
        {
                 if(i <= n && (j == 1 || j == 2 * i - 1 || j == i || i == n))
                     cout<<ch;
   
                 else if(i > n && (j == 1 || j == 2 * (2 * n - i) - 1 || j == (4 * n - 2 * i) / 2))
                     cout<<ch;  
    
                 else
                     cout<<"-";
        }
  
        if(hyp == 0)
        {
           add = 1;
        }
  
        hyp += add;
  
        cout<<endl; 
    
}
*/
