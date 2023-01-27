/**
 * @file VoidFunctionWithReturn.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A simple void typed function with return statement and constant-expression
 * @version 0.1
 * @date 2023-01-27
 * @since FriDay; 11:39 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*Normally age needs to l-Value, but const key-word violate l-r values rule*/
const void validAgeForVote(const char *const name, const unsigned int &age){
    /* code */
    constexpr unsigned int adultAge {18};

    if(age >= adultAge){
        cout<<name<<"'s "<<age<<" years old. Please proceed..."<<endl;
    }
    else{
        cout<<"Sorry, you are a NOT valid for vote..!"<<endl;
    }
    return; /*I think best practice*/
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*A function is provided reusability*/
    validAgeForVote("Yousuf", 26);

    validAgeForVote("Tamim", 18);

    validAgeForVote("Istiak", 13);
    return 0;
}
