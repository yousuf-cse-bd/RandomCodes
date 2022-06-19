#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

 int parseInts(string str)
{ 
    //complete this function

    
    

}

int main(int argc, char const *argv[])
{
    /* code */

    string str;
    cin>>str;

    vector <int> integers = parseInts(str);

    for(int i = 0; i<integers.size(); i++)
    {
        cout<<integers[i]<<endl;
    }

    return 0;
}
