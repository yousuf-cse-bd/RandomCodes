/**
 * @file PascalsTrianleConstruction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Construction pascal's triangle using array with pointer notation
 * @version 0.1
 * @date 2022-09-24
 * @since FriDay; 11:24 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const unsigned int N = 6;
    unsigned int pascal[N][N];

    for(register unsigned short int n = 0; n < N; n++){
        for(register unsigned short int leftSpace = 1; leftSpace <= N - n; leftSpace++){
            cout<<" ";
        }
        for(register unsigned short int m = 0; m <= n; m++){
            if(m == 0 || m == n){
                // pascal[n][m] = 1;
                // cout<<pascal[n][m]<<" ";
                *(*(pascal+n)+m) = 1;
                cout<<*(*(pascal+n)+m)<<" ";
            }
            else{
                // pascal[n][m] = pascal[n-1][m-1] + pascal[n-1][m];
                // cout<<pascal[n][m]<<" ";
                *(*(pascal+n)+m) = *(*(pascal+n-1)+m-1) + *(*(pascal+n-1)+m);
                cout<<*(*(pascal+n)+m)<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
