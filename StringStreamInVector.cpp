#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

//user defined vector
vector <int> parseInts (const string &str)
{
    vector <int> d;
    stringstream ss(str);
    string temp;

    while (ss >> temp)
    {
        stringstream st(temp);
        while (st)
        {
            int i;
            if(st >> i)
            d.push_back(i);
            else
            {
                st.clear();
                st.get();
            }
        }
        
    }

    return d;
    
}


int main(int argc, char const *argv[])
{
    /* code */

    cout<<"Enter Some Intergers:\nType q to Quit:"<<endl;
    string str;
    while (getline(cin, str) && str != "q")
    {
        vector <int> integers = parseInts(str);
        for(auto x : integers) //It is support for-each loop or auto key word
        cout<<x<<"\t";
        if(integers.size())
        cout<<endl;
    }
    
    return 0;
}
