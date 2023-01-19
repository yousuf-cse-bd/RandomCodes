/**
 * @file NewFailOccures.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Heap memory part is limited so handle it (if new is fail)
 * @version 0.1
 * @date 2023-01-19
 * @since ThursDay; 11:28 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <limits>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Exception mechanism*/
    constexpr size_t COUNT {numeric_limits<int>::max()};
    try{
        for(size_t i {0}; i < COUNT; i++){
            int *data1 {new int [COUNT]};
        }
    }catch(bad_alloc &ex){ /*Here bad_alloc is exception name*/
        cerr<<"Something wen wrong: "<<ex.what()<<endl;
    }
    printf("Program end well %c\n", 3);

    /*Nothrow mechanism*/
    int *data2 {nullptr};
    for(size_t i {0}; i < 100; i++){
        data2 = new (nothrow) int [COUNT];
        if(data2 != nullptr){
            cout<<"Allocating done."<<endl;
            delete [] data2;
        }
        else{
            cout<<"Allocating faild"<<endl;
        }
    }
    printf("Program end well %c\n", 3);

    return 0;
}
