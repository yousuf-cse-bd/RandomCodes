/****
 * Program: Polyalphabtic Cipher
 * @Author: MuhammadYousufAli
 * @Since: 2nd February 2021
 */
#include <iostream>
#include <string.h>
using namespace std;

void polyAlphabeticCipher(char message[], char key[])
{

    int msgLen = strlen(message), keyLen = strlen(key), i, j;

    char newKey[msgLen], encryptedMsg[msgLen], decryptedMsg[msgLen];

    //Generating New Key
    for (i = 0, j = 0; i < msgLen; ++i, ++j)
    {
        if (j == keyLen)
            j = 0;

        newKey[i] = key[j];
    }

    newKey[i] = '\0';

    //Encryption Technique
    for (i = 0; i < msgLen; ++i)
    {
        encryptedMsg[i] = ((message[i] + newKey[i]) % 26) + 'A';
    }
    encryptedMsg[i] = '\0';

    //Decryption Technique
    for (i = 0; i < msgLen; ++i)
    {
        decryptedMsg[i] = (((encryptedMsg[i] - newKey[i]) + 26) % 26) + 'A';
    }
    decryptedMsg[i] = '\0';

    cout << "Original Message Here: " << message<<endl;
    cout << "Given Key Here : " << key<<endl;
    cout << "New Generated Key Here: " << newKey<< endl;
    cout << "Encrypted Message Here: " << encryptedMsg<<endl;
    cout << "Decrypted Message Here: " << decryptedMsg<<endl;
}

int main(int argc, char const *argv[])
{
    char msg[] = "MYCATHASFLEAS";
    char key[] = "FACE";

    polyAlphabeticCipher(msg, key);

    return 0;
}
