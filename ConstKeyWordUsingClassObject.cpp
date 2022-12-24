/**
 * @file ConstKeyWordUsingClassObject.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Const key-word used as object and after function parenthesis
 * @version 0.1
 * @date 2022-12-24
 * @since SaturDay; 12:41 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Player{
    /*Class attributes or member variables*/
    const string name {};
    const int health{}, experience{};
    /*Class methods or member functions*/
public:
    Player(const string name = "", const int health = 0, const int experience = 0): name{name}, health{health}, experience{experience}{
        cout<<"\tDefault parameterized constructor"<<endl;
    }
    /*Copy constructor*/
    Player(const Player &source):name{source.name}, health{source.health}, experience{source.experience}{
        cout<<"\tCopy constructor called"<<endl;
    }
    string getName(void)const{return name;} /*Const mustbe wirte after ()*/
    int getHealth(void) const {return health;}
    int getExperience(void) const {return experience;}

};
/*A regular method*/
void display(const Player &player){ /*There is not call copy constructo.*/
    cout<<"The name: "+player.getName()<<endl;
    cout<<"The health: "<<player.getHealth()<<" %"<<endl;
    cout<<"The experience: "<<player.getExperience()<<" times"<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const Player villain{"Villain", 100, 55};
    display(villain);
    cout<<"------------------------------------------------------------"<<endl;
    Player hero{"Hero", 100, 15};
    display(hero);
    cout<<"------------------------------------------------------------"<<endl;
    const Player supperVillain {villain}; /*Invocked the copy constructor*/
    display(supperVillain);
    cout<<"------------------------------------------------------------"<<endl;
    Player supperHero{hero};
    display(supperHero);
    return 0;
}
