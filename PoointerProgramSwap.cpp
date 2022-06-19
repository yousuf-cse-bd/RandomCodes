#include <iostream>
using namespace std;

// void fun(int arr[])
// {
//     cout<<"Size of Array: "<<sizeof(arr)<<endl;
// }

int main(int argc, char const *argv[])
{
    /* code */

    int a = 20, b = 30, *p1 = &a, *p2 = &b;

    cout<<"Befor Swaping Operation:"<<endl;
    cout<<"*P1 = "<<*p1 <<"\t\t*P2 = "<<*p2<<endl;

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    cout<<"After Swaping Operation"<<endl;
    cout<<"*P1 = "<<*p1 <<"\t\t*P2 = "<<*p2<<endl;


    int arr[] = {10, 20, 30, 40, 50};

    // fun(arr);

    return 0;
}
