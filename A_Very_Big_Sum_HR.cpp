/****
 * A very big summ
 * @Author: MuhammadYousufAli
 * @Since: 17th February 2021
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    long long int sum = 0,num;
    int n,i;
    cin>>n;
    for(i = 0; i<n; i++)
    {
        cin>>num;
        sum += num;
    }

    cout<<sum<<endl;

    return 0;
}
