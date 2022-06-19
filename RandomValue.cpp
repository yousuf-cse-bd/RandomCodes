#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    cout<<"First Rand Value = "<<rand()<<endl;
    int rnd = 0;
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        // rnd = rnd + rand();
        cout<<"Rand: "<<rand()<<endl;
    }

    cout<<"Out of Loop: "<<rand()<<endl;
    
    return 0;
}
