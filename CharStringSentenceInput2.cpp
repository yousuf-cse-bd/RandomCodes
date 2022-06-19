/**
 * @file CharStringSentenceInput2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief char, word, sensetence
 * @version 0.1
 * @date 2022-06-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char firstLetter;
    char firstName[10];
    char fullName[20];

    cout<<"Enter First Letter of Your Name: ";
    cin>>firstLetter;

    cout<<"Enter Your First Name: ";
    cin>>firstName;

    cout<<"Enter Your Full Name: ";
    // fgets(fullName, strlen(fullName), stdin); // Not good
    scanf("\n%[^\n]",fullName); // Supported
    
    cout<<"Your First Letter: "<<firstLetter<<endl;
    cout<<"Your First Name: "<<firstName<<endl;
    cout<<"Your Full Name: "<<fullName<<endl;


    return 0;
}
