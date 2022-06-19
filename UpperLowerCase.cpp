/*****
 * @Author: Muhammad Yousuf Ali
 * @Since: Wednes Day,22 January 2020
 */
#include <iostream>
using namespace std;

int main()
{
    char ch;
   
    while (true)
    {
       cout<<"Enter A Char Here: ";
       cin>>ch;
       if(ch>='a' && ch <='z')
       {
           cout << "Lower Case Letter"<<endl;
       }
       else if(ch>='A' && ch <='Z')
       {
           cout<<"Upper Case Letter"<<endl;
       }
       else
       {
           break;
       }
       
    }
    

    return 0;
}