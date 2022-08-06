/**
 * @file Ludu.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Let's fun
 * @version 0.1
 * @date 2022-08-06
 * @since Saturday, 11:09 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    srand(time(NULL));
    int x = rand() % 6;
    x++;
    cout<<"Your result: "<<x<<endl;
    return 0;
}
