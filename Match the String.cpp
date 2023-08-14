/*


SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin >> n;
    string words[n];
    int sizes[n];

    for(int i=0;i<n;i++)
    {
        cin >> sizes[i] >> words[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(words[j].length() == sizes[i])
            {
                cout << sizes[i] << " " << words[j] << endl;
            }
        }
    }
}
