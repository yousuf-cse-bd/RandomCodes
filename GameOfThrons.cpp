#include <iostream>
using namespace std;

int main(){

    int num1,num2,sum, c = 0;
    cin>>num1>>num2;
     
    if (num1>num2)
    {
        /* code */
        c = num1 - num2;
        sum = num1 + num2 + c;
        cout<<sum<<endl;
    }  
    else if (num1<num2)
    {
        /* code */
        c = num2 - num1;
        sum = num1 + num2 + c;
        cout<<sum<<endl;
    }
    else
    {
        sum = num1 - num2;
        cout<<sum<<endl;
    }
    
      

    return 0;
}