/**
 * @file GetSmallestValueNaiveApproach.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int getSmallest(int Arr[], int n){
    int smallest = 0;
    for(int i = 1; i<n; i++)
    {
        if(Arr[i] < Arr[smallest]){
            smallest = i;
        }
        
    }
    return smallest;
}
int main(int argc, char const *argv[])
{
    int Arr[] = {0, 5, 20, 12, 20, 10};
    int n = sizeof(Arr) / sizeof(int);
    int smallest = getSmallest(Arr, n);
    cout<<"The Smallest Value: "<<Arr[smallest]<<endl;
    return 0;
}