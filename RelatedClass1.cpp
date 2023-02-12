/**
 * @file RelatedClass1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Just finding related class
 * @version 0.1
 * @date 2023-02-12
 * @since SunDay; 11:02 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Player{
public:
    Player() = default;
    ~Player() = default;
};

class Enemy : public Player{
public:
    Enemy() = default;
    ~Enemy() = default;
};

class Hero : public Player{
public:
    Hero() = default;
    ~Hero() = default;
};

class SuperPlayer : public Hero{
public:
    SuperPlayer() = default;
    ~SuperPlayer() = default;
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    return 0;
}
