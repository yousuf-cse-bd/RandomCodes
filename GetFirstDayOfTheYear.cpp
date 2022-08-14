/**
 * @file GetFirstDayOfTheYear.cpp
 * @author Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief First day of an input year
 * @version 0.1
 * @date 2022-08-14
 * @since SunDay; 8:15 PM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;
short int getFirstDayOfTheYear(int year){
    short int firstDayOfTheYear = (year*365 + ((year-1)/4) - ((year - 1)/100) + ((year - 1) / 400)) % 7;
    return firstDayOfTheYear;
}

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    cout<<"First day of the year: "<<getFirstDayOfTheYear(2022)+1<<endl;
    return 0;
}
