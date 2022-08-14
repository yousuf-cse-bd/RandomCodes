/**
 * @file DateTimeAndCalendarPro.cpp
 * @author Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Project: A simple console calendar using class
 * @version 0.1
 * @date 2022-08-14
 * @since Sunday; 9:00 PM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <ctime>
using namespace std;

class DateAndCalendarPro{
    private:
    const string monthName[12] = {"January", "February", "March", "Aprill", "May", "June",
                "July", "August", "September", "October", "November", "December"};
    const string daysNames[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fir", "Sat"};
    int daysInPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    unsigned int year;
    public:
    DateAndCalendarPro(unsigned int year){
        this->year = year;
        cout<<"========================:WELCOME TO: "<<year<<":========================"<<endl;
        if(isLeapYear(year)){
            // cout<<"Leap Year"<<endl;
            daysInPerMonth[1] = 29;
        }
    }
    bool isLeapYear(unsigned int year){
        bool leapYear;
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            return true;
        }else{
            return false;
        }
    }
    unsigned int getFirstDayOfTheYear(unsigned int year){
        unsigned  int firstDayOfTheYear = firstDayOfTheYear = (year*365 + ((year-1)/4) - ((year - 1)/100) + ((year - 1) / 400)) % 7;
        return firstDayOfTheYear;
    }
    void myCalendar(){
        unsigned int weekCounter = getFirstDayOfTheYear(year);
        for(unsigned int month = 0; month != 12; month++){
            cout<<"\n************************: "<<monthName[month]<<" :************************"<<endl;
            for(unsigned int dName = 0; dName != 7; dName++){
                cout<<daysNames[dName]<<"\t";
            }
            cout<<endl;
            /*Printing tab-space for start from first day*/
            for(unsigned int tapSpace = 1; tapSpace <= weekCounter; tapSpace++){
                cout<<"\t";
            }
            /*Print all days and newline each 7 days*/
            for(unsigned int day = 1; day <= daysInPerMonth[month]; day++){
                weekCounter++;
                if(weekCounter == 7){
                    cout<<day<<"\n";
                    weekCounter = 0;
                }
                else{
                    cout<<day<<"\t";
                }
            }
        }
    }
};


int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Current date/time based on your computer*/
    time_t now = time(0);
    /*Convert now to string from*/
    string dateAndTime = ctime(&now);
    cout<<"The local date and time: "<<dateAndTime;
    /*Convert now to time struct for UTC*/
    tm *gmtm = gmtime(&now);
    dateAndTime = asctime(gmtm);
    cout<<"The UTC date and time: "<<dateAndTime<<endl;
    cout<<"Enter your selected year here:? ";
    unsigned int year;
    cin>>year;
    DateAndCalendarPro simpleCalendar = DateAndCalendarPro(year);
    simpleCalendar.myCalendar();
    return 0;
}
