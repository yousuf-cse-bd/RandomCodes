/**
 * @file TestCaseTesting.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Minimal test case tester
 * @version 0.1
 * @date 2022-09-12
 * @since MonDay; 10:15 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    #ifndef TestCaseTesting
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

    int a, b;
    cin>>a>>b;
    cout<<a+b<<endl;

    return 0;
}
