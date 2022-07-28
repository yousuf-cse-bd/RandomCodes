/**
 * @file PascalsTriangleUsingArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Print pasclas tringle using array
 * @version 0.1
 * @date 2022-06-29
 * @since Wedensday; 7.41 PM
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    long long int pascal[51][51];
    int i, j;
    pascal[1][0] = 1;
    pascal[2][0] = 1;
    pascal[2][1] = 1;
    int N;
    cout<<"Enter Nth value here: ";
    cin>>N;
    for(i = 3; i <= N+1; i++){
        pascal[i][0] = 1;
        for(j = 1; j<i - 1; j++){
            pascal[i][j] = pascal[i - 1][j-1] + pascal[i - 1][j];
        }
        pascal[i][j] = 1;
    }

    
    for(i = 0; i<N+2; i++){
        for(j = 0; j<i; j++){
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
