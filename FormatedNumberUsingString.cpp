/**
 * @file FormatedNumberUsingString.cpp
 * @author Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Read an integer variable and print it in which the digits are separated into groups of three by commas.
 * @version 0.1
 * @date 2022-08-15
 * @since MonDay; 11:56 PM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string givenNmuber, formatedNumber;
    givenNmuber = "1171123";
    short int separator = 0;
    int j = 0;
    for(int i = givenNmuber.length() - 1; i>=0; i--){
        if(separator == 3){
            formatedNumber[j++] = ',';
            formatedNumber[j++] = givenNmuber[i];
            separator = 0;
        }else{
            formatedNumber[j++] = givenNmuber[i];
        }
        ++separator;
    }
    for(int i = j-1; i>=0; i--){
        cout<<formatedNumber[i];
    }
    cout<<endl;
    return 0;
}
