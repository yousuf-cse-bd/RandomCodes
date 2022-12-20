/**
 * @file DelegatingConstructorConsts.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Delegating constructor: Max arguments contain constructor is needed parameter initialization
 * @version 0.1
 * @date 2022-12-20
 * @since TuesDay; 02:09 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Player{
private:
    /*Class Attributes or Member Variables*/
    const string name{};
    const int health{};
    const int xp{};
public:
    /*Class Methods or Member Functions*/
    Player():Player{"NoName", 0, 0}{ /*Delegating constructor*/
        cout<<"\tDefault constructor"<<endl;
    }
    Player(const string name): Player {name, 0, 0}{ /*Delegating constructor*/
        cout<<"\tSingle argument constructor"<<endl;
    }
    Player(const string name, const int health): Player {name, health, 0}{ /*Delegating constructor*/
        cout<<"\tTwo arguments constructor"<<endl;
    }
    /*Max arguments contain constructor is needed parameter initialization*/
    Player(const string name, const int health, const int xp): name{name}, health{health}, xp{xp}{ /*No need this pointer*/
        cout<<"\tThree arguments constructor"<<endl;
    }
    void showDatas(void); /*Function proto type*/
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
    Player all {"All", 100, 33}; 
    all.showDatas();

    return 0;
}
/*Class member function definition*/
void Player ::showDatas(void){
    cout<<"Name: "<<name<<endl;
    cout<<"Health: "<<health<<" %"<<endl;
    cout<<"Xp: "<<xp<<" Times"<<endl;
}
