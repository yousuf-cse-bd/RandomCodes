/**
 * @file TimeAndDateBest.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Individual time and date most importaint not string
 * @version 0.1
 * @date 2022-08-18
 * @since FriDay, 09:48 AM
 * @copyright Copyright (c) 2022
 * Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

void timeAndDate(){
    const string daysName[] = {"SaturDay", "SunDay", "MonDay", "TuesDay", "WednesDay", "FriDay"};
    time_t currentTimeAndDate = time(0);
    tm *timeAndDatePointer = localtime(&currentTimeAndDate);
    /*Consider firsly time displaying*/
    printf("Hour: %0.2d\n",timeAndDatePointer->tm_hour);
    printf("Minute: %0.2d\n",timeAndDatePointer->tm_min);
    printf("Second: %0.2d\n",timeAndDatePointer->tm_sec);
    /*Consider now date displaying*/
    cout<<daysName[timeAndDatePointer->tm_wday]<<"; ";
    printf("Day of the month: %0.2d\n",timeAndDatePointer->tm_mday);
    printf("Month of the year: %0.2d\n",((timeAndDatePointer->tm_mon)+1));
    printf("Year of the century: %0.4d\n",((timeAndDatePointer->tm_year)+1900));
    cout<<"Running today: "<<timeAndDatePointer->tm_yday<<endl;
    cout<<"Day light savings: "<<timeAndDatePointer->tm_isdst<<endl; //?
    cout<<"\nFormal Time: ";
    printf("%0.2u::%0.2u::%0.2u\n", timeAndDatePointer->tm_hour,timeAndDatePointer->tm_min, timeAndDatePointer->tm_sec);
    cout<<"Formal Date: "<<daysName[timeAndDatePointer->tm_wday]<<"; ";
    printf("%0.2d-",timeAndDatePointer->tm_mday);
    printf("%0.2d-",((timeAndDatePointer->tm_mon)+1));
    printf("%0.4d\n",((timeAndDatePointer->tm_year)+1900));
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    timeAndDate();
    getch();
    return 0;
}
