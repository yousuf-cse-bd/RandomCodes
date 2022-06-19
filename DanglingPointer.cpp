#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int *ptr = (int*)malloc(sizeof(int));
    // int a = 560;
    // ptr = &a;

    for(int i = 0; i<5; i++)
    {
        scanf("%d", ptr + i);
        cout<<"Entered: "<< *ptr + i<<"\n";
    }

    free(ptr);
    return 0;
}
