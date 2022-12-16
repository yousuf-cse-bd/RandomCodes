/**
 * @file ReturnPointerDynamically.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Returning a pointer from a function (make-sure don't use local variable)
 * @version 0.1
 * @date 2022-12-16
 * @since FriDay; 04:08 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*Never return local variable or pointer*/
/*Must return static variable, dynamic variable and (static pointer)*/
int *creatArray(const size_t size, const int initializer){
    int *newStorages {nullptr}; /*Best practice*/

    newStorages = new int [size];
    for(size_t i{0}; i < size; i++){
        *(newStorages + i) =  initializer;
    }
    return newStorages; /*Life time until exit program*/
}

void displayElements(const int *const array, const size_t size){
    // *array = 100; /*not valid for const int*/
    cout<<"The elemetns are: ";
    for(size_t i {0}; i < size; i++){
        cout<<*(array + i)<<" ";
    }
    cout<<endl;
    // array = nullptr; /*not valid for *const array*/
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    size_t size{0};
    int initializer{0};
    cout<<"How many integers would you like to allocate?: ";
    cin>>size;
    cout<<"What value would you like them initialized to?: ";
    cin>>initializer;

    int *array {nullptr};
    array = creatArray(size, initializer);

    displayElements(array, size);
    delete [] array;
    return 0;
}
