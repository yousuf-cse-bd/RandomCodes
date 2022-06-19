#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    // cout<<sizeof(long double)<<endl;
    int i;
    for(i = 0; i<20; i++)
    {
        switch (i)
        {
        case 0:
            i += 5;
            // cout<<"Case 0"<<": "<<i<<endl;
            // break;
        case 1:
            i += 2;
            // cout<<"Case 1"<<": "<<i<<endl;
            // break;
        case 5:
            i += 5;
          
            // cout<<"Case 5"<<": "<<i<<endl;
            // break;
        default:
        // cout<<"pre : "<<i<<endl;
            i += 4;
            // cout<<"Defult : "<<i<<endl;
            break;
        }
    }

    cout<<i<<endl;
    return 0;
}
