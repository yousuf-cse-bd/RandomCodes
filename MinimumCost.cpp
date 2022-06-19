#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    float p, cost, cost1, p1;
    for(p = 0; p<=10; p = p + 0.1)
    {
        cost = 40 - 8 * p + p*p;
        cout<<"Const = "<<cost<<"\tAnd p = "<<p<<endl;
        if(p == 0)
        {
            cost1 = cost;
            // cout<<cost1<<"\t"<<cost<<endl;
            continue;
        }
        if(cost >= cost1)
        {
            // cout<<cost<<"\t"<<cost1<<endl;
            break;
        }
        // All time update cost value
        // cost to cost1
        cost1 = cost; 
        p1 = p;
    }

    p = (p + p1) * 0.5;
    cost = 40 - 8*p + p*p;
    cout<<"Minimum Cost = "<<cost<<"\tP = "<<p<<endl;
    return 0;
}
