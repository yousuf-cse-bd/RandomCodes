/**
 * @file TwoDVectorAndForEachLoop.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Accessing two dimensional vector by for-each loop
 * @version 0.1
 * @date 2022-12-01
 * @since ThursDay; 10:57 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <vector<int>> vector2D{
        {1, 2, 3},
        {10, 20, 30, 40},
        {100, 200, 300, 400, 500}
    };

    for(auto vect : vector2D){ /*Outer loop*/
        for(auto value: vect){ /*Inner loop*/
            cout<<value<<" ";
        }
        cout<<endl;
    }
    return 0;
}
