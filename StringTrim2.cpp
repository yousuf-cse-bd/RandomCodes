/**
 * @file StringTrim2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Method 2: C++ Standard Library
 * @version 0.1
 * @date 2022-08-23
 * @since TuesDay; 10:32 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <bits/stdc++.h>
using namespace std;

/*User defined function for trimming a string*/
string trimFunction(string line){
    const string typeOfAllWhiteSpaces = " \t\n\r\f\v";
    /*Left-Trimer syntax*/
    line.erase(0,line.find_first_not_of(typeOfAllWhiteSpaces));
    /*Right-Trimer syntax*/
    line.erase(line.find_last_not_of(typeOfAllWhiteSpaces)+1);
    
    return line; 
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string line = "   \n\tYousuf\r\f \v   ";
    // cout<<"Given String: "<<line<<endl;
    cout<<"Trimed String: "<<trimFunction(line)<<" Ali"<<endl;
    return 0;
}
