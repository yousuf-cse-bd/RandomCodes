/**
 * @file LetterWordSentence.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Fun with string 
 * @version 0.1
 * @date 2022-12-08
 * @since ThursDay; 12:52 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

string myFunction (char *firstLetterName, string &firstName, string *fullName){
    string yourInfo {*firstLetterName};
    yourInfo += " " +firstName + " " + *fullName;
    return yourInfo;
}
void stringPointer(string *name){
    for(auto &x: *name){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string name {"YOUSUF"};
    cout<<"Given name: "<<name<<endl;
    stringPointer(&name);
    char firstLetterName{};
    string firstName {}, fullName{};

    cout<<"Enter first letter of your name here: ";
    cin>>firstLetterName;
    cout<<"Enter your first-name here: ";
    cin>>firstName;
    cin.ignore();
    cout<<"Enter your full-name here: ";
    getline(cin, fullName);

    cout<<"The info: "<<myFunction(&firstLetterName, firstName, &fullName)<<endl;
    
    return 0;
}
