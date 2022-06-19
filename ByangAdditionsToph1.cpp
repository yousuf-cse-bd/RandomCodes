#include <iostream>
#include <climits>
using namespace std;

// void checkCarry(int c)
// {
//     if(c >= 10)
//     {
//         cout<<"Yes"<<endl;
//     }
//     else
//     {
//         cout<<"No"<<endl;
//     }
// }

int main(int argc, char const *argv[])
{
    /* code */
    int a, b;
    cin>>a>>b;
    bool carry = false;
    
    string A = to_string(a);
    string B = to_string(b);

    for(int i = A.length() - 1 || B.length() - 1; i>=0; i--)
    {
        int c = (A[i] - 48) + (B[i] - 48);
        if(c > 9)
        {
            // cout<<"C = "<<c<<endl;
            carry = true;
            break;
        }
    }

    if(carry == true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
   

    // char ch = '1';
    // printf("%d\n", ch - 48);
    return 0;
}






