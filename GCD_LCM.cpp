/****
 * @Author: Muhammad Yousuf Ali
 * @Since: 25 August 2019
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1,num2,n1,n2,rem;
    cout<<"Enter Num1 = ";
    cin>>num1;
    cout<<"Enter Num2 = ";
    cin>>num2;
    
    n1 = num1;
    n2 = num2;

    while(n2!=0){
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    cout<<"GCD = "<<n1<<endl;
    cout<<"LCM = "<<(num1 * num2)/n1<<endl;

    return 0;
}
