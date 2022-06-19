/****
 * @Author: Muhammad Yousuf Ali
 * @Since: MonDay, 13 July 2020
 * ***Pair: STL**** 
 */

#include <iostream>
#include <utility>
using namespace std;

int main(void)
{
    pair<string,int> p1;
    p1.first = "Yousuf";
    p1.second = 101;

    cout<<p1.first<<" "<<p1.second<<endl;

    return 0;
}