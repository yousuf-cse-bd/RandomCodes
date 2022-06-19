#include <iostream>
using namespace std;

int main()
{
    double mark;
    do
    {
        cout<<"Enter Your Mark Here: ";
        cin>>mark;

        if(mark >=80 && mark <=100)
        {
            cout<<"Your Result A+"<<endl;
        }
        else if(mark>=70 && mark <=79)
        {
            cout<<"Your Result A"<<endl;
        }
        else if(mark>= 60 && mark <=69)
        {
            cout<<"Your Result A-"<<endl;
        }
        else if(mark>= 50 && mark <=59)
        {
            cout<<"Your Result B"<<endl;
        }
        else if(mark>= 40 && mark <=49)
        {
            cout<<"Your Result C"<<endl;
        }
        else if(mark>= 33 && mark <=39)
        {
            cout<<"Your Result (D) Pass"<<endl;
        }
        else
        {
            cout<<"Fail...!!!"<<endl;
        }

    }
    while(true);


    return 0;
}
