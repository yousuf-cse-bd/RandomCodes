#include <iostream>
using namespace std;

// int myMethod()
// {
//     int x = 10;
//     if(x == 10)
//     {
//         cout<<"Before Return..."<<endl;
//         return 1;
//         cout<<"After Return..."<<endl;
//     }else{
//         cout<<"Else condition"<<endl;
//     }
// }

int main(int argc, char const *argv[])
{
    int *ptr1 = new int(10);
    cout<<"For Int:\n";
    cout<<"Size of ptr1 = "<<sizeof(ptr1)<<endl;
    cout<<"Size of *ptr1 = "<<sizeof(*ptr1)<<endl;
    cout<<"Size of &ptr1 = "<<sizeof(&ptr1)<<endl;

    cout<<"\nFor Char:\n";
    char *ptr2 = new char('A');
    cout<<"Size of ptr2 = "<<sizeof(ptr2)<<endl;
    cout<<"Size of *ptr2 = "<<sizeof(*ptr2)<<endl;
    cout<<"Size of &ptr2 = "<<sizeof(&ptr2)<<endl;

    double *ptr3 = new double(3.1415);
    cout<<"\nFor Double:\n";
    cout<<"Size of ptr3 = "<<sizeof(ptr3)<<endl;
    cout<<"Size of *ptr3 = "<<sizeof(*ptr3)<<endl;
    cout<<"Size of &ptr3 = "<<sizeof(&ptr3)<<endl;


    return 0;
}
