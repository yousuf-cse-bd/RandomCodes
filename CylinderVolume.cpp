/**
 * @file CylinderVolume.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculation of volume of cylinder with class-object concept
 * @version 0.1
 * @date 2023-02-10
 * @since FriDay; 08:51 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Cylinder{
    /*Member variables*/
private:
    const double pi {3.14159265359};
    double radius {1.0};
    double height {1.0};

    /*Member funtions*/
public: /*Consturctor paramiter support const reference*/
    Cylinder(const double &radius, const double &height):radius{radius}, height{height}{ /*Best initialzed*/
        /*Cylinder volume, V = pi*r^2*h */
    }

    long double volume(void){
        return (pi * radius * radius * height);
    }
};

/*Cylinder volume, V = pi*r^2*h */
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Cylinder cylinder1{3, 10};
    cout<<"The volume1: "<<fixed<<cylinder1.volume()<<endl;

    Cylinder cylinder2 {10, 3};
    cout<<"The volume2: "<<fixed<<cylinder2.volume()<<endl;
    return 0;
}
