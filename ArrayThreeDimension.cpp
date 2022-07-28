/**
 * @file ArrayThreeDimension.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Three Dimensional Array Printing
 * @version 0.1
 * @date 2022-07-28
 * @since ThursDay; 10:13 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    /*Two Matrix 2 rows and 3 cloumns*/
    int A[2][2][3] = { {{1, 2, 3}, {4, 5, 6}},
                        {{7,8,9}, {0,1,2}} };
    for(unsigned int i = 0; i<2; i++){
        for(unsigned int j = 0; j<2; j++){
            for(unsigned int k = 0; k<3; k++){
                cout<<A[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }   
    return 0;
}
