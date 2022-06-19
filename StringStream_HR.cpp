#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector <int> parseInts(const string & str)
{ 
    //complete this function
    vector <int> d; // vector of integers.
    stringstream str_strm(str); // stringstream, nitialise with str
    string temp;
    while(str_strm >> temp) // loop while a string can be extracted from ss
    {
        stringstream st(temp); // another stringstream, contains just one 'word'
        while (st) // loop while status of stringstream is good
        {
            int i;
            if(st >> i) // try to read an integer
            d.push_back(i); // success, store it
            else
            {
                st.clear(); // failed, so reset status flags
                st.get();// read and discard a single char
            }
        }
        
    }

    return d; // return result
    
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
