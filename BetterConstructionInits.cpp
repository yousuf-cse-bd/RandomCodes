/**
 * @file BetterConstructionInits.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Constructor overloading and skip this pointer with object argument modernize
 * @version 0.1
 * @date 2022-12-20
 * @since TuesDay; 11:31 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Player{
private:
    /*Class Attributes*/
  string name{};
  int health{};
  int xp{};
public:
    /*Class Methods*/
    Player():name{"none"}, health{0}, xp{0}{
        cout<<"Default constructor"<<endl;
    }
    Player(string name): name{name}, health{0}, xp{0}{ /*No need this pointer*/
        cout<<"Single argument constructor"<<endl;
    }
    Player(string name, int health): name{name}, health{health}, xp{0}{ /*No need this pointer*/
        cout<<"Two arguments constructor"<<endl;
    }
    Player(string name, int health, int xp): name{name}, health{health}, xp{xp}{ /*No need this pointer*/
        cout<<"Three arguments constructor"<<endl;
    }
    void showDatas(void);
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Player empty;
    empty.showDatas();
    Player yousuf {"Yousuf"};
    yousuf.showDatas();
    Player enemy {"Enemy", 100};
    enemy.showDatas();
    Player all {"All", 100, 100}; 
    all.showDatas();

    return 0;
}
void Player ::showDatas(void){
    cout<<"Name: "<<name<<endl;
    cout<<"Health: "<<health<<endl;
    cout<<"Xp: "<<xp<<endl;
}
