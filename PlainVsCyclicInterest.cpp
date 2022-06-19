//Plain_Simple_Interest , I = pnr
//Cyclic_Interest, C = p{(1+r)^n - 1}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    long long i,c, p,n;

    float r;
    cout<<"Enter P,N,R:\n";
    cin>>p>>n>>r;

    r = r/100;
    i = p*n*r;

    cout<<"Simple Plain Interest: "<<i<<endl;

    c = p*(pow(1+r, n) -1);
    cout<<"\nCyclic Interest: "<<c<<endl;

    cout<<"Difference Them: "<<c - i<<endl;

    for(int i = 1; i<=100; i++)
    {
        int a = pow(i, 2);
        cout<<i<<" x "<<i<<" = "<<a<<endl;
    }

    return 0;
}