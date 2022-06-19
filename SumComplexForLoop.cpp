#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    for(int i = 1, sum = 0; i<=10; i++)
    {
        sum += i;
        cout<<sum<<" ";
    }
    int sum = 0;
    int i = 1;
    while(i != 11) // untill condition true
    {
        sum += i;
        // cout<<i<<" ";
        i++;
    }
    // cout<<i<<endl;

    cout<<"\nSum = "<<sum<<endl;
    

    return 0;
}
