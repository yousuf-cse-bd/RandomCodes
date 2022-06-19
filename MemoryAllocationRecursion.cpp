#include <iostream>
using namespace std;

int display(int n)
{
    if(n == 0)
    return 0;
    else
    {
        cout<<n<<" ";
        return display(n-1);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<"N = "<<display(4)<<endl;
    return 0;
}
