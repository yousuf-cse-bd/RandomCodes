/**
 * @file RemainderModulusOperator.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int m;
   for(int i = -10; i<=10; i++){
        m = i % 10;
        cout<<i<<" % 10 = "<<m<<endl;
   }
    return 0;
}
