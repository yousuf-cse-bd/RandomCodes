/**
 * @file MasterCourseInheritancePvt1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Private data accessed from base class and operator overloading example
 * @version 0.1
 * @date 2023-02-12
 * @since SunDay; 04:43
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Persion{
    /*Member variables*/
private:
    string firstName {"Mysterious"};
    string lastName {"Person"};

    /*Member methods*/
public:
    Persion() = default;
    ~Persion() = default;
    string getFirstName(void)const{ /*Test return this pointer*/
        return firstName;
    }
    string getLastName(void)const{
        return lastName;
    }
};

class Player : public Persion{
    /*Member variables*/
private:
    string gameName {"none"};

    /*Member methods*/
public:
    Player () = default;
    Player(const string_view &gameName):gameName{gameName}{}
    ~Player () = default;

    /*Operator overloading: (extraction <<) operator*/
    friend ostream &operator <<(ostream &output, const Player &player){
        output <<"Player: [ Game Name: "<<player.gameName<<" First Name: "<<player.getFirstName()
        <<" Last Name: "<<player.getLastName()<<" ]";
        return output;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Player player1 {"FootBall"};
    cout<<"Player1 = "<<player1<<endl;

    cout<<"------------------------------------------"<<endl;
    Player *ptrPlayer1 = new Player{"Cricket"};
    if(ptrPlayer1 != nullptr){
        cout<<"Ptr-Player1 = "<<*ptrPlayer1<<endl;
    }
    else{
        cerr<<"Memory alloction not succed..!"<<endl;
    }
    delete ptrPlayer1;
    ptrPlayer1 = nullptr;
    return 0;
}
