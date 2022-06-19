/****
 * @Author: Muhammad Yousuf Ali
 * @Since: MonDay, 13 July 2020
 * ***Vector Basic:2**** 
 * Actual Rules for Vector: Memory REDUCES
 */

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector <int> v;
    vector <int> :: iterator  i;
    vector <int> :: reverse_iterator ri;

    // v.assign(5,100); ///5 Times 100 in Number Assign
    for(int i = 1 ;i<=10;i++)
    {
        v.push_back(i);
    }
    i = v.begin();
    cout<<*i<<endl;
    // v.erase(i+3);
    v.insert(i+3,300);
    cout<<"\nNormal Iterator: ";
    for(i = v.begin(); i!=v.end();i++)
    {
        cout<<*i<<"\t";
    }

    cout<<"\nReverse Iterator: ";
    ri = v.rbegin();
    while (ri!=v.rend())
    {
        cout<<*ri<<"\t";
        ri++;
    }

    cout<<endl;
    

    return 0;
}