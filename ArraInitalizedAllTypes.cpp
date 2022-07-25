/**
 * @file ArraInitalizedAllTypes.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Array initiaized all kind of figure
 * @version 0.1
 * @date 2022-07-24
 * @since Sunday, 6:11 PM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    /*Easier way*/
    int arr1[10][10] = {0};
    // cout<<arr[5][5]<<endl;

    int arr2[10][10];
    memset(arr2, 0, sizeof arr2);
    // cout<<arr2[5][5]<<endl;
    /*Dynamically memory allocation*/
    int *A1 = (int*) malloc((10*10) * sizeof(A1));
    memset(A1, 0, (10*10) * (sizeof * A1));
    return 0;
}
