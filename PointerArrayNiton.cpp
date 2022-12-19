/**
 * @file PointerArrayNiton.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A real pointer-array with for loop
 * @version 0.1
 * @date 2022-12-20
 * @since TuesDay; 01:03 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const int *pointerArray[5] {nullptr};
    constexpr int num1 {10}, num2 {20}, num3 {30}, num4 {40}, num5 {50};
    pointerArray[0] = &num1;
    cout<<"PointerArray[0]: "<<*pointerArray[0]<<endl;

    pointerArray[1] = &num2;
    cout<<"PointerArray[1]: "<<*pointerArray[1]<<endl;

    pointerArray[2] = &num3;
    cout<<"PointerArray[2]: "<<*pointerArray[2]<<endl;

    pointerArray[3] = &num4;
    cout<<"PointerArray[3]: "<<*pointerArray[3]<<endl;
    pointerArray[4] = &num5;
    cout<<"PointerArray[4]: "<<*pointerArray[4]<<endl;
    cout<<"---------------------------------------------"<<endl;
    for(auto i {0}; i < 5; i++){
        cout<<*(*(pointerArray + i))<<" ";
    }
    
    return 0;
}
