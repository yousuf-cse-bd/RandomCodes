/**
 * @file GetLargestValueNaiveApproach.cpp
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

int getLargest(int Arr[], int n)
{
    int largest = 0;
    for(int i = 1; i<n; i++)
    {
        if(Arr[i] > Arr[largest]) // Given array is greater --> max value retrun
        largest = i;
    }
    return largest;
}
int main(int argc, char const *argv[])
{
    int Arr[] = {0, 5, 20, 12, 20, 10};
    int n = sizeof(Arr) / sizeof(int);
    int largest = getLargest(Arr, n);
    cout<<"The Largest Value: "<<Arr[largest]<<endl;
    return 0;
}
