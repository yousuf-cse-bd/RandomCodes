/**
 * @file DynamicElementsVector.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The vector data-structure is better than array data-structure static or dynamic
 * @version 0.1
 * @date 2022-12-24
 * @since SaturDay; 11:27 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    size_t size {10};
    vector <int> vectorList {};
    srand(time(nullptr));
    cout<<"The elements are1: ";
    for(size_t i {0}; i<size; i++){ /*Regular for loop*/
        vectorList.push_back(rand() % size);
        cout<<vectorList.at(i)<<" ";
    }
    cout<<"\nThe elements are2: ";
    for(auto x: vectorList){ /*Range based for loop or forEachLoop*/
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
