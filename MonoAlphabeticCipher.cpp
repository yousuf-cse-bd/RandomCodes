/****
 * Mono Alphabetic Cipher
 * @Autor: MuhammadYousufAli
 * @Since: 9th February 2021
 */

#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char pt[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char key[27] = {'D', 'K', 'V', 'Q', 'F', 'I', 'B', 'J', 'W', 'P', 'E', 'S', 'C', 'X', 'H', 'T', 'M', 'Y', 'A', 'U', 'O', 'L', 'R', 'G', 'Z', 'N'};
    char message[100] = {'\0'};

    cout<<"Enter Your Message Here: ";
    gets(message);

    char cipherText[strlen(message)+1] = {'\0'};
    //converting plain text into cipher text (encryption)
    for (int i = 0; i < strlen(message); i++)
    {
        for (int j = 0; j < strlen(key); j++)
        {
            if (message[i] == pt[j])
            {
                cipherText[i] = key[j];
            }
        }
    }
    printf("Encrypted Message: %s\n", cipherText);

    
    return 0;
}
