/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Tuesday; 09/06/2020
 */ 

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char smallChar,capitalChar;
    cout<<"Enter A Capital Letter Here: ";
    cin>>capitalChar;
    cout<<"Enter A Small Letter Here: ";
    cin>>smallChar;

    if(smallChar == capitalChar)
    {
        cout<<"Same."<<endl;
        printf("Small Letter's ASCII value = %d\n",smallChar);
        printf("Capital letter's ASCII Value = %d\n",capitalChar);
        
    }
    else
    {
        cout<<"Not Same!"<<endl;
        printf("Small Letter's ASCII value = %d\n",smallChar);
        printf("Capital letter's ASCII Value = %d\n",capitalChar);
    }
    
    return 0;
}