/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Monday, 29 July 2019
 */

#include <iostream>
using namespace std;

class LinearSearch
{
    int size;
    bool b = false;
    public:
    LinearSearch(int n) //Constructor
    {
        size = n;
        cout<<"Size = "<<sizeof(b)<<endl;
    }
    void myMethod(int A[])
    {
        int x,i, index;
        cout<<"Enter a New Value Here: ";
        cin>>x;
        ///Logic Implentation
        i = 0;
        while (i<size)
        {
           if(A[i]==x)
           {
               b = true;
               index = i;
           }
           i++;
        }
        if(b == true)
        {
            cout<<x<<" is Found & Index: "<<index<<endl;
        }
        else
        {
            cout<<"Not Found!"<<endl;
        }
        
    }
    //Destruector
    ~LinearSearch()
    {
        cout<<"Thanks..."<<endl;
    }
};

int main(int argc, char const *argv[])
{
    cout<<"Enter N = ";
    int n,i;
    cin>>n;

    int A[n];
    i = 0;
    while (i<n)
    {
        cout<<"["<<i<<"]\tItem = ";
        cin>>A[i];
        i++;
    }
    LinearSearch  linearSearch(n);
    linearSearch.myMethod(A);

    return 0;
}
