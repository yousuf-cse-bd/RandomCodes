/**
 * @file Vector2D.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Two Dimentional Vector | C++ Programming Example
 * @version 0.1
 * @date 2023-06-22
 * @since ThursDay; 07:45 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <vector <int>> movieRating {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };
    /*Accessed by array's syntax*/
    for(unsigned short int i = 0; i < movieRating.size(); i++){
        for(unsigned short int j = 0; j < 4; j++){
            cout<<movieRating[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    /*Accessed by function*/
    for(unsigned short int i = 0; i < movieRating.size(); i++){
        for(unsigned short int j = 0; j < 4; j++){
            cout<<movieRating.at(i).at(j)<<" ";
        }
        cout<<endl;
    }
    /*User input elements into 2D vector*/
    // vector <vector <int>> table;
    // for(unsigned short int i = 0; i < 3; i++){
    //     for(unsigned short int j = 0; j < 3; j++){
    //         cin>>table[i][j];
    //         cout<<table.at(i).at(j)<<endl;
    //     }
    // }
    
    return 0;
}
