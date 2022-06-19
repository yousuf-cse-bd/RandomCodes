/****
 * Compare the Triplets
 * @Author: MuhammadYousufAli
 * @Since: 17th February 2021
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int alice[3];
    int bob[3];
    int i;
    short int a = 0, b = 0;

    for(i = 0; i<3; i++)
    {
        cin>>alice[i];
    }

    for(i = 0; i<3; i++)
    {
        cin>>bob[i];
    }
    for(i = 0; i<3; i++)
    {
        if(alice[i]>bob[i])
        {
            a ++;
        }
        if(alice[i]<bob[i])
        {
            b++;
        }
    }

    cout<<a<<" "<<b<<endl;
    return 0;
}
