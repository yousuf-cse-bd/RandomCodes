//Sunday, 21 July 2019

#include <iostream>
using namespace std;

int main()
{
    int i, j,num1,num2;
    cin>>num1>>num2;
    if(num1!=num2){
        for(i = 1;i<=num1;i++){
            for(j = 1;j<=num2;j++){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    else
    {
       cout<<num1<<" "<<num2<<endl;
    }


    return 0;
}