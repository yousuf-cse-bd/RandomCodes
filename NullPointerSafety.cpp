/**
 * @file NullPointerSafety.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Feature of null-pointer but no NULL
 * @version 0.1
 * @date 2023-01-19
 * @since ThursDay; 11:06 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int *pNumber {nullptr};
    pNumber = new int {101};

    if(pNumber != nullptr){
        cout<<"pNumber point to a VALID address: "<<pNumber<<endl;
        cout<<"*pNumber: "<<*pNumber<<endl;
    }
    else{
        cout<<"pNumber point to a INVALID address: "<<endl;
    }
    delete pNumber;
    pNumber = nullptr;
    /*------------------------------------------*/
    int *pNumber1 {nullptr};
    delete pNumber1;
    pNumber1 = nullptr;
    /*------------------------------------------*/
    int *pNumber2 {nullptr};
    if(pNumber2){
        delete pNumber2;
        pNumber2 = nullptr;
    }
    /*------------------------------------------*/
    printf("Program end well %c\n", 3);
    return 0;
}
