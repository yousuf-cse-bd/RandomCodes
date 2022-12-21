/**
 * @file ConstructorDefaultParameters.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Constructor defualt parameters with handy for constructor overloading
 * @version 0.1
 * @date 2022-12-21
 * @since WednesDay; 10:51 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Player{
private:
    /*Class attributes or member variables*/
    const string name{};
    const int health {}, xp{};
public:
    /*Class methods or memeber functions*/
    /*Better initialization and not need this pointer*/
    Player(const string name = "NoName", const int health = 0, const int xp = 0):name{name}, health{health}, xp{xp}{ 
        cout<<"\tThree arguments parameterized constructor."<<endl;
    }
    void displayDatas(void){
        cout<<"The name: "<<name<<endl;
        cout<<"Health property: "<<health<<" %"<<endl;
        cout<<"Experience: "<<xp<<" times"<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Player empty;
    empty.displayDatas();
    Player yousuf{"Yousuf"};
    yousuf.displayDatas();
    Player hero{"Hero", 100};
    hero.displayDatas();
    Player villain {"Villain", 100, 55};
    villain.displayDatas();
    return 0;
}
