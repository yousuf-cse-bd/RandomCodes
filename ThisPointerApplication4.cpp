/**
 * @file ThisPointerApplication4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Unary operator overloading must be return this pointer
 * @version 0.1
 * @date 2023-02-19
 * @since SunDay; 10:54 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class ThisPointerApplication{
    /*Operator overloading (<<) using friend key-word and ostrem class*/
    friend ostream &operator<< (ostream &output, const ThisPointerApplication &thisPointerApplication){
        output<<"thisPointerApplication: ["<<thisPointerApplication.x<<"]";
        return output;
    }
private:
    /*Class member variable*/
    int x{};
public:
    /*Class member methods*/
    ThisPointerApplication(){ /*Default constructor*/
        cout<<"Defualt constructor of ThisPointerApplication class."<<endl;
    }
    /*Custome (single paramiterized) constructor*/
    ThisPointerApplication(const int &x):x{x}{ 
        cout<<"Custom constrcutor of ThisPointerApplication class."<<endl;
    }
    /*Copy (Shallow) constrcutor*/
    ThisPointerApplication(const ThisPointerApplication &source):x{source.x}{
        cout<<"Copy constructor of ThisPointerApplication class."<<endl;
    }
    /*Unary operator member function return this-pointer*/
    ThisPointerApplication operator++(){
        ++x;
        return *this;
    }
    /*Setter method*/
    ThisPointerApplication setX(const int &x){
        this->x = x;
        return *this;
    }
    /*Getter method*/
    int getX(void) const {
        return x;
    }
    /*Destructor*/
    ~ThisPointerApplication() = default;
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    ThisPointerApplication thisPointerApplication1{101};
    cout<<"thisPointerApplication1 = "<<thisPointerApplication1<<endl;
    cout<<"================================================================"<<endl;
    cout<<"++thisPointerApplication1 = "<<++thisPointerApplication1<<endl;
    printf("Happy Ending...!%c %c %c\n", 2, 2, 2);
    return 0;
}
