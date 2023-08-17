/*
In a super market, there is a list consisting of N products which are numbered from 0 to N - 1. 
The names of the products are passed as the input to the program. 
The super market has advertisements to attract customers. 
The program also accepts a list of integers representing the product number which is advertised as the input. 
The program must print the product name having the maximum number of advertisements as the output. 
If more than one product is having the maximum number of advertisements then the program must print the first occurring product as the output. 

Boundary Condition(s): 

2 <= N <= 100 
2 <= Length of each product name <= 1000 

Input Format: 

The first line contains N. 
The next N lines each contain a string representing a product name. 
The (N+2)nd line contains a list of integers representing the product numbers being advertised separated by a space. 

Output Format: 

The first line contains the product name having the maximum number of advertisements. 

Example Input/Output 1: 

Input: 

10 
swansonFrozenDinner 
Pepsi 
Fritos 
HeinzKetchup 
FrenchsMustard 
Ortega 
LeanCuisine 
Eggo 
DietCoke 
KoolAid 
0 1 2 3 4 5 6 7 8 1 1 2 3 4 1 3 1 

Output: Pepsi 

Explanation: 

The product Pepsi has the maximum number of advertisements 5 (as the product number 1 which is for pepsi has occurred 5 times). 
So the output is Pepsi 

Example Input/Output 2: 

Input: 

7 
Agatha 
Bogner 
Champion 
Ecco 
Guess 
Izod
Lee 
0 1 2 3 3 3 3 4 5 6 1 

Output: Ecco

SOLUTION:
*/

/*
PY3:

N = int(input())
Products = [input() for _ in range(N)]
Product_Numbers = list(map(int, input().split()))

Product_count = [0] * N

for i in Product_Numbers:
        Product_count[i] += 1

Maximum_product = max(Product_count)
Maximum_product_index = Product_count.index(Maximum_product)
Maximum_product_name = Products[Maximum_product_index]

print(Maximum_product_name)
*/
