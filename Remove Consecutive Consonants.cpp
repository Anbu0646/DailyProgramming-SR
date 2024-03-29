/*
The program must accept a string S which contains only lower case alphabets as the input. The program must remove the consonants which are occurred consecutively. 
Then the program must print the modified string S as the output. Note: At least one vowel is always present in the string S. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format:  The first line contains the string S. 

Output Format: The first line contains the modified string value of S. 

Example Input/Output 1: 

Input: elephants 

Output: elea 

Explanation: 

The consonants p and h are have occurred consecutively so they are removed from the string "elephants". Now the string becomes "eleants". 
The consonants n t and s are occurred consecutively so they are removed from the string "eleants". Now the string becomes "elea". 
Hence the output is elea 

Example Input/Output 2: 

Input:  document 

Output: docume

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;
bool isvowel(char i){
    if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'){
        return true;
    }
    return false;
}

int main(int argc, char** argv)
{
    string s;
    cin >> s;
    int len = s.size();
    for(int i = 0; i < len; i++){
        if(isvowel(s[i])){
            cout << s[i];
        }
        else if(isvowel(s[i-1]) && isvowel(s[i+1])){
            cout << s[i];
        }
        else if((i == 0 || i == (len-1)) && (isvowel(s[i-1]) || isvowel(s[i+1])) ){
            cout << s[i];
        }
    }


}
