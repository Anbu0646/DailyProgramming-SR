/*
There are N litres of water in a tank. 
A boy wants to fill those N litres of water in the water bottles. 
So he decides to buy the empty water bottles. 
There are only two types of empty water bottles in the nearby shop 1-litre bottle and 2-litre bottle. 
The cost of a 1-litre water bottle is X rupees and the cost of a 2-litre water bottle is Y rupees.
The values of N, X and Y are passed as the input to the program. 
The program must print the minimum cost (in rupees) required to buy the water bottles (all the bottles must be filled with water) as the output. 

Boundary Condition(s): 

2 <= N <= 10^5 
1 <= X, Y <= 10^5

Input Format:  The first line contains N, X and Y values separated by a space. 

Output Format: The first line contains the minimum cost required to buy the water bottles. 

Example Input/Output 1: 

Input: 10 1 3 

Output: 10 

Explanation: 

If the boy buys ten 1-litre water bottles to fill 10 litres of water, the cost will be 10 rupees which is the minimum among the other possible combinations. 
Few other possible combinations are given below. 
The cost for five 2-litre water bottles is 15 rupees. 
The cost for four 2-litre water bottles and two 1-litre water bottles is 14 rupees. 
The cost for three 2-litre water bottles and four 1-litre water bottles is 13 rupees. 
The cost for two 2-litre water bottles and six 1-litre water bottles is 12 rupees. 

Example Input/Output 2: 

Input: 7 3 2 

Output: 9

SOLUTION:
*/




/*
PY3:
N, X, Y = map(int, input().split())
#print(N, X, Y)
Min_Cost = ( min( (N//2) * Y, N * X )  if N % 2 == 0 else min( ( (N//2) * Y + X ), N * X) )
print(Min_Cost)
*/
