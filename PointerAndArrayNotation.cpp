/**
 * @file PointerAndArrayNotation.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pointer offset notation works fast compared array subscript notation
 * @version 0.1
 * @date 2022-12-12
 * @since MonDay; 04:36 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

/*Pointer offset notation works fast compared array subscript notation*/
void showElements(int *scores, const size_t &size){ /*Here, pointer does not suppport*/
    cout<<"Function called"<<endl;
    for(size_t i {0}; i < size; i++){
        cout<<*(scores + i)<<" ";
    } 
    cout<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int scores [] {100, 95, 89, 80, 79, 99, 94};
    const size_t size {sizeof(scores) / sizeof(int)};
    int *scorePointer {scores}; /*No need &, address operator for array*/
    cout<<"Value of scores: "<<scores<<endl;
    cout<<"Value of scorePointer: "<<scorePointer<<endl;

    cout<<"They are same "<<((scores == scorePointer)?"true.":"false.")<<endl;
    cout<<"The elements are using for-each loop from array-variable: ";
    for(auto x: scores){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"Array subscript notation: ";
    for(size_t i{0}; i < size; i++){
        cout<<scores[i]<<" ";
    }
    cout<<endl;
    cout<<"Pointer subscript notation: ";
    for(size_t i{0}; i < size; i++){
        cout<<scorePointer[i]<<" ";
    }
    cout<<endl;
    cout<<"Array offset notation: ";
    for(size_t i {0}; i < size; i++){
        cout<<*(scores + i)<<" ";
    }
    cout<<endl;
    cout<<"Pointer offset notation: ";
    for(size_t i{0}; i < size; i++){
        cout<<*(scorePointer + i)<<" ";
    }
    cout<<endl;
    /*As actual parameter variable and pointer-variable are supported*/
    showElements(scorePointer, size);
    return 0;
}
