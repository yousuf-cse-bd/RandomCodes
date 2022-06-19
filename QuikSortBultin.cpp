/**
 * @file QuikSortBultin.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int Ar[] = {5, 1, 4, -5, 7, 0, 55};
    int size = sizeof(Ar) / sizeof(int);

    sort(Ar, Ar + size);
    for(int i = 0; i<size; i++)
    {
        cout<<i<<"\t = "<<Ar[i]<<endl;
    }
    return 0;
}
