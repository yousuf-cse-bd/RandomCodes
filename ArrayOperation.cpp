/**
 * @file ArrayOperation.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Investigation of Array
 * @version 0.1
 * @date 2022-09-09
 * @since FriDay; 05:50 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <ctime>
using namespace std;

const unsigned short int rows = 100, columns = 100;
void normalArray(void){
    unsigned short int count = 1;
    int Array[rows][columns];
    cout<<"A normal array:"<<endl;
    for(unsigned short int i = 0; i < rows; i++){
        for(unsigned short int j = 0; j < columns; j++){
            Array[i][j] = count++;
            cout<<Array[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void normalArrayButPointerNotation1(){
    unsigned short int count = 1;
    int Array[rows][columns];
    cout<<"Normal Array ButPointer Notation:"<<endl;
    for(unsigned short int i = 0; i < rows; i++){
        for(unsigned short int j = 0; j < columns; j++){
            *(Array[i]+j)= count++;
            cout<<*(Array[i]+j)<<"\t";
        }
        cout<<endl;
    }
}

void normalArrayButPointerNotation2(){
    unsigned short int count = 1;
    int Array[rows][columns];
    cout<<"Normal Array ButPointer Notation:"<<endl;
    for(unsigned short int i = 0; i < rows; i++){
        for(unsigned short int j = 0; j < columns; j++){
            *(*(Array+i)+j)= count++;
            cout<<*(*(Array+i)+j)<<"\t";
        }
        cout<<endl;
    }
}

void dynamicArrayInCPP1(){
    unsigned short int count = 1;
    int **Array;
    Array = new int*[rows];
    for(unsigned int i = 0; i<columns; i++){
        Array[i] = new int[rows];
    }
    cout<<"A dynamic array:"<<endl;
    for(unsigned short int i = 0; i < rows; i++){
        for(unsigned short int j = 0; j < columns; j++){
            Array[i][j] = count++;
            cout<<Array[i][j]<<"\t";
        }
        cout<<endl;
    }
    /*deallocation of memory*/
    for(unsigned int i = 0; i<columns; i++){
        delete [] Array[i];
    }
    delete[] Array;
    
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    time_t startTime, endTime;
    time(&startTime);
    normalArray();
    time(&endTime);
    cout<<"Normal array precessed end: "<<endTime - startTime<<" seconds"<<endl;

    time(&startTime);
    normalArrayButPointerNotation1();
    time(&endTime);
    cout<<"Normal array but pointer notation type 1 precessed end: "<<endTime - startTime<<" seconds"<<endl;

    time(&startTime);
    normalArrayButPointerNotation2();
    time(&endTime);
    cout<<"Normal array but pointer notation type 2 precessed end: "<<endTime - startTime<<" seconds"<<endl;

    time(&startTime);
    dynamicArrayInCPP1();
    time(&endTime);
    cout<<"Dynamic array but pointer notation type 1 precessed end: "<<endTime - startTime<<" seconds"<<endl;
    return 0;
}
