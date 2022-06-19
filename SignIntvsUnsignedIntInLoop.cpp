/**
 * @file SignIntvsUnsignedIntInLoop.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    //Don't use unsigned variable when loop run reverse order
    for(unsigned int i = 10; i>=0; i--){
        // Just infinity state
        cout<<i<<" ";
    }

    for(int i = 10; i>=0; i--){
        cout<<i<<" ";
    }
    return 0;
}
