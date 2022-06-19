/**
 * @file StringArray.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-10
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
    cout<<"Enter Nth value here?: ";
    cin>>n;

    string counryNames[n];
    for(int i = 0; i<n; i++)
    {
        cout<<"Index: "<<i<<"\tName: ";
        cin>>counryNames[i];
    }
    cout<<"Country Names:"<<endl;
    for(auto name : counryNames)
    {
        cout<<name<<" ";
    }
    return 0;
}
