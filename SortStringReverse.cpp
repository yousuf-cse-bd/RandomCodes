#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string name = "MuhammadYousufAli";
    reverse(name.begin(), name.end()); //using reverse method

    for(auto x : name)
    cout<<x<<", ";
    if(name.size())
    cout<<endl;

    //Now using sort method
    string singleName = "Yousuf";
    sort(singleName.begin(), singleName.end());
    for(auto x : singleName)
    cout<<x<<" ";
    if(singleName.size())
    cout<<endl;


    return 0;
}
