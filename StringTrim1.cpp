/**
 * @file StringTrim1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Method 1: Writing own trim function
 * @version 0.1
 * @date 2022-08-22
 * @since MonDay; 10:18 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
/*User defined trimer function*/
string trimFunction(string str){
    /*Initialize considering NO triming requred.*/
    unsigned int atStart = 0, atEnd = str.size() - 1;
    /*Space at start*/
    for(unsigned int i = 0; i<str.size(); i++){
        /*If get a first alphanumeric character, then break*/
        if(str[i] != ' '){
            atStart = i;
            break;
        }
    }
    // cout<<"At Start: "<<atStart<<endl;
    /*Space from end*/
    for(int i = str.size()- 1; i>=0; i--){
        /*If get a first alphanumeric character, then break*/
        if(str[i] != ' '){
            atEnd = i;
            break;
        }
    }
    // cout<<"At End: "<<atEnd<<endl;
    string trimedSting = "";
    for(unsigned int i = atStart; i <= atEnd; i++){
        trimedSting += str[i];
    }
    return trimedSting;
}
int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    cout<<trimFunction("    Yousuf    ");
    return 0;
}
