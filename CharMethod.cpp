/****
 * @Author: Muhammad Yousuf Ali
 * @Since: 01 -08 - 2019
 */

#include <iostream>
using namespace std;

char showChar(char * a)
{
    *a = 'A';
    return *a;
}

int main(int argc, char const *argv[])
{
    char a = 'a';
    cout<<"Input Small: "<<a<<endl;
    cout<<"Outpu Capital: "<<showChar(&a)<<endl;    

    return 0;
}

