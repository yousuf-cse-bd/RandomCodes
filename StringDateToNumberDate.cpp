/**
 * @file StringDateToNumberDate.cpp
 * @author Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Change date formated: string to int
 * @version 0.1
 * @date 2022-08-16
 * @since TuesDay; 12:20 PM
 * @copyright Copyright (c) 2022
 * Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const char *dateLine = "15-10-1996";
    /*String dat-type also supported*/
    // string ddMMyyy = "";
    // ddMMyyy.append(to_string(dateLine[0]-'0'));
    // ddMMyyy.append(to_string(dateLine[1]-'0'));
    // cout<<ddMMyyy<<endl;

    // int dd = stoi(ddMMyyy);
    // cout<<++dd<<endl;
    char dd[3];
    dd[0] = dateLine[0];
    dd[1] = dateLine[1];

    cout<<"Day: "<<stoi(dd)+1<<endl;
    char mm[3];
    mm[0] = dateLine[3];
    mm[1] = dateLine[4];
    cout<<"Month: "<<stoi(mm)+1<<endl;
    char yyyy[5];
    yyyy[0] = dateLine[6];
    yyyy[1] = dateLine[7];
    yyyy[2] = dateLine[8];
    yyyy[3] = dateLine[9];
    cout<<"Year: "<<stoi(yyyy) + 1<<endl;
    return 0;
}

