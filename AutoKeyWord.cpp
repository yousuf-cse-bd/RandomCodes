#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string name = "MuhammadYosufALi";
    {
        for(auto x : name){
            cout<<x<<" ";
        }
        if(name.size()){
            cout<<endl;
        }
        
    }
    
    return 0;
}
