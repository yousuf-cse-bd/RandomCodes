/**
 * @file YousufsLoop.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Almost python for loop using C++
 * @version 0.1
 * @date 2022-12-10
 * @since SuturDay; 11:26 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

void myLoop(size_t n, size_t i = 0, size_t update = 1){
    if(i >= n){
        return;
    }
    cout<<i<<" ";
    myLoop(n, i = i + update);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    myLoop(11);
    return 0;
}
