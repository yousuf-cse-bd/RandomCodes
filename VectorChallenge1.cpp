/**
 * @file VectorChallenge1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple vector challenge but new learn push_back() function
 * @version 0.1
 * @date 2022-11-27
 * @since SunDay; 06:50 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Declared two vectors*/
    vector <int> vector1, vector2;

    vector1.push_back(10), vector1.push_back(20);
    cout<<"\tFirst vector, vector1"<<endl;
    cout<<"First element: "<<vector1.at(0)<<" Second element: "<<vector1.at(1)<<endl;
    cout<<"Size of vector1: "<<vector1.size()<<endl;

    vector2.push_back(100), vector2.push_back(200);
    cout<<"\tSecond vector, vector2"<<endl;
    cout<<"Frist element: "<<vector2.at(0)<<" Second element: "<<vector2.at(0)<<endl;
    cout<<"Size of vector2: "<<vector2.size()<<endl;
    
    vector <vector <int>> vector2D; /* Here 2D vector*/
    vector2D.push_back(vector1); /*Whole vector pushed by push_back() method*/
    vector2D.push_back(vector2);

    for(unsigned short int i = 0; i < vector1.size(); i++){
        for(unsigned short int j = 0; j < vector2.size(); j++){
            cout<<vector2D.at(i).at(j)<<" ";  
        }
        cout<<endl;
    }

    vector1.at(0) = 1000; /*Update first index of vector1 by 1000*/
    for(unsigned short int i = 0; i < vector1.size(); i++){
        for(unsigned short int j = 0; j < vector2.size(); j++){
            cout<<vector2D.at(i).at(j)<<" ";  /*No affect for changed the vector1*/
        }
        cout<<endl;
    }
    cout<<"\nDisplay all elements of vector1: ";
    for(int x : vector1){
        cout<<x<<" ";
    }
    cout<<endl;

   
    return 0;
}
