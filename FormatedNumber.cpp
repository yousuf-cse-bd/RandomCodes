#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//Function to put thousamd
//Separator in the givem integer
string thousandSeparator(int number)
{
    string ans = "";

    //Convert the given integer
    //to equivalent string
    string num = to_string(number);
    //Initialise count

    short count = 0;

    //Traverse the string in reverse order
    for(int i = num.size() - 1; i>=0 ; i--)
    {
        count ++;
        ans.push_back(num.at(i));

        //If there characters
        //are traversed

        if(count == 3)
        {
            ans.push_back(',');
            count = 0;
        }
    }
    //Reverse the string to get
    //the desired output

    reverse(ans.begin(), ans.end());

    //If the given string is
    //less than 1000
    // cout<<"Size: "<<ans.size()<<endl;
    if(ans.size() % 4 == 0)
    {
        // Remove ','
        ans.erase(ans.begin());
    }
    
    return ans;
}
int main()
{   
    int number = 100;
    string s = thousandSeparator(number);
    cout<<"Expected Value: "<<s<<endl;

    return 0;
}