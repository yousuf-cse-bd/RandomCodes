/**
 * @file NumberSystemShowPlusSign.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Show or hide + sign for positive numbers
 * @version 0.1
 * @date 2023-01-10
 * @since 02:19 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int positiveNumber {34};
    int negativeNumber {-45};
    cout<<"***************Regular-Print***************"<<endl;
    cout<<"Positive-Number: "<<positiveNumber<<endl;
    cout<<"Negative-Number: "<<negativeNumber<<endl;
    cout<<"\n***************Show-Position***************"<<endl;
    cout<<showpos;
    cout<<"Posotive-Number: "<<positiveNumber<<endl;
    cout<<"Negative-Number: "<<negativeNumber<<endl;
    cout<<"***************Show-Position***************"<<endl;
    cout<<noshowpos;
    cout<<"Posotive-Number: "<<positiveNumber<<endl;
    cout<<"Negative-Number: "<<negativeNumber<<endl;

    return 0;
}
