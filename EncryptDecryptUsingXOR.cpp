/**
 * @file EncryptDecryptUsingXOR.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Encryption and decryption using XOR (^)
 * @version 0.1
 * @date 2022-09-18
 * @since SunDay; 08:36 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)

class EncryptDecryptUsingXOR
{
private:
    /* data */
    string _password;
    string _decryptedPassword;
public:
    void inputPassword(){
        cout<<"Enter your password here: ";
        cin>>_password;
        encryptionMethod(_password);
    }
    void encryptionMethod(string _password){
        this->_password = _password;
        unsigned int i = 0;
        while(_password[i++] != '\0'){
            _password[i] ^= 52;
        }
        cout<<"Password Encrypted: "<<_password<<endl;
        decryptionMethod(_password);
    }
    void decryptionMethod(string _decryptedPassword){
        unsigned int i = 0;
        while(_decryptedPassword[i++] != '\0'){
            _decryptedPassword[i] ^= 52;
        }
        cout<<"Password Decrypted: "<<_decryptedPassword<<endl;
    }
    EncryptDecryptUsingXOR(/* args */){}
    ~EncryptDecryptUsingXOR(){}
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    EncryptDecryptUsingXOR xor1;
    xor1.inputPassword();
    
    return 0;
}


