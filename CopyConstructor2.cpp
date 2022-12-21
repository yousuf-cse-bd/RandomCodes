/**
 * @file CopyConstructor2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Copy constructor with delegating constructor and extra a regular function 
 * @version 0.1
 * @date 2022-12-21
 * @since WednesDay; 02:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
/**
 * I think default parameterized constructor is more efficient comparing delegating constructor.
*/
#include <iostream>
#pragma pack(1)
using namespace std;

class Player{
    /*Class attributes or member variables*/
private:
    const string name{};
    const int health {}, experience{};
    /*Class methods or member functions*/
public:
    /*Constructor has default parameters and its better initialization*/
    Player(const string name = "No Name", const int health = 0, const int experience = 0):name{name}, health{health},experience{experience}{
        cout<<"\tThree args accomplished constructor for " + name<<endl; /*Concatenation = literature and variable */
    }
    ~Player(){
        cout<<"\t\tDestructor called for "+name<<endl; /*Destructo are folled LIFO data structure*/
    }
    /*Copy constructor, When copy constructor is not found, It generated itself*/
    Player(const Player &source): Player{source.name, source.health, source.experience}{ /*Using delegating constructor*/
        cout<<"Copy constructor - made copy of: "+source.name<<endl; /*Concatenation = literature and variable */
    }
    string inline getName(void){return name; }
    int inline getHealth(void) {return health;}
    int inline getExperience(void) {return experience;}
    void showDatas(void){
        cout<<"The name: "<<name<<endl;
        cout<<"Health property: "<<health<<" %"<<endl;
        cout<<"Experirnce: "<<experience<<" Times"<<endl;
    }
};
/*A regular function*/
void standAloneFunction(Player player){ /*Don't use const here*/
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Name: "<<player.getName()<<endl;
    cout<<"Health: "<<player.getHealth()<<endl;
    cout<<"Experience: "<<player.getExperience()<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Player empty;
    Player object{empty}; /*This objectect for copy constructor*/
    // empty.showDatas();
    standAloneFunction(empty); /* Here, object == empty*/
    
    Player yousuf {"Yousuf"};
    // yousuf.showDatas();

    Player hero {"Hero", 100};
    // hero.showDatas();

    Player villain {"Villain", 100, 45};
    // villain.showDatas();

    cout<<"\n\t\t***Now call star destructors***"<<endl;
    return 0;
}