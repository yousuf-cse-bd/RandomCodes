/**
 * @file Chapter3_1_RotateThreeNumber.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
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

    int x, y,z;
    x = 10, y = 100, z = 1000;
    cout<<"Before Rotate:"<<endl;
    cout<<"X = "<<x<<"\nY = "<<y<<"\nZ = "<<z<<endl;
    int tmp = x;
    x = y;
    y = z;
    z = tmp;
    cout<<"\nAfter Rotate:"<<endl;
    cout<<"X = "<<x<<"\nY = "<<y<<"\nZ = "<<z<<endl;
    return 0;
}
