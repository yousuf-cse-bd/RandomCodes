/**
 * @file DynamicHeapVariable.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Dynamic memory allocation with reuse pointers
 * @version 0.1
 * @date 2023-01-16
 * @since MonDay; 09:45 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int *pNumber1 {new int {101}};
    cout<<"*pNumber1: "<<*pNumber1<<endl;
    delete pNumber1;
    pNumber1 = nullptr; /*For good practice*/
    
    int *pNumber2 {nullptr};
    pNumber2 = new int;
    *pNumber2 = 110;
    cout<<"*pNumber2: "<<*pNumber2<<endl;
    delete pNumber2;
    pNumber2 = nullptr; /*For good practice*/

    /*Can be reuse pointers*/
    pNumber1 = new int (81);
    cout<<"*pNumber1: "<<*pNumber1<<endl;
    pNumber2 = new int (821);
    cout<<"*pNumber2: "<<*pNumber2<<endl;
    delete pNumber1;
    delete pNumber2;
    pNumber1 = nullptr;
    pNumber2 = nullptr;

    
    return 0;
}
