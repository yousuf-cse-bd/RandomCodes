/**
 * @file WarningReturn.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief If "else" statement not complete, then compiler will throwed warning
 * @version 0.1
 * @date 2022-10-04
 * @since TuesDay; 03:06 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*If "else" statement not complete, then compiler will throwed warning*/
int myFunction1(int n){
    if(n == 2){
        return 0;
    }else{
        return 0;
    }
}
/*There is no warning*/
void myFunction2(int n){
    if(n == 2){
        return;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    // cout<<myFunction2(2)<<endl;
    myFunction2(2);
    return 0;
}
