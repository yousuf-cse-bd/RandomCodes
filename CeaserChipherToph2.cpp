#include <iostream>
// #include <ctype.h>
using namespace std;

//encryption operation
string ceaserChipher(string plainText, int key)
{
    string chipherText;
    for(int i = 0; plainText[i] != '\0'; i++)
    {
        // For upper case and key value possitive or right shift
        if(isupper(plainText[i]) && key > 0)
        chipherText += (plainText[i] + key - 'A') % 26 + 'A';
        // For upper case and key value negative or left shift
        else if(isupper(plainText[i]) && key < 0)
        chipherText += (plainText[i] + key - 'Z') % 26 + 'Z';

        // For lower case and key value possitive or right shift
        else if(islower(plainText[i]) && key > 0)
        chipherText += (plainText[i] + key - 'a') % 26 + 'a';
        // For lower case and key value negtiave or left shift
        else if(islower(plainText[i]) && key < 0)
        chipherText += (plainText[i] + key - 'z') % 26 + 'z';
        else chipherText += plainText[i]; // space consider

    }
    return chipherText;
}

string decryptCeaserChipher(string chipherText, int key)
{   
    string plainText;
    for(int i = 0; chipherText[i] != '\0'; i++)
    {
        // for upper case and key is possitive
        if(isupper(chipherText[i]) && key > 0)
        plainText += (chipherText[i] - 'A' + key)% 26 + 'A';
        // for upper case and key is negative
        // else if(isupper(chipherText[i]) && key < 0)
        // plainText += (chipherText[i] - 'Z' - key + 26) % 26 + 'Z';

        // for lower case and key is possitive
        else if(islower(chipherText[i]) && key > 0)
        plainText += (chipherText[i] - key - 'a') % 26 + 'a';
        // for lower case and key is negative
        else if(islower(chipherText[i]) && key < 0)
        plainText += (chipherText[i] - key - 'z') % 26 + 'z';
        // space no changeed
        else
        plainText += chipherText[i];

    }
    return plainText;
}

int main(int argc, char const *argv[])
{
    /* code */
    // int key;
    // cout<<"Enter Your Key: ";
    // cin>>key;
    string plainText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // cout<<"Enter Your Plain Text Here: ";
    // getline(cin, plainText);
    string encryptMessage = ceaserChipher(plainText, -2);
    cout<<"Encrypted Message: "<<encryptMessage<<endl;
    string decryptMessage = decryptCeaserChipher(encryptMessage, -2);
    cout<<"Decrypted Message: "<<decryptMessage<<endl;
    return 0;
}
