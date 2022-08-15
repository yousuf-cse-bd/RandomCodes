/**
 * @file FormatedNumberInC.cpp
 * @author Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Read an integer variable and print it in which the digits are separated into groups of three by commas.
 * @version 0.1
 * @date 2022-08-15
 * @since MonDay; 11:27 PM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char givenNumber[20] = "1171123";
    char formatedNumber[30];
    int j,k;
    j = k = 0;
    for(int i = strlen(givenNumber) - 1; i>=0; i--){
        if(j == 3){
            formatedNumber[k++] = ',';
            formatedNumber[k++] = givenNumber[i];
            j = 0;

        }else{
            formatedNumber[k++] = givenNumber[i];
        }
        j++;
    }
    for(int i =  strlen(formatedNumber) - 1; i>=0; i--){
        cout<<formatedNumber[i];
    }
    cout<<endl;
    return 0;
}
