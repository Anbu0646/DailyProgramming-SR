/*
The program must accept three integers X, Y and Z as the input. 
The program must print the largest possible integer which is obtained by concatenating any two integers among X, Y and Z as the output. 

Boundary Condition(s): 0 <= X, Y, Z <= 10^5 

Input Format:  The first line contains X, Y and Z. 

Output Format: The first line contains an integer based on the given condition. 

Example Input/Output 1: 

Input:  100 2 10

Output: 10100 

Explanation: 

The largest possible integer 10100 is obtained by concatenating the integers 10 and 100. 
Hence the output is 10100.

Example Input/Output 2: 

Input:  45 81 12 

Output: 8145 

Example Input/Output 3: 

Input:  0 2 5 

Output: 52

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{

  string s[3];
  cin>>s[0]>>s[1]>>s[2];

  long long mx = 0, x;

  for(int i = 0; i < 2; i++)
  {
      for(int j = i + 1; j < 3; j++)
      {
          x = stoll(s[i] + s[j]);
          mx = max(mx, x);
          x = stoll(s[j] + s[i]);
          mx = max(mx, x);
      }
  }
  
  cout<<mx;
  
}

/*
PY3:
a = list(map(int,input().split()))
a.sort(reverse = True)
x = int(str(a[0]) + str(a[1]))
y = int(str(a[1]) + str(a[0]))
if x > y:
    print(x)
else:
    print(y)

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[3], temp = 0, count = 0;
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
    {
        printf("0");
        return 0;
    }
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int m = arr[2]; m > 0; m /= 10)
    {
        if(m % 10 == 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    
    if(count >= 2)
    {
        printf("%d%d", arr[1], arr[2]);
    }
    else
    {
        printf("%d%d", arr[2], arr[1]);
    }
    
    return 0;
    
}
*/
