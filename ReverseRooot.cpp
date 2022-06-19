/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Monday, 29 July 2019
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    double a;
    int i;
    vector<double> V;

    while (scanf("%lf", &a)!=EOF)
    {
        V.push_back(a);
    }
    
    for(i = V.size()-1;i>=0;i--)
    {
        printf("%0.4lf\n",(double)sqrt(V[i]));
    }

    return 0;
}
