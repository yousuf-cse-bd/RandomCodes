/****
 * @Author: Muhammad Yousuf Ali
 * @Since: MonDay, 13 July 2020
 * ***Vector Basic:1**** 
 */

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector <int> v;
    for(int i = 1;i<=10;i++)
    {
        // v[i-1] = i;
        v.push_back(i);
    }

    //Deleted last element
    //  v.pop_back();
    for(int i = 0;i!=v.size();i++)
    {
        cout<<v[i]<<"\t";
    }

    cout<<"\nVector Max Size: "<<v.max_size()<<endl;
    cout<<"Vector Capacity: "<<v.capacity()<<endl;
    // v.clear();
    cout<<"Vector Data: "<<v.data()<<endl;
    cout<<"Vector Is Empty: "<<v.empty()<<endl;
    
    return 0;
}