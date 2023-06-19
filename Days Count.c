/*
The program must accept a calendar date formatted as YYYY-MM-DD as the input. The program must print the number of the day in that year as the output. 

Boundary Condition(s): 

1900 <= Year <= 2019 
1 <= Month <= 12 
1 <= Day <= 31 

Input Format: 

The first line contains the date as per the given format. 

Output Format: 

The first line contains the number of the day in that year.

Example Input/Output 1: 

Input:  2019-01-25 

Output: 25 

Explanation: The given date 2019-01-25 is the 25th day of the year in 2019. 

Example Input/Output 2: 

Input:  2016-03-01 

Output: 61

SOLUTION:
*/

#include <stdio.h>
#include <stdlib.h>

int leap(int year) 
{
    if (year % 4 == 0) 
    {
        if (year % 100 == 0) 
        {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    return 0;
}

int main()
{
    int yy, mm, dd;
    scanf("%d-%d-%d", &yy, &mm, &dd);
    int daysinmonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if(leap(yy))
    {
        daysinmonth[1] = 29;
    }
    
    int dayz = 0;
    
    for(int i=0; i<mm - 1; i++)
    {
        dayz += daysinmonth[i];
    }
    
    dayz += dd;
    printf("%d", dayz);
}
