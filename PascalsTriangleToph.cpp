/**
 * @file Pascal'sTriangleToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n, sum = 0;
    cin>>n;
    sum = pow(2, n - 1);
    cout<<sum<<endl;
    return 0;
}
