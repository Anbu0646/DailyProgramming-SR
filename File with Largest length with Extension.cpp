/*
The program must accept N filenames with extension and an extension E as the input. 
The program must print the filename which has the largest length with the extension E among the N filenames as the output. 
If more than one filename has the same largest length with the extension E then print the first occurring one as the output.
If there is no file with the extension E then the program must print FILE NOT FOUND as the output.

Note: All the alphabets in each extension are always lower case.

Boundary Condition(s):  1 <= N <= 100 
                        1 <= Length of each filename with the extension <= 100 
                        1 <= Length of the extension E <= 10 

Input Format:  The first line contains the value of N. The next N lines each contain a filename. The (N+2)th line contains the extension E. 
Output Format: The first line contains the filename based on the given conditions or FILE NOT FOUND. 

Example Input/Output 1: 

Input:  5 
        addTwoNumbers.c 
        removeVowels.java 
        stringExpansion.c 
        arrayRotation.cpp 
        main.c 
        .c 

Output: stringExpansion.c 

Explanation:  The filenames with the give extension .c are addTwoNumbers, stringExpansion and main. 
              So the filename with the largest length among those filenames is stringExpansion. 
              Hence the output is stringExpansion.c 

Example Input/Output 2: 

Input:  4 
        markSheet.pdf 
        myRingTone.mp3 
        nature.png 
        myAadhaar.pdf 
        .xlsx 

Output: FILE NOT FOUND

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

class filename 
{
    public:
    string name[100];
    
    int checklast(int index, string ext)
    {
        int len = name[index].size(), ext_len = ext.size();
        
        for(int i = len - 1,j = ext_len - 1;  name[index][i] != '.'; i--, j--)
        {
            if(name[index][i] != ext[j])
            {
                return 0;
            }
        }
        return len - ext_len;
    }
};


int main(int argc, char** argv)
{
    int n;
    cin >> n;
    class filename file;
    
    for(int i = 0; i < n; i++)
    {
        cin >> file.name[i];
    }
    
    string type;
    cin >> type;
    int great = 0, index = 0;
    
    for(int i = 0; i < n; i++)
    {
        int tmp = file.checklast(i, type);
        if(tmp > great)
        {
            great = tmp;
            index = i;
        }
    }
    
    if(great != 0)
    {
        cout << file.name[index];
        return 0;
    }
    
    else
    {
        cout << "FILE NOT FOUND";
    }
}
