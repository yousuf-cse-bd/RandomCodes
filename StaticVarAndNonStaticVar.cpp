/**
 * @file StaticVarAndNonStaticVar.cpp
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

void static_non_static(){
    int nonStaticVar = 0;
    static int staticVar;
    cout<<"Non Static Variable: "<<++nonStaticVar<<endl;
    cout<<"Static Variable: "<<++staticVar<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    static_non_static();
    static_non_static();
    static_non_static();
    return 0;
}
