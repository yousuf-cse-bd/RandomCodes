/**
 * @file RunningAverageToph.cpp
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
    int n;
    cin>>n;

    /* code */
    int A[n];
    double avg = 0;
    unsigned int divisor = 1;
    for(unsigned int i = 0; i<n;i++)
    {
        cin>>A[i];
    }
    for(unsigned int i = 0; i<n; i++)
    {
        avg += A[i];
        cout<<avg/divisor++<<endl;
    }
    
    return 0;
}
