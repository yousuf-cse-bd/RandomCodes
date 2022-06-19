/****
 * @Author: Muhammad Yousuf Ali
 * @Since: MonDay, 13 July 2020
 * ***Pair with Constructor**** 
 */

#include <iostream>
#include <utility>
using namespace std;

int main(void)
{
    pair <int, int> p1(10,20);
    pair <int, int> p2;
    p2.first = p1.first;
    p2.second = p1.second;

    cout<<"First Pair: "<<p1.first<<"\t"<<"Second Pair: "<<p1.second<<endl;
    cout<<"Add Pair Them: "<<p1.first + p1.second<<endl;
    swap(p1.first,p1.second);
    cout<<"First Pair: "<<p1.first<<"\t"<<"Second Pair: "<<p1.second<<endl;

    cout<<"\nNext Pair First :"<<p2.first<<"\tNext Pair Second: "<<p2.second<<endl;

    return 0;
}