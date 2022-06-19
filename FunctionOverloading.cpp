#include <iostream>
using namespace std;

void functionOverloading(int n1,int n2)
{
    cout<<"Sum: "<<n1 + n2<<endl;
    
}
void functionOverloading(int n1,int n2,int n3)
{
    cout<<"Sum: "<<n1 + n2 + n3<<endl;
}

int main()
{
    functionOverloading(1,2);
    functionOverloading(1,2,3);

    return 0;
}