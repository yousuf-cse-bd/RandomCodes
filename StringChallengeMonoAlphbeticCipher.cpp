/**
 * @file StringChallengeMonoAlphbeticCipher.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Mono Alphabetic Cipher Algorithm type of Substitute
 * @version 0.1
 * @date 2022-12-07
 * @since TuesDay; 12:17 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const string alphabet {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string key {"$XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string plainText{}, cipherText{};

    cout<<"Enter your messsage here: ";
    getline(cin, plainText);
    /*Encryption the message*/;
    cout<<"\tEncrypting message..."<<endl;
    for(auto letter: plainText){
        size_t position {alphabet.find(letter)};
        if(position != string :: npos){ /*npos means no-position*/
            cipherText.push_back(key.at(position));
        }else{
            cipherText.push_back(letter);
        }
    }
    cout<<"The cipher text: "<<cipherText<<endl;
    plainText.clear();
    /*Decryption the cipher text*/
    cout<<"\tDecrypting message..."<<endl;
    for(auto letter: cipherText){
        size_t position {key.find(letter)};
        if(position != string :: npos){ /*npos means no-position*/
            plainText.push_back(alphabet.at(position));
        }else{
            plainText.push_back(letter);
        }
    }
    cout<<"The plain text: "<<plainText<<endl;

    return 0;
}
