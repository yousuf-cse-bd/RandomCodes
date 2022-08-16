/**
 * @file CurrenTimeAndDate.cpp
 * @author Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Print current time and dated
 * @version 0.1
 * @date 2022-08-16
 * @since TuesDay; 10:51 AM
 * @copyright Copyright (c) 2022
 * Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    /*Method one*/
    time_t now = time(0);
    string timeAndDate = ctime(&now);
    cout<<"Time and Date: "<<timeAndDate<<endl;

    return 0;
}
