/**
 * @file RandomArrayElements.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Random array elements
 * @version 0.1
 * @date 2022-08-25
 * @since ThursDay; 07:23 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <ctime>
using namespace std;

const unsigned int size = 100;
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    srand(time(0));
    int A[size];
    unsigned int digitsCounter[10] = {0};
    for(unsigned int i = 0; i<size; i++){
        A[i] = rand() % 10;
        // cout<<"Index["<<i<<"] = Element = "<<A[i]<<endl;
        digitsCounter[A[i]]++;
    }
    /*Print 0 to 9*/
    for(unsigned int i = 0; i<10; i++){
        cout<<i<<"\t";
    }
    cout<<endl;
    /*Print counting 0 to 9 each times*/
    for(unsigned int i = 0; i<10; i++){
        cout<<digitsCounter[i]<<"\t";
    }
    cout<<endl;
    return 0;
}
