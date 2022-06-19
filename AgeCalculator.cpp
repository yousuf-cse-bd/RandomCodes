#include <iostream>
using namespace std;

void ageCalculator(int currentDate, int currentMonth, int currentYear,
    int birthDate, int birthMonth, int birthYear){
    //Days of every month
    
    // if birth date is greater then current birth
    // month then do not count this month and add 30
    // to the date so as to subtract the date and
    // get the remaining days
    int month[] = {31, 28, 31, 30, 31, 30, 31,
                    31, 30, 31, 30, 31};

    if(birthDate > currentDate)
    {
        currentDate = currentDate + month [birthMonth - 1];
        currentMonth = currentMonth - 1;
    }

    // if birth month exceeds current month, then do
    // not count this year and add 12 to the month so
    // that we can subtract and find out the difference
    if(birthMonth > currentMonth)
    {
        currentYear = currentYear - 1;
        currentMonth = currentMonth + 12;
    }

    // calculate date, month, year
    int calculatedDate = currentDate - birthDate;
    int calculatedMonth = currentMonth - birthMonth;
    int calculatedYear = currentYear - birthYear;

    cout<<"Year: "<<calculatedYear<<endl;
    cout<<"Month: "<<calculatedMonth<<endl;
    // cout<<"Days: "<<calculatedDate<<endl;
    if(calculatedDate < 7)
    cout<<"Days: "<<calculatedDate<<endl;
    else if(calculatedDate > 6)
    {
        int week = calculatedDate / 7;
        cout<<"Weeks: "<<week<<"\nDays: "<<calculatedDate % 7<<endl;
    }
   
}

int main(int argc, char const *argv[])
{
    int currentDate = 26;
    int currentMonth = 5;
    int currentYear = 2022;

    int birthDate = 1;
    int birthMonth = 11;
    int birthYear = 1997;

    ageCalculator(currentDate, currentMonth, currentYear,
    birthDate, birthMonth, birthYear);

    return 0;
}
