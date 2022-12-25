/**
 * @file StaticMembers.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Static members are relationship with class name not object
 * @version 0.1
 * @date 2022-12-25
 * @since SunDay; 11:13 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Player{
private:
    const string name{};
    const int health {}, experience {};

    static size_t count;
public:
    string getName(void){
        return name;
    }
    int getHealth(void){
        return health;
    }
    int getExperience(void){
        return experience;
    }
    Player(const string name = "", const int health = 0, const int experience = 0):name{name}, health{health}, experience{experience}{
        // cout<<"\tConstructor with default parameters"<<endl;
        count ++;
    }
    /*Copy construcotot*/
    Player(const Player &source):Player{source.name, source.health, source.experience}{ /*Using delegationg constructor*/
        cout<<"\tCopy construcor"<<endl;
    }
    ~Player(){
        count--;
        // cout<<"\t\t\tDestructor called"<<endl;
    }
    static size_t objectCounter();
};
/*Static members are relationship with class name not object*/
size_t Player ::count {0};
size_t Player ::objectCounter(){
    return count;
}

void displayActivePlayers(void){
    /*Static members are relationship with class name not object*/
   cout<<"Active player: "<<Player ::objectCounter()<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    displayActivePlayers(); /*0*/
    Player hero{"Hero"};
    displayActivePlayers(); /*1*/
    {
        /*Local block*/
        Player yousuf{"Yousuf"};
        displayActivePlayers(); /*2*/
    }
    displayActivePlayers();/*1, 1 decreased couase of destructor called*/

    Player *enemy = new Player{"Enemy", 100, 100};
    displayActivePlayers();
    delete enemy;
    displayActivePlayers();
    return 0;
}
