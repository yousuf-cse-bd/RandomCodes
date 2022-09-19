/**
 * @file BitsField.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of bits field technique for optimal memory management
 * @version 0.1
 * @date 2022-09-19
 * @since MonDay; 11:05 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)
struct DateOfBirth{
    unsigned day : 5;
    unsigned month: 4;
    unsigned year;

};

/*If function retuns address, so to need dynamic memory allocation;
and here malloc() is the best way at all*/
DateOfBirth *assigningDateOfBirth(DateOfBirth *dob){
    dob = (DateOfBirth*) malloc(sizeof(DateOfBirth));
    dob->day = 15;
    dob->month = 10;
    dob->year = 1996;

    return dob;
    free(dob);
}


int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    DateOfBirth *dob;
    dob = assigningDateOfBirth(dob);
    cout<<"Day: "<<dob->day<<endl;
    cout<<"Month: "<<dob->month<<endl;
    cout<<"Year: "<<dob->year<<endl;
    free(dob);
    return 0;
}
