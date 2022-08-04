/**
 * @file RandomNumber.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Random number generator
 * @version 0.1
 * @date 2022-08-04
 * @since ThursDay; 10:35 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    srand(time(NULL));
    for(unsigned int i = 0; i<10; i++){
        int x = rand() % 3;
        /*x will be all time 0 to 2*/
        cout<<x<<endl;
    }
    return 0;
}
