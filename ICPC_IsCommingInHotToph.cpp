/**
 * @file ICPC_IsCommingInHotToph.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int i, max, position;
    string N;
    cout<<"Enter a large number here: ";
    cin>>N;
    unsigned int size = N.size();
    int A[10] = {0};
    
    for(i = 0; i<size; i++){
        A[N[i] - '0']++;
    }
    max = 0;
    for(i = 0; i<9; i++){
        if(max < A[i]){
            max = A[i];
            position = i;
        }
    }
    cout<<position<<endl;
    
    return 0;
}
