/**
 * @file StructureElementsPassByPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Structure element using for argument call by reference using pointer in function
 * @version 0.1
 * @date 2022-09-13
 * @since TuesDay; 10:18 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
void birthDate(unsigned short int *day, unsigned short int *month, unsigned short int *year){
    cout<<"Date of Birth: "<<*day<<"-"<<*month<<"-"<<*year<<endl;
}
/*I think best practice union, structure and class etc declaring globally.*/
struct Date{
    unsigned short int day, month, year;
};
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Date dob;
    dob.day = 15;
    dob.month = 10;
    dob.year = 1996;
    /*Call by reference using pointer*/
    birthDate(&dob.day, &dob.month, &dob.year);
    return 0;
}