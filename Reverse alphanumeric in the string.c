/*
You must implement the function reverseAlphanumeric which accepts a string S and reverses only the alphanumeric characters (alphabets and digits) inplace. 

Example Input/Output 1: 

Input:  **hi** !23 skillrack 
Output: **kc** !ar lliks32ih 

Explanation: Here the alphanumeric characters are h, i, 2, 3, s, k, i, l, l, r, a, c and k.
             They are reversed among them to give k, c, a, r, l, l, i, k, s, 3, 2, i and h. 
             The non-alphanumeric characters retain their positions. 
             So the modified string value is **kc** !ar lliks32ih

SOLUTION:
*/
void reverseAlphanumeric(char *str)
{
    int len = strlen(str);
    for(int i=0, j=len-1; i<j; )
    {
        if(isalnum(str[i])&&isalnum(str[j]))
        {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            
            i++;
            j--;
        }
        else if(!(isalnum(str[i])))
        {
            i++;
        }
        else if(!(isalnum(str[j])))
        {
            j--;
        }
    }
    
    return str;
}
