/**
 * @file SizeOfAnArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find row-array size sincely 2017
 * @version 0.1
 * @date 2023-01-15
 * @since SunDay; 11:10 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int scores [] {10, 12, 15, 18, 17, 22, 23, 24};
    constexpr size_t scoresSize {size(scores)};
    cout<<"Score-size: "<<scoresSize<<endl;

    for(size_t i {0}; i < scoresSize; i++){
        cout<<"scores["<<i<<"] = "<<*(scores + i)<<endl;
    }

    /*Print the elements using for-each loop*/
    cout<<"All elements: ";
    for(const int x: scores){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
