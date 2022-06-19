/****
 * @Author: Muhammad Yousuf Ali
 * @Since: MonDay, 13 July 2020
 * ***Pair with Method**** 
 */

#include <iostream>
#include <utility>
using namespace std;

int main(void)
{
    pair <string,pair<int,char> > person;

    person = make_pair("Yousuf",make_pair(101,'B'));

    cout<<person.first<<"\t"<<person.second.first<<"\t"<<person.second.second<<endl;
    return 0;
}