/*
The program must accept N string values as the input. 
The program must sort the string values based on the length of each string value in increasing order. 
Then the program must print the sorted string values as the output. 

Note: Each of the string values has a different length. 

Boundary Condition(s): 

1 <= N <= 100 
1<= Length of each string value <= 100 

Input Format: 

The first line contains the integer N. 
The next N lines contain the string value in each line. 

Output Format: The first N lines contain the sorted string values. 

Example Input/Output 1: 

Input: 

4 
lemon 
embezzling 
banana 
ant 

Output: 

ant 
lemon 
banana 
embezzling 

Explanation: 

The length of the string lemon is 5. 
The length of the string embezzling is 10. 
The length of the string banana is 6. 
The length of the string ant is 3. 
After sorting the string values based on their length are ant, lemon, banana, embezzling. 
Hence the output is 
ant 
lemon 
banana 
embezzling 

Example Input/Output 2: 

Input: 

5 
orange 
hello 
gentleman 
app 
hi 

Output: 

hi 
app 
hello 
orange 
gentleman

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, mn = 100, mx = 0;
    scanf("%d", &n);
    char s[n][100];
    
    for(int i=0; i<n; i++)
    {
        scanf("%s\n", s[i]);
        int l = strlen(s[i]);
        if(l < mn)
           mn = l;
        if(l>mx)
           mx = l;
    }
    
    for(int i=mn; i<=mx; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(strlen(s[j]) == i)
            {
                printf("%s\n", s[j]);
            }
        }
    }

}


/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n][100];
    
    for(int i=0; i<n; i++)
    {
        scanf("%s", s[i]);
    }
    
    int arr[100];
    
    for(int i=0; i<n; i++)
    {
        arr[i] = strlen(s[i]);
    }
    
    int a;
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i] == strlen(s[j]))
            {
                printf("%s", s[j]);
            }
        }
        printf("\n");
    }
}



PY3:
N = int(input())
Strings = []

for i in range(N):
    Strings.append(input().rstrip())

Strings = sorted(Strings, key = lambda x : len(x))

for i in Strings:
    print(i)
*/
