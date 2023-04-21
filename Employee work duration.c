/*
A store is open from 8:00AM to 9:00PM.
A sales person working in the store must be present in the store for atleast 8 hours. 
The sales person can take tea/lunch breaks in between. The store has Entry and Exit time monitoring system.
The program must accept the N entry and exit time entries and print if on a given day, the sales person was present in the store for 8 hours. 
E indicates Entry time and X indicates Exit time. 

Boundary Condition(s): 1 <= N <= 100 

Input Format:  The first line contains N. Next N lines contain the entry or exit time in 24 hour HH:MM format. 
Output Format: The first line yes or no. 

Example Input/Output 1: 

Input:  8 
        E 8:30 
        X 10:00 
        E 11:00 
        X 14:00 
        E 15:00 
        X 17:30 
        E 17:45 
        X 21:00 
        
Output: yes 

Explanation: The sales person was present in the following time slots. 

             8:30-10:00 = 90 minutes 
             11:00-14:00 = 180 minutes 
             15:00-17:30 = 150 minutes 
             17:45-21:00 = 195 minutes 
             So total minutes = 90+180+150+195 = 615 minutes = 10 hours and 15 minutes which is more than 8 hours. 
             Hence yes is printed. 
             
Example Input/Output 2: 

Input:  6 
        E 10:30 
        X 12:00 
        E 13:00 
        X 14:00 
        E 18:00 
        X 21:00 
        
Output: no 

Explanation: The sales person was present in the following time slots. 
             10:30-12:00 = 90 minutes 
             13:00-14:00 = 60 minutes 
             18:00-21:00 = 180 minutes 
             So total minutes = 90+60+180 = 330 minutes = 5 hours and 30 minutes which is less than 8 hours. 
             Hence no is printed.

SOLUTION:
*/

