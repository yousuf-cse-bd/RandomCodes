/**
 * @file TwoDimensionalVector.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief User input in two dimensional vector using single vector
 * @version 0.1
 * @date 2023-02-27
 * @since MonDay; 05:40 PM
 * @copyright Copyright (c) 2023
 * @institute Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#pragma pack(1)
using namespace std;

int main(int argc, const char *const argv[]){
    vector <vector<int>> twoDimensional{};
    
    int element{};
    int rows{3};
    int columns{3};
    vector <int> temp{};
    for(int i {0}; i < rows; i++){
        
        for(int j {0}; j <columns; j++){
            cout<<"Enter element here: ";
            cin>>element;
            temp.push_back(element);
        }
        twoDimensional.push_back(temp);
        temp.clear();
    }
    cout<<"*****Elment are in two dimensional*****"<<endl;
    for(const auto &x: twoDimensional){
        for(const auto &y: x){
            cout<<y<<"\t";
        }
        cout<<endl;
    }
    cout<<"Happy Ending..."<<endl;
    return 0;
}