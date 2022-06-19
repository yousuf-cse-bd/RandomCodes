#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {11, 21, 31, 44, 52};
    void *ptr = A;
    for(int i = 0; i<5; i++)
    {
        cout<<*(int*)ptr + i<<" ";
    }

    cout<<"\n\n";
    for(int x : A)
    {
        cout<<++*(int*)ptr-1<<" ";
    }
    return 0;
}
