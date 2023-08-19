#include <iostream>
using namespace std;
int main()
{
    string plainText = "";
    cout << "Enter Plain Text : ";
    getline(cin,plainText);
    // cout<<plainText<<endl;
    int cipherShift=3;
    string encrypted_text = "";
    for (int i=0;i<plainText.length();i++)
    {
        char ch=plainText[i];
        char base='.';
        if(isalpha(ch))
        {
            if(ch>='A'&&ch<='Z')
            {
                base='A';
            }
            else
            {
                base='a';
            }
            char shiftedChar=((ch-base+cipherShift)%26)+base;
            encrypted_text=encrypted_text+shiftedChar;
        }
        else{
            encrypted_text=encrypted_text+ch;
        }
    }
    cout<<"Encrypted Text   : "<<encrypted_text<<endl;
    return 0;
}