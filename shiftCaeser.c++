#include <iostream>
using namespace  std;
int main()
{
    string plainText="";
    cout<<"Enter the plainText :"<<endl;
    getline(cin,plainText);
    int shiftChar;
    cout<<"Enter the Shifting number :"<<endl;
    cin>>shiftChar;
    string encryptedText="";
    for (int i=0;i<plainText.length();i++)
    {
        char ch=plainText[i];
        char base='.';
        if(isalpha(ch))
        {   
            if(ch>='A'&&ch<='Z')
            base='A';
            else
            base='a';

            char shiftedText=((ch-base+shiftChar)%26)+base;
            encryptedText=encryptedText+shiftedText;
        }
        else
        {
            encryptedText=encryptedText+ch;
        }
    }
    cout<<"EncryptedText: " <<encryptedText<<endl;

}