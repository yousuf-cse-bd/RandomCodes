#include <iostream>
using namespace std;

void print(void* ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout<<(*(int*)ptr)<<endl;
        break;
    case 'c':
        cout<<(*(char*)ptr)<<endl;
    default:
    cout<<"Not valid type!"<<endl;
        break;

    }
}
int main(int argc, char const *argv[])
{
    /* code */

    int number = 10;
    char letter = 'a';

    print(&number, 'i');
    print(&letter, 'c');
    // double d =3.14159;
    // print(&d, 'd');

    return 0;
}
