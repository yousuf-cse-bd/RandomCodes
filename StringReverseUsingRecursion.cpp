/**
 * @file StringReverseUsingRecursion.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of Recursion: A String Reverse Using Recursion
 * @version 0.1
 * @date 2022-08-24
 * @since WednesDay; 10:28 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
/*This function is performed a string print reverse order*/
void stringReverse(char country[], int length){

    if(length == 0){
        putchar(country[length]);
        return;
    }else{
        putchar(country[length]);
        stringReverse(country, length-1);
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char country[] = "BANGLADESH";
    cout<<"Given String: "<<country<<endl;
    /*Calculate string length*/
    int len = 0;
    while(country[++len] != '\0');
    cout<<"Reverse the String: ";
    stringReverse(country, --len);
    cout<<endl;
    return 0;
}
