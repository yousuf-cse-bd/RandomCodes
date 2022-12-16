/**
 * @file StaticPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Returning a static int pointer from a function
 * @version 0.1
 * @date 2022-12-16
 * @since FriDay; 04:58 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

static int *createArray(const size_t size, const int initializer){
    static int *arrayList = new int [size]; 
    for(size_t i {0}; i < size; i++){
        *(arrayList + i) = initializer;
    }
    return arrayList; /*Return an address*/
}
/* const static int *const arrayList not need [STATIC key-word]*/
void displayList(const int *const arrayList, const size_t size){
    cout<<"The listing elements: ";
    for(size_t i {0}; i < size; i++){
        cout<<*(arrayList + i)<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    static int *arrayList {nullptr};
    size_t size;
    int initializer;
    cout<<"How many integers would you like to allocate?: ";
    cin>>size;
    cout<<"What value would you like them initialized to?: ";
    cin>>initializer;

    arrayList = createArray(size, initializer);

    displayList(arrayList, size);


    delete [] arrayList;
    cout<<"\n-----------------------------------------"<<endl;
    static int id {101};
    cout<<"The id: "<<id<<endl;

    const static int *const idPointer {&id};
    cout<<"The id pointer: "<<*idPointer<<endl;
    return 0;
}
