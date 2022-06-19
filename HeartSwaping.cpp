/**
 * @file HeartSwaping.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <conio.h>
using namespace std;

class HeartSwaping
{
private:
    string boy = "Male Heart";
    string girl = "Female Heart";    
public:
    HeartSwaping(){
        system("cls");
    }
    ~HeartSwaping(){
        getch();
    }
    void beforeSwaping(){
        // before Swaping operation
        cout<<"Before Relationship:"<<endl;
        cout<<"\tBoy Contain: "<<boy<<endl;
        cout<<"\tGirl Consist: "<<girl<<endl;
    }
    void afterSwaping(){
        // After Swaping operation
        swap(boy, girl);
        cout<<"\nAfter Relationship:"<<endl;
        cout<<"\tBoy Contain: "<<boy<<endl;
        cout<<"\tGirl Contain: "<<girl<<endl;
    }
};


int main(int argc, char const *argv[])
{
    /* code */
    HeartSwaping hSwaping = HeartSwaping();
    hSwaping.beforeSwaping();
    hSwaping.afterSwaping();
    return 0;
}
