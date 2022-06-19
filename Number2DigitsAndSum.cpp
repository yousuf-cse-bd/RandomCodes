#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int sum[11];
    int intMax = INT_MAX;
    int intMin = INT_MIN;

    // long long int S = 2147483647 + 2147483648;
    // cout<<"S = "<<S<<endl;
    
    cout<<"INT MAX  = "<<intMax<<endl;
    cout<<"INT MIN = "<<intMin<<endl;

    int rem1, rem2, s = 0, reSize = 0,  carry = 0;
    // int length = 0;

    //Logic implemented
    while (intMin != 0 && intMax != 0){
       rem1 = intMin % 10;
       rem1 = abs(rem1);

       rem2 = intMax % 10;
       s = rem1 + rem2;
       if(s > 9){
           sum[reSize++] = s % 10;
           carry = s / 10;
        // cout<<"Carry = "<<carry<<endl;
       }
       else{
           sum[reSize++] = s + carry;
           carry = 0;
       }
       intMax /= 10;
       intMin /= 10;
    }
    if(carry){
        sum[reSize++] = carry;
        // cout<<"Carry = "<<carry<<endl;
    }
    //Expected result
    cout<<"Sum of   = ";
    for(int i = reSize - 1; i>=0; i--){
        cout<<sum[i];
    }
    cout<<endl;

    return 0;
}
