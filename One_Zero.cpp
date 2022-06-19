#include <iostream>
using namespace std;

int main()
{
    int n;
    while(true) ///true = 1 and false = 0;
    {
        cout<<"Enter a number : ";
        cin>>n;
        if(n == 0)
        {
            return 0;
        }
        cout<<"\nEntered the number : "<<n<<endl;

    }


    return 0;
}
