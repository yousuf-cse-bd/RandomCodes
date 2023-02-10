/**
 * @file SetterAndgetterMethods.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculation of volume of cylinder with class-object concept and stand alone function
 * @version 0.1
 * @date 2023-02-10
 * @since FriDay: 10:53 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

const double pi {3.14159265359};
class Cylinder{
    /*Member Variables*/
private:
    double baseRadius {1.0};
    double height {1.0};

    /*Member Methods*/
public:
    Cylinder () = default;
    Cylinder(const Cylinder &source):baseRadius{source.baseRadius}, height{source.height}{
        cout<<"Copy constructor invoked"<<endl;
    }
    constexpr void setBaseRadius(const double &baseRadius){
        this->baseRadius = baseRadius;
    }

    constexpr void setHeight(const double &height){
        this->height = height;
    }

    constexpr double getBaseRadius(void){
        return baseRadius;
    }
    constexpr double getHeight(void){
        return height;
    }

};

/*A stand alone function*/
const long double volumeCylinder(Cylinder &cyliner){
    const double baseRadius{cyliner.getBaseRadius()};
    const double height {cyliner.getHeight()};

    return (pi * baseRadius * baseRadius * height);   
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Cylinder cylinder;
    cylinder.setBaseRadius(3.0);
    cylinder.setHeight(10.0);

    cout<<"Base Radius: "<<fixed<<cylinder.getBaseRadius()<<endl;
    cout<<"Height: "<<cylinder.getHeight()<<endl;

    cout<<"The volume: "<<setprecision(10)<<volumeCylinder(cylinder)<<" cubic unit."<<endl; /*Copy constructor is not called*/

    // Cylinder ob{cylinder};
    return 0;
}
