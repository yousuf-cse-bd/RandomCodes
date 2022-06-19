#include <iostream>
using namespace std;

int main(void)
{

        int n;
        int top, value;
        cout<<"Enter Stack Size Here: ";
        cin>>n;

        int A[n];
        cout<<"Stack Load: ";
        cin>>value;
        top = -1;
        top++;
        A[top] = value;

    return 0;
}
