#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int mx;
    cout<<"  mx\t";
    for(mx = 0; mx<=10; mx++)
    {
        cout<<mx<<"\t";
    }
    cout<<endl;
    for(int i = 0; i<95; i++)
    cout<<"-";
    cout<<endl;
    // Logic Codes

    for(mx = 0; mx <= 10; mx++)
    {
        printf("%2d", mx);
        int binom = 1;
        for(int x = 0; x<= mx; x++)
        {
            if(x == 0)
            {
                // cout<<mx<<"||"<<x<<endl;
                printf("%4d", binom);
            }
            else
            {
                binom = binom * (mx - x + 1)/x;
                printf("%4d", binom);
            }
        }
        cout<<endl;
    }

    for(int i = 0; i<95; i++)
    cout<<"-";

    return 0;
}
