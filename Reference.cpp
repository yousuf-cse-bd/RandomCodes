/**
 * @file Reference.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Reference typed variable and knowing best practice used reference into ranged based loop
 * @version 0.1
 * @date 2022-12-16
 * @since FriDay; 10:07 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int num {100};
    int &ref{num};
    cout<<"Num: "<<num<<endl; /*100*/
    cout<<"Ref: "<<ref<<endl; /*100*/ 
    cout<<"------------------------------------------"<<endl;
    num = 200;
    cout<<"Num: "<<num<<endl; /*200*/
    cout<<"Ref: "<<ref<<endl; /*200*/ 
    cout<<"------------------------------------------"<<endl;
    ref = 300;
    cout<<"Num: "<<num<<endl; /*300*/
    cout<<"Ref: "<<ref<<endl; /*300*/ 
    cout<<"=========================================="<<endl;

    /*Reference using range based for loop*/
    vector <string> stooges {"Larry", "Moe", "Curly"};
    for(auto name: stooges){
        name = "Funny"; /*name is a COPY of the each vector element*/
    }

    for(auto name: stooges){
        cout<<name<<" "; /*No change*/
    }
    cout<<endl;
    cout<<"------------------------------------------"<<endl;
    for(auto &name: stooges){
        name = "Funny"; /*name is a reference to each vector element*/
    }
    for(const auto &name: stooges){
        cout<<name<<" "; /*Now the vector elements have changed*/
    }
    return 0;
}
