/****
* @Author: Muhammad Yousuf Ali
* @Since: ThursDay, 23 January 2020
*/

#include <iostream>
using namespace std;

int main(void)
{   
    char letter;
    int num;
    while (true)
    {
        cout<<"Enter A Letter Here: ";
        cin>>letter;

        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        {
            num = (int) letter;
            num = num - 32;
            letter = (char) num;    
            cout<<letter<<" is Vowel"<<endl;
        }
        else
        {
            num = (int) letter;
            num = num - 32;
            letter = (char) num;
            cout<<letter<<" is Consotant"<<endl;
        }
        
    }
    

    return 0;
}