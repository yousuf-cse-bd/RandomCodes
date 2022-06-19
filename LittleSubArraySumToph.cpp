#include <iostream>
using namespace std;

// int subArraySum(int Arr[], int N, int A, int B)
// {
//     int sum = 0;
//     for(int i = A; i<=B; i++)
//     {
//         sum += Arr[i];
//     }
//     return sum;
// }

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int N, A, B;
    cin>>N>>A>>B;

    int sum = 0;
    int Arr[N];
    for(int i = 0; i<N;i++)
    {
        cin>>Arr[i];
    }

    for(int i = A; i<=B; i++)
    {
        sum += Arr[i];
    }
    cout<<sum<<endl;
    // cout<<subArraySum(Arr, N, A, B)<<endl;
    return 0;
}
