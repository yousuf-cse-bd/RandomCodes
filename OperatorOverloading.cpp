/**
 * @file OperatorOverloading.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Operator overloading beautiful example 
 * @version 0.1
 * @date 2022-10-27
 * @since Friday; 12:21 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Car{
private:
    short int frontShit, backShit;
    float speed;
public:
    Car(){
        frontShit = backShit = speed = 0;
    }
    Car(short int frontShit, short int backShit, float speed){
        this->frontShit = frontShit, this->backShit = backShit, this->speed = speed; 
    }
    Car operator +(Car car){
        Car newCar;
        newCar.frontShit = frontShit + car.frontShit;
        newCar.backShit = backShit + car.backShit;
        newCar.speed = speed + car.speed;

        return newCar;
    }
    void showInfo(void){
        cout<<"Front Shit: "<<frontShit<<endl;
        cout<<"Back Shit: "<<backShit<<endl;
        cout<<"Speed: "<<speed<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Car car1, car2, car3;
    car1 = Car(2, 3, float(120));
    car2 = Car(3, 2, float(150));
    car3 = car1 + car2;
    car1.showInfo();
    car2.showInfo();
    car3.showInfo();
    return 0;
}
