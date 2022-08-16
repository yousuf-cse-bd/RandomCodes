/**
 * @file GregorianCalendar.cpp
 * @author Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Day of the that day
 * @version 0.1
 * @date 2022-08-16
 * @since TuesDay; 10:26 AM
 * @copyright Copyright (c) 2022
 * Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

short int dayOfWeek(unsigned int day, unsigned int month, unsigned int year){
    printf("%0.2u-%0.2u-%0.4u\n", day, month, year);
    unsigned int a, y, m;
    a = (14 - month) / 12;
    y = year - a;
    m = month + (12 * a) - 2;
    // Gregorian:
    return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}
short int getFirstDayOfTheYear(int year){
    short int firstDayOfTheYear = (year*365 + ((year-1)/4) - ((year - 1)/100) + ((year - 1) / 400)) % 7;
    return firstDayOfTheYear;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const string daysName[7] = {"SunDay", "MonDay", "TuesDay", "WednesDay", "ThursDay", "FriDay", "SaturDay"};
    
    short thatDay = dayOfWeek(29,2,2024);
    cout<<daysName[thatDay]<<endl;
    return 0;
}
