/**
 * @file DelegatingConstructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Resolved duplicate code can lead to errors
 * @version 0.1
 * @date 2022-12-20
 * @since TuesDay; 10:37 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1) /*Structure or Class padding directive*/
using namespace std;

class Player{
private:
    /*Class Attributes*/
    string name{};
    int health{};
    int experience{};
public:
    /*Class Methods*/
    Player();/*Defualt constructor*/
    Player(string nameValue); /*Single parameter constructor*/
    Player(string nameValue, int healthValue, int experienceValue);

    void showDatas(void);
};

Player :: Player()
    :Player{"NoName", 0, 0}{ /*Avoids duplicating errors*/
    cout<<"No-Arg constructor"<<endl;
}
Player :: Player(string nameValue)
    :Player{nameValue, 0, 0}{
    cout<<"One-arg constructor"<<endl;
}
Player :: Player(string nameValue, int healthValue, int experienceValue){
    name = nameValue, health = healthValue, experience = experienceValue;
    cout<<"Three-args constructor"<<endl;
}
void Player :: showDatas(void){
    cout<<"Name: "<<name<<endl;
    cout<<"Helth: "<<health<<" %"<<endl;
    cout<<"Experience: "<<experience<<" Times"<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Player empty;
    Player youusf{"Youusf"};
    Player villain {"Villain", 100, 55};
    empty.showDatas();
    youusf.showDatas();
    villain.showDatas();

    return 0;
}
