#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int option;
   
    do
    {
        cout<<"Enter option value here: ";
        cin>>option;
        switch (option)
        {
        case 0: cout<<"Pressed: "<<option<<" EXIT!!!"<<endl;
        break;
        case 1: cout<<"Pressed: "<<option<<endl;
        break;
        case 2: cout<<"Pressed: "<<option<<endl;
        break;
        case 3: cout<<"Pressed: "<<option<<endl;
        break;
        default:
            cout<<"Default Value...!"<<endl;
            break;
        }
    }while(option != 0);

   
    
    return 0;
}
