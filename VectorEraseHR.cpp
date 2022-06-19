#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    vector <int> V;
    int n, item;
    
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>item;
        V.push_back(item);
    }
    

    int eraser, eraserNext;
    cin>>eraser;
    
    V.erase(V.begin()+ eraser - 1);
   
    cin>>eraser>>eraserNext;
    V.erase(V.begin()+ eraser -1, V.begin() + eraserNext -1);

    cout<<V.size()<<endl;
    for(auto x : V)
    cout<<x<<" ";
    if(V.size())
    cout<<endl;


    return 0;
}
