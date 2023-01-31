/**
 * @file PubulicExamLoopSyntax.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Banglasdesh public exam fact for (for-loop syntax)
 * @version 0.1
 * @date 2023-01-31
 * @since TuesDay; 11:55 AM
 * @copyright Copyright (c) 2023
 * @institute Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"Incrementing: ";
    for(int i {0}; 10 > i; i++){ /*MyStyle: i < 10*/
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Decrementing: ";
    for(int i {9}; 0 <= i; i--){ /*MyStyle: i > 10*/
        cout<<i<<" ";
    }
    return 0;
}
