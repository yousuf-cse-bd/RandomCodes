/**
 * @file ForLoopAndConditionalOperator.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief For loops, for-each loop and vector
 * @version 0.1
 * @date 2022-11-30
 * @since WednesDay; 10:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    for(unsigned int i {1}; i <= 100; i++){
        cout<<i<<((i % 10 == 0)?"\n": " ");
    }
    cout<<endl;
    vector <int> numbers {10, 20, 30, 40, 50, 60, 70, 80, 90};
    for(unsigned short int i {0}; i < numbers.size(); i++){
        cout<<numbers.at(i)<<" ";
    }
    cout<<endl;
    for(int x: numbers){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
