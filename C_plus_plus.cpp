/****
 * @Author: Muhammad Yousuf Ali
 * @Since: TuesDay; 14 September 2019
 */

#include <iostream>
using namespace std;

class C_plus_plus
{
    public:
    
    ~C_plus_plus()
    {
        cout<<"Destructor"<<endl;
    }
    C_plus_plus() //Firstly Constructor is called by object
    {
        cout<<"Constructor"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    C_plus_plus ob;
    return 0;
}
