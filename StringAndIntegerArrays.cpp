/**
 * @file StringAndIntegerArrays.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n = 5;
    int ID[n];
    string names[5];
    for(int i = 0; i != n; i++){
        cout<<i+1<<" Enter ID: ";
        cin>>ID[i];
        scanf("\n");
        cout<<"Enter Name: ";
        getline(cin, names[i]);
    }

    for(int i = 0; i != n; i++)
    {
        cout<<"ID: "<<ID[i]<<"\tName: "<<names[i]<<endl;
    }
    return 0;
}
