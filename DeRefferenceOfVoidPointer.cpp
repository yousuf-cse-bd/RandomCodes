#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    void *ptr;
    int a = 7;
    ptr = &a;
    // cout<<"Address of a: "<<&a<<endl;
    cout<<"Address of a: "<<ptr<<endl;
    // cout<<"Address of a: "<<&a<<endl;
    cout<<"Value of a: "<<*(int*)ptr<<endl;
    return 0;
}
