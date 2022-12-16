/**
 * @file SentinelControlLoop.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A simple sentinel control while loop with pointer variable
 * @version 0.1
 * @date 2022-12-16
 * @since FriDay; 10:56 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

void display(const int *scores, int sentinel){
    cout<<"Scores are: ";
    while(*scores != sentinel){ /*This is called sentinel control loop*/
        cout<<*scores<<" ";
        scores++;
    }
    cout<<endl;
}
void display(const vector <string> *stooges){
    // stooges->at(0) = "FunnyMan"; /*15,16 same output*/
    // (*stooges).at(0) = "Funny";
    cout<<"The three stooges name: ";
    for(auto name: *stooges){
        cout<<name<<" ";
    }
    cout<<endl;
    stooges = nullptr;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int scores [] {100, 90, 98, 78, 85, 99, -1};
    display(scores, -1);
    vector <string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);
    return 0;
}
