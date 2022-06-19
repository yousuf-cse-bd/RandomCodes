/****
 * Hill Cipher Algorithm
 * @Author: MuhammadYousufALi
 * @Since: 9th March 2021
 */

#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char plainText[2];
    cout << "Enter Your Plain Text Here(2 Lenth): ";
    cin >> plainText;
    if (strlen(plainText) == 2)
    {

        int ciphertText[2][1] = {};
        int key[2][2] = {2, 1, 3, 4};
        cout << "Given Key for 2x2 Matrix:" << endl;
        for (int i = 0; i < 2; i++)
        {
            //toUpper
            if(islower(plainText[i]))
                plainText[i] = toupper(plainText[i]);
            for (int j = 0; j < 2; j++)
            {
                cout << key[i][j] << "\t";
            }
            cout << endl;
        }

        //Plaintext --> message(int) column matrix
        int message[2][1];
        cout << "\nColumn Matrix" << endl;
        for (int i = 0; i < 2; i++)
        {
            message[0][i] = plainText[i] - 65;
            cout << message[i][0] << endl;
        }

        ///Matrix Multiplication
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 1; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    ciphertText[i][j] = ciphertText[i][j] + key[i][k] * message[k][j];
                }
            }
        }
        ///Encryption
        cout << "After Encryption: ";
        for (int i = 0; i < 2; i++)
        {
            cout << (char)((ciphertText[i][0] % 26) + 65);
        }
    }
    else
    {
        cout << "It Support Only 2 Length...!" << endl;
    }

    return 0;
}
