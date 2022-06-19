/**
 * @file SignChar.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    for(int i = -128; i<=255-1; i++){
        printf("%d == %c\n",i ,i);
    }
    return 0;
}
