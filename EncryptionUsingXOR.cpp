/**
 * @file EncryptionUsingXOR.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of XOR for password encoding
 * @version 0.1
 * @date 2022-09-18
 * @since SunDay; 08:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)

string encryptionMethod(string _password){
    unsigned int i = 0;
    while(_password[i++] != '\0'){
        _password[i] ^= 52; /*52 is a masking ke*/
    }
    return _password;
}
string decryptionMethod(string _password){
    unsigned int i = 0;
    while(_password[i++] != '\0'){
        _password[i] ^= 52; /*52 is a masking ke*/
    }
    return _password;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string _password;
    cout<<"Enter a password here: ";
    cin>>_password;
    string decryptedPassword = encryptionMethod(_password);
    cout<<"Passwprd Decrypted: "<<decryptedPassword<<endl;
    _password = decryptionMethod(decryptedPassword);
    cout<<"Your password: "<<_password<<endl;
    
    return 0;
}
