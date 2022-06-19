#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int value;

    long long int sum = 0;
    vector <int> array;
    for(size_t i = 0; i<5 ;i++)
    {
        cin>>value;

        sum += value;

        array.push_back(value);
    }
    // cout<<sum<<endl;

    sort(array.begin(), array.end());
    // for(auto x: array){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    /*Sum - Array[max],      sum - array[min]*/
    cout<<sum - array[4]<<" "<<sum - array[0]<<endl;

    return 0;
}
