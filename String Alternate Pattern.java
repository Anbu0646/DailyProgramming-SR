/*
The program must accept a string S as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format: T he first line contains S. 

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:

Input:  abcdefghijklmno

Output: a 
        no 
        bcd 
        jklm
        efghi
        
Example Input/Output 2:

Input:  skillrack 

Output: s 
        ck 
        kil 
        lra 
        
Example Input/Output 3: 

Input:  junk 

Output: j
        nk 
        u

SOLUTION:
*/

using System;
 
namespace Hello
{
	class Hello
	{
		public static void Main (string[] args)
		{
			string s = Console.ReadLine();
			int i = 0, j = s.Length, n = j, o = 1;
    		while(i <= j && i < n && j > 0)
                {
    			if(j - i >= o)
                        {   
    			    if(o % 2 == 1)
                            {
    			        Console.Write(s.Substring(i, o));
    			        i += o;
    			    }
    			    else
                            {
    			        Console.Write(s.Substring(j - o, o));
    			        j -= o;
    			    }
    			    o++;
    			}
    			else
                        {
    			    Console.Write(s.Substring(i, j - i));break;
    			}
			        Console.WriteLine();
			}
		}
	}
}

/*
PY3:
n = input().strip()
ct = 1
while n:
    if ct & 1:
        print(n[:ct])
        n = n[ct:]
    else:
        print(n[-ct:])
        n = n[:-ct]
    ct += 1 
*/
