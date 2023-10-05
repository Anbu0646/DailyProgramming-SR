/*
The program must accept a string M containing three upper case alphabets as the input. 
M represents a month in a non-leap year.
The program must print the calendar of the month M where the starting day of the month is always SUNDAY as shown in the Example Input/Output section. 
The order of weekdays in the calendar is given below.

1 - SUN  
2 - MON 
3 - TUE 
4 - WED
5 - THU 
6 - FRI 
7 - SAT 

Input Format:  The first line contains M. 

Output Format: The lines containing the calender of the month M as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  AUG 

Output:

01 02 03 04 05 06 07 
08 09 10 11 12 13 14
15 16 17 18 19 20 21 
22 23 24 25 26 27 28
29 30 31 -- -- -- -- 

Example Input/Output 2:

Input:  FEB 

Output:

01 02 03 04 05 06 07 
08 09 10 11 12 13 14 
15 16 17 18 19 20 21 
22 23 24 25 26 27 28

SOLUTION:
*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
    string a;
    cin>>a;
	
    for(int i=1; i<=28; i++)
    {
        if(i < 10) cout<<0<<i<<" ";
        else cout<<i<<" ";
        if(i % 7 == 0) cout<<endl;
    }
	
    if(a == "JAN" || a == "MAR" || a == "MAY" || a == "JUL" || a == "AUG" || a == "OCT" || a == "DEC")
    {
        cout<<"29 30 31 -- -- -- --";
    }
    else if(a != "FEB")
    {
        cout<<"29 30 -- -- -- -- --";
    }
}

/*
C:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char m[3]; 
	scanf("%s", m);

	int cal[4][7] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28};
	int i, j;

	for(int i = 0; i < 4; i++, printf("\n"))
	{
		for(int j = 0; j < 7; j++)
		{
			if(cal[i][j] < 10) printf("0"); 
			printf("%d ",cal[i][j]);
		}	
	}
	
    if( strcmp(m, "JAN") == 0 || strcmp(m, "MAR") == 0 || strcmp(m, "MAY") == 0 || strcmp(m,"JUL") == 0 || strcmp(m, "AUG") == 0 || strcmp(m, "OCT") == 0 || strcmp(m, "DEC") == 0 )  
    {
        printf("29 30 31 -- -- -- -- ");
    }
    else if( strcmp(m, "APR") == 0 || strcmp(m, "JUN") == 0 || strcmp(m, "SEP") == 0 || strcmp(m,"NOV") == 0)
    {
        printf("29 30 -- -- -- -- --");
    }
    
    return 0;
}

PY3:
s = input().strip()
if s == "FEB":
    print("01 02 03 04 05 06 07\n08 09 10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28")
elif s == 'APR' or s == "JUN" or s == 'SEP' or s == 'NOV':
    print("01 02 03 04 05 06 07\n08 09 10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30 -- -- -- -- --")
else:
    print('01 02 03 04 05 06 07\n08 09 10 11 12 13 14\n15 16 17 18 19 20 21\n22 23 24 25 26 27 28\n29 30 31 -- -- -- --')
*/
