/**
 * @file ConstructionInitializationList.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Constructor overloading and this pointer with object argument modernize
 * @version 0.1
 * @date 2022-12-19
 * @since MonDay; 10:09 PM
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
    Player(string name); /*Single parameter constructor*/
    Player(string name, int health, int experience);

    void showDatas(void);
};

Player :: Player(){
    name = "NoName";
    health = 0, experience = 0;
}
Player :: Player(const string name){
    this->name = name;
}
Player :: Player(const string name, const int health, const int experience){
    this->name = name, this->health = health, this->experience = experience;
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
