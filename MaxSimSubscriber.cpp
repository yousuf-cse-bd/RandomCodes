/****
 * @Author: Muhammad Yousuf Ali
 * @Since: ThusDay; 31 October 2019
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int age;
    // cout<<"Enter Yousr Age :";
    // cin>>age;
    int counter = 0;
    while (true)
    {
        cout<<"Enter Your Age :";
        cin>>age;
        if(age>=18)
        {
            counter ++;
            cout<<"\nTake Your SIM Now "<<counter<<" in Number."<<endl;
            if(counter == 20)
            {
                cout<<"Sir, You are coverd your number."<<endl;
                return 0;
            }
        }
        else
        {
            cout<<"Not Valid"<<endl;
        }

        // cout<<"Program Exit..!"<<endl;
    
    }
    
    
    return 0;
}
