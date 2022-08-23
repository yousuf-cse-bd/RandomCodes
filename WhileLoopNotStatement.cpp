/**
 * @file WhileLoopNotStatement.cpp
 * @author your name (you@domain.com)
 * @brief No satetement while loop
 * @version 0.1
 * @date 2022-08-23
 * @since TuesDay; 03:33 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include  <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int x, a, b;
    x = 10, a = 5, b = 15;
    cout<<"--x\t--a\t--b"<<endl;
    printf("--------------------\n");
    while (--a, --b, --x);
    // for(;--x; --a,--b);
    cout<<x<<"\t"<<a<<"\t"<<b<<endl;
    
    // system("dir");
    // system("vol");
    // system("edit");
    return 0;
}
