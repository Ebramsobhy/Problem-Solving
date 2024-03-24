/*
   ====================================================================================
    Problem 64
    Write a program to read a text and encrypt it, decrypt it:
    Input : Ebram
    Output : Text Before Encryption (Ebram)
             Text After Encryption (Gdtco)
             Text After Decryption (Ebram)   
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadText()
{
    string Text;
    cout << "Please Enter Text?" <<endl;
    cin >> Text;
    return Text;
}

string EncryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int) Text[i] + EncryptionKey);
    }
    return Text;   
}

string DecryptText(string Text, short EncryptionKey)
{
   for (int i = 0; i <= Text.length(); i++)
   {
       Text[i] = char((int) Text[i] - EncryptionKey);
   }
   return Text;
}

int main()
{
    const short EncryptionKey = 2;
    string TextAfterEncryption, TextAfterDecryption;
    string Text = ReadText();

    TextAfterEncryption = EncryptText(Text, EncryptionKey);
    TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

    cout << "Text Before Encryption : " << Text << endl;
    cout << "Text After Encryption : "  << TextAfterEncryption << endl;
    cout << "Text After Decryption : " <<  TextAfterDecryption << endl;
    return 0;
}