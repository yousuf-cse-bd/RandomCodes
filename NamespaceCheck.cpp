#include <iostream>
using namespace std;

class ns1
{
    public:
    int value()
    {
       return 5; 
    }
};

class ns2
{
    public:
    const double x = 100;
    double value()
    {
        return 2*x;
    }
};

 int main()
 {
    // cout<<ns1::value()<<endl;

    // Access value function within ns2 
    // cout << ns2::value() << '\n';  
  
    // Access variable x directly 
    // cout << ns2::x << '\n';   
    return 0;
}