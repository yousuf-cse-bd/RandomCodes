#include <iostream>
using namespace std;

int newChocolatesFromWrappers(int wrappers)
{
    int newChocolate = 0;
    int remWrapper;
    while(true)
    {
        
        remWrapper = wrappers % 3;
        wrappers = wrappers / 3;
        newChocolate += wrappers;


        if((remWrapper + wrappers) % 3 == 0)
        {
            newChocolate ++;
            remWrapper = 0;
            // cout<<"First Condition"<<endl;
            break;
        }
        // if((remWrapper + wrappers) % 3 != 0)
        // {
        //     cout<<"Second Condition"<<endl;
        // }
        // else
        // {
        //     cout<<"Else"<<endl;
        // }
        
    }
    // cout<<"Rem Wrapper: "<<remWrapper<<endl;
    return newChocolate;
}

int main(int argc, char const *argv[])
{
    int price = 15;
   
   int bonusChocolates = newChocolatesFromWrappers(price);
   int totalCocolates = price + bonusChocolates;
   cout<<"Totat Chocolates: "<<totalCocolates<<endl;
    

    return 0;
}
