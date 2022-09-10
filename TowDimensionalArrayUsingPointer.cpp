/**
 * @file TowDimensionalArrayUsingPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Tow dimensional array acessing using pointer
 * @version 0.1
 * @date 2022-09-08
 * @since ThursDay; 10:23 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

void accessingArrayUsingPointer(int *intPtr, const unsigned short int rows = 3, const unsigned short int columns = 4 ){
    cout<<"Print using pointer variable in another function:"<<endl;
    for(unsigned short int i = 0; i < rows; i++){
        for(unsigned short int j = 0; j < columns; j++){
            cout<<*(intPtr++)<<" ";
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const unsigned short int rows = 3, columns = 4;
    int x[rows][columns] = {{1,2,3,4},{5,6,7,8},{9,0,1,2}};
    for(unsigned short int i = 0; i<rows; i++){
        for(unsigned short int j = 0; j < columns; j++){
            cout<<x[i][j]<<' ';
        }
        cout<<endl;
    }
    
    int *intPtr;
    intPtr = x[0];
    cout<<&x[0]<<endl;
    cout<<&x[0][0]<<endl;
    cout<<intPtr<<endl;
    cout<<"Print using pointer variable:"<<endl;
    for(unsigned short int i = 0; i < rows; i++){
        for(unsigned short int j = 0; j < columns; j++){
            cout<<*(intPtr++)<<" ";
        }
        cout<<endl;
    }

    accessingArrayUsingPointer(x[0]);

    int singleLineArray[] = {1,2,3,4,5,6,7,8,9,0,1,2};
    int *ptr;
    ptr = singleLineArray;

    unsigned short int size = sizeof(singleLineArray)/sizeof(int);
    for(unsigned short int i = 0; i<size; i++){
        cout<<*(ptr++)<<' ';
    }
    

    return 0;
}