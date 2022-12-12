/**
 * @file PointerArithmetic.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Some pointers arithmetic operations
 * @version 0.1
 * @date 2022-12-13
 * @since MonDay; 12:48 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const char *name {"YOUSUF"}; /*Read only variable*/
    while(*name != '\0'){ /*Index wised traversing*/
        cout<<*(name++)<<" ";
        // ++name;
        // name++;
    }
    cout<<endl;
    int scores [] {100, 95, 89, -1};
    int *scorePointer {scores};
    while(*scorePointer != -1){
        cout<<*(scorePointer++)<<" ";
        // scorePointer++;
        // ++scorePointer;
    }
    return 0;
}
