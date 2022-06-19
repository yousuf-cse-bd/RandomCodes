#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int currencyValue;
    cin>>currencyValue;
    string value = to_string(currencyValue);

    string firstvalue = value.substr(0, 1);
    firstvalue.append(",");
    // cout<<"F = "<<firstvalue<<endl;
    string secondValue = value.substr(1, 3);
    secondValue.append(",");
    // cout<<"Sec = "<<secondValue<<endl;

    string lastValue = value.substr(4, value.length());
    // cout<<"Last = "<<lastValue<<endl;

    value= "";
    value.append(firstvalue).append(secondValue).append(lastValue);
    cout<<value<<endl;
    

        
    return 0;
}
