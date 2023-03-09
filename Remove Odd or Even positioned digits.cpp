/*
INPUT 1: 2345678

OUTPUT 1: 2468

INPUT 2:  1009

OUTPUT 2: 9

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string n;
    cin >> n; 
    int len = n.size(), i, out = 0;
    (n[len - 1] % 2 == 0) ? i = 0 : i = 1;
  
    for(; i < n.size(); i += 2)
    { 
        out = out * 10 + (n[i] - '0');
    }
  
    cout << out ;
}
