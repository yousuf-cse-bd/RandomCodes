/**
 * @file BoolAlphbetic.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Make bool show up as true/false instead of 1/0
 * @version 0.1
 * @date 2023-01-06
 * @since 11:58 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    bool b1 {false};
    bool b2 {true};
    cout<<boolalpha; /*Make bool show up as true/false instead of 1/0*/
    cout<<"B1 = "<<b1<<"\tB2 = "<<b2<<endl;

    cout<<noboolalpha; /*Make bool show up as 1/0 instead of true/false*/
    cout<<"B1 = "<<b1<<"\t\tB2 = "<<b2<<endl;
    return 0;
}
