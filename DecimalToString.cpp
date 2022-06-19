/****
 * WAP to read the price of an item in decimal from (like 15.95)
 * and print the output in paise (like 1595 paise)
 */

#include <iostream>
#include <cmath>
using namespace std;
// #define PI 3.14159

int main(int argc, char const *argv[])
{
    /* code */

    double price = 15.95;
    cout<<"In double price: "<<price<<endl;

    string p = to_string(price);
    cout<<"Using To_String: "<<p<<endl;

    int ps = price;
    cout<<"PS = "<<ps<<endl;

    price = fmod(price, ps);
    cout<<"Price: "<<price<<endl;

    // ps = ps + price;
    // cout<<"Ps = "<<ps<<endl;

    
    cout<<ps<<endl;

   
    return 0;
}
