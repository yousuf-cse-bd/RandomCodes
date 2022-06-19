//Timus 1001 Reverse Root

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    vector <long long> V;
    long long a;

    while(scanf("%lld", &a) !=EOF)
    {
        V.push_back(a);
    }

    for(int i = V.size() - 1; i>=0; i--)
    {
        printf("%.4llf\n", sqrt(V[i]));
    }

    return 0;
}
