/**
 * @file MultpleStringInput.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int size;
    cout<<"Enter array of the size: ";
    cin>>size;
    //  Contain a null char
    char ch = getchar();
    string fullName [size];
    for(unsigned int i = 0; i<size; i++){
       
        cout<<"Enter Your Full Name Here: ";
        getline(cin, fullName[i]);
        cout<<"\n\tEntered the your name: "<<fullName[i]<<endl;
    }


    return 0;
}
