/**
 * @file FairDistributionToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int childrenX, chocolatesY;

    cin>>childrenX>>chocolatesY;

    for(unsigned int extraChocolates = 1; true; extraChocolates++)
    {
        if((chocolatesY + extraChocolates) % childrenX == 0)
        {
            cout<<extraChocolates<<endl;
            break;
        } 
    }

    return 0;
}
