/**
 * @file StringLiteratureAndForEachLoop.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief auto key-word and for-each-loop
 * @version 0.1
 * @date 2022-11-30
 * @since WednesDay; 10:37 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int list[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for(auto x: list){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto number: {10.3, 20.5, 30.6, 40.2, 50.1}){
        cout<<number<<"\t";
    }
    cout<<endl;
    for(auto letter: "Muhammad Yousuf Ali"){
        cout<<letter<<" ";
    }
    return 0;
}
