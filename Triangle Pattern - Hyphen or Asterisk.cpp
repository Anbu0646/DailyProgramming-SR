/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 100 

Input Format:  The first line contains the value of N. 
Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 

Output: ---**--- 
        --****-- 
        -******- 
        ******** 
        
Example Input/Output 2: 

Input:  7 

Output: ------**------ 
        -----****----- 
        ----******---- 
        ---********--- 
        --**********-- 
        -************- 
        **************

SOLUTION:
*/

int main()
{
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++) cout << '-';
        for(int j = 1; j <= 2i; j++) cout << '*';
        for(int j = 1; j <= n - i; j++) cout << '-';
        cout << endl;
    }
}
