/*
The program must accept two integers (X, Y) and a character CH as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= X, Y <= 1000 

Input Format:  The first line contains the values of X, CH and Y separated by a space. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  3 # 5 

Output: ------#
        -----#
        #---#
        -#-# 
        --# 

Example Input/Output 2:

Input:  7 @ 7 

Output: @-----------@ 
        -@---------@ 
        --@-------@ 
        ---@-----@
        ----@---@ 
        -----@-@
        ------@

Example Input/Output 3: 

Input:  10 * 4 

Output: *
        -*
        --* 
        ---* 
        ----* 
        -----* 
        ------*-----*
        -------*---*
        --------*-* 
        ---------*

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i, j, f, s, l=0, w=1, so, fo;
  char aa;
  scanf("%d %c %d", &f, &aa, &s);
  
  l=f;
  if(s>f)
  {
    l=s;
  }  
  
  if(f<=s)
    w=f+s-1;  
  
  fo=0;
  so=f+s-2;
  
  for(i=l; i>0; i--)
  {
    for(j=0; j<w; j++)
    {
        if(j==fo && i<=f)
        {
          printf("%c", aa);
        }
        else if(j==so && i<=s)
        {
          printf("%c", aa);
        }
        else
        {
          printf("-");
        }
    }
    if(i<=f)
      fo++;
    
    if(i<=s)
      so--;
    
    if(i<=s)
      w--;
    
    else
      w++;
    
    if(i==s+1)
      w=f+s-1;
    
    printf("\n");
  }
}
