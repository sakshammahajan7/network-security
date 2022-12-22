#include <bits/stdc++.h>
using namespace std;

int main()
{
// Declaring all variables
        int i, key;
        string s;
        char c;  

    // Taking Input

    cout<<"Enter a plaintext to encrypt"<<endl;  
    getline(cin, s);
    cout<<"Enter key"<<endl;
    cin>>key;
    int n=s.size();

//    encrypting each letter according to the given key
    for(i = 0; i<n ; i++)  
    {  
        c = s[i];  
        if(c >= 'a' && c <= 'z')  
        {  
            c = c + key;  
            if(c > 'z')  
            {  
                c = c - 'z' + 'a' - 1;  
            }  
            s[i] = c;  
        }  
        else if(c >= 'A' && c < 'Z')  
        {  
            c = c + key;  
            if(c > 'Z')  
            {  
                c = c = 'Z' + 'A' - 1;  
            }  
            s[i] = c;  
        }  
    }  

// Output the cipher

    cout<<"Encrypted message: "<<s<<endl;
   
    return 0;
}